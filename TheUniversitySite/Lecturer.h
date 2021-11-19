#pragma once
#include <fstream>
namespace TheUniversitySite {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Lecturer
	/// </summary>
	public ref class Lecturer : public System::Windows::Forms::Form
	{
	public:
		String^ filename;
		String^ filename2;
		String^ filepath;
		String^ filepath2;
		
		Lecturer(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		String^ lecturersdbname;
		int progID;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	public:
		Form^ homebck;
		Lecturer(Form^ homebck1, String^ lecname, int progrmfk)
		{
			progID = progrmfk;
			homebck = homebck1;
			lecturersdbname = lecname;
			InitializeComponent();

			try {
				String^ dbconstr = "Server=127.0.0.1; Uid=root; Pwd=Govgovgov01; Database=allocationsystem";
				MySqlConnection^ con = gcnew MySqlConnection(dbconstr);

				MySqlCommand^ cmd2 = gcnew MySqlCommand("select * from assigment where programnameid= " + progID + "", con);
				MySqlCommand^ cmd3 = gcnew MySqlCommand("select * from programme where idProgramme = " + progrmfk + "", con);
				con->Open();
				MySqlDataReader^ Dr = cmd3->ExecuteReader();
				while (Dr->Read()) {
					programmename->Text = Dr->GetString("programName");
					lecturersname->Text = lecturersdbname;

				}
				con->Close();
				con->Open();
				MySqlDataReader^ Dr2 = cmd2->ExecuteReader();
				while (Dr2->Read()) {

					String^ Programmeslist = Dr2->GetString("name");
					String^ ID = Dr2->GetInt32("idassigment").ToString();
					String^ INDV = Dr2->GetString("invidulator");
					String^ type = Dr2->GetString("type");

					practicalslist->Items->Add(ID + "    " + Programmeslist + "     " + INDV + "     " + type);
				}
				con->Close();
				MySqlCommand^ cmd5 = gcnew MySqlCommand("select * from assigment  where programnameid= " + progID + "", con);
				con->Open();
				projectslist->Items->Clear();
				MySqlDataReader^ Dr5 = cmd5->ExecuteReader();
				while (Dr5->Read()) {

					String^ Programmeslist = Dr5->GetString("name");
					String^ ID = Dr5->GetInt32("idassigment").ToString();
					String^ INDV = Dr5->GetString("invidulator");
					String^ type = Dr5->GetString("type");

					projectslist->Items->Add(ID + "    " + Programmeslist + "     " + INDV + "     " + type);
				}
				con->Close();



			}
			catch (Exception^ Ex)
			{
				MessageBox::Show(Ex->Message);
			}

		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Lecturer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::DateTimePicker^ pracdate;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ removepractical;
	private: System::Windows::Forms::Button^ markscript;



	private: System::Windows::Forms::Button^ submitpractical;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ lecturersname;
	private: System::Windows::Forms::TextBox^ practicalname;



	private: System::Windows::Forms::ListBox^ studentsscripts;

	private: System::Windows::Forms::ListBox^ projectslist;

	private: System::Windows::Forms::ListBox^ practicalslist;
	private: System::Windows::Forms::Button^ addproject;


	private: System::Windows::Forms::DateTimePicker^ projectdate;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ removeproject;

	private: System::Windows::Forms::Button^ submitproject;

	private: System::Windows::Forms::TextBox^ projectname;

	private: System::Windows::Forms::Button^ addpractical;

	private: System::Windows::Forms::TextBox^ programmename;
	private: System::Windows::Forms::Button^ backbutton;

	protected:

	protected:

















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Lecturer::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->backbutton = (gcnew System::Windows::Forms::Button());
			this->programmename = (gcnew System::Windows::Forms::TextBox());
			this->addproject = (gcnew System::Windows::Forms::Button());
			this->projectdate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->removeproject = (gcnew System::Windows::Forms::Button());
			this->submitproject = (gcnew System::Windows::Forms::Button());
			this->projectname = (gcnew System::Windows::Forms::TextBox());
			this->addpractical = (gcnew System::Windows::Forms::Button());
			this->pracdate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->removepractical = (gcnew System::Windows::Forms::Button());
			this->markscript = (gcnew System::Windows::Forms::Button());
			this->submitpractical = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lecturersname = (gcnew System::Windows::Forms::TextBox());
			this->practicalname = (gcnew System::Windows::Forms::TextBox());
			this->studentsscripts = (gcnew System::Windows::Forms::ListBox());
			this->projectslist = (gcnew System::Windows::Forms::ListBox());
			this->practicalslist = (gcnew System::Windows::Forms::ListBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->backbutton);
			this->panel2->Controls->Add(this->programmename);
			this->panel2->Controls->Add(this->addproject);
			this->panel2->Controls->Add(this->projectdate);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->removeproject);
			this->panel2->Controls->Add(this->submitproject);
			this->panel2->Controls->Add(this->projectname);
			this->panel2->Controls->Add(this->addpractical);
			this->panel2->Controls->Add(this->pracdate);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->removepractical);
			this->panel2->Controls->Add(this->markscript);
			this->panel2->Controls->Add(this->submitpractical);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->lecturersname);
			this->panel2->Controls->Add(this->practicalname);
			this->panel2->Controls->Add(this->studentsscripts);
			this->panel2->Controls->Add(this->projectslist);
			this->panel2->Controls->Add(this->practicalslist);
			this->panel2->Location = System::Drawing::Point(0, 1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(608, 642);
			this->panel2->TabIndex = 4;
			// 
			// backbutton
			// 
			this->backbutton->Location = System::Drawing::Point(536, 571);
			this->backbutton->Name = L"backbutton";
			this->backbutton->Size = System::Drawing::Size(56, 50);
			this->backbutton->TabIndex = 33;
			this->backbutton->Text = L"BACK";
			this->backbutton->UseVisualStyleBackColor = true;
			this->backbutton->Click += gcnew System::EventHandler(this, &Lecturer::backbutton_Click);
			// 
			// programmename
			// 
			this->programmename->Location = System::Drawing::Point(419, 43);
			this->programmename->Multiline = true;
			this->programmename->Name = L"programmename";
			this->programmename->ReadOnly = true;
			this->programmename->Size = System::Drawing::Size(171, 26);
			this->programmename->TabIndex = 32;
			// 
			// addproject
			// 
			this->addproject->Location = System::Drawing::Point(418, 363);
			this->addproject->Name = L"addproject";
			this->addproject->Size = System::Drawing::Size(171, 23);
			this->addproject->TabIndex = 31;
			this->addproject->Text = L"ADD PROJECT";
			this->addproject->UseVisualStyleBackColor = true;
			this->addproject->Click += gcnew System::EventHandler(this, &Lecturer::addproject_Click);
			// 
			// projectdate
			// 
			this->projectdate->Location = System::Drawing::Point(418, 337);
			this->projectdate->Name = L"projectdate";
			this->projectdate->Size = System::Drawing::Size(171, 20);
			this->projectdate->TabIndex = 30;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(415, 321);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 13);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Due Date";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(415, 280);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(71, 13);
			this->label7->TabIndex = 28;
			this->label7->Text = L"Project Name";
			// 
			// removeproject
			// 
			this->removeproject->Location = System::Drawing::Point(419, 399);
			this->removeproject->Name = L"removeproject";
			this->removeproject->Size = System::Drawing::Size(75, 23);
			this->removeproject->TabIndex = 27;
			this->removeproject->Text = L"REMOVE";
			this->removeproject->UseVisualStyleBackColor = true;
			this->removeproject->Click += gcnew System::EventHandler(this, &Lecturer::removeproject_Click);
			// 
			// submitproject
			// 
			this->submitproject->Location = System::Drawing::Point(514, 399);
			this->submitproject->Name = L"submitproject";
			this->submitproject->Size = System::Drawing::Size(75, 23);
			this->submitproject->TabIndex = 26;
			this->submitproject->Text = L"SUBMIT";
			this->submitproject->UseVisualStyleBackColor = true;
			this->submitproject->Click += gcnew System::EventHandler(this, &Lecturer::submitproject_Click);
			// 
			// projectname
			// 
			this->projectname->Location = System::Drawing::Point(418, 295);
			this->projectname->Name = L"projectname";
			this->projectname->Size = System::Drawing::Size(171, 20);
			this->projectname->TabIndex = 25;
			// 
			// addpractical
			// 
			this->addpractical->Location = System::Drawing::Point(418, 198);
			this->addpractical->Name = L"addpractical";
			this->addpractical->Size = System::Drawing::Size(171, 23);
			this->addpractical->TabIndex = 24;
			this->addpractical->Text = L"ADD PRACTICAL";
			this->addpractical->UseVisualStyleBackColor = true;
			this->addpractical->Click += gcnew System::EventHandler(this, &Lecturer::addpractical_Click);
			// 
			// pracdate
			// 
			this->pracdate->Location = System::Drawing::Point(418, 172);
			this->pracdate->Name = L"pracdate";
			this->pracdate->Size = System::Drawing::Size(171, 20);
			this->pracdate->TabIndex = 21;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(415, 156);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 13);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Due Date";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(415, 115);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 13);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Practical Name";
			// 
			// removepractical
			// 
			this->removepractical->Location = System::Drawing::Point(419, 234);
			this->removepractical->Name = L"removepractical";
			this->removepractical->Size = System::Drawing::Size(75, 23);
			this->removepractical->TabIndex = 15;
			this->removepractical->Text = L"REMOVE";
			this->removepractical->UseVisualStyleBackColor = true;
			this->removepractical->Click += gcnew System::EventHandler(this, &Lecturer::removepractical_Click);
			// 
			// markscript
			// 
			this->markscript->Location = System::Drawing::Point(261, 598);
			this->markscript->Name = L"markscript";
			this->markscript->Size = System::Drawing::Size(110, 23);
			this->markscript->TabIndex = 14;
			this->markscript->Text = L"MARK SCRIPT";
			this->markscript->UseVisualStyleBackColor = true;
			// 
			// submitpractical
			// 
			this->submitpractical->Location = System::Drawing::Point(514, 234);
			this->submitpractical->Name = L"submitpractical";
			this->submitpractical->Size = System::Drawing::Size(75, 23);
			this->submitpractical->TabIndex = 12;
			this->submitpractical->Text = L"UPLOAD";
			this->submitpractical->UseVisualStyleBackColor = true;
			this->submitpractical->Click += gcnew System::EventHandler(this, &Lecturer::submitpractical_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(9, 438);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(157, 20);
			this->label3->TabIndex = 11;
			this->label3->Text = L"STUDENT SCRIPTS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(9, 265);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 20);
			this->label2->TabIndex = 10;
			this->label2->Text = L"PROJECTS";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(9, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 20);
			this->label1->TabIndex = 9;
			this->label1->Text = L"PRACTICALS";
			// 
			// lecturersname
			// 
			this->lecturersname->Location = System::Drawing::Point(418, 11);
			this->lecturersname->Multiline = true;
			this->lecturersname->Name = L"lecturersname";
			this->lecturersname->ReadOnly = true;
			this->lecturersname->Size = System::Drawing::Size(171, 26);
			this->lecturersname->TabIndex = 5;
			// 
			// practicalname
			// 
			this->practicalname->Location = System::Drawing::Point(418, 130);
			this->practicalname->Name = L"practicalname";
			this->practicalname->Size = System::Drawing::Size(171, 20);
			this->practicalname->TabIndex = 3;
			// 
			// studentsscripts
			// 
			this->studentsscripts->FormattingEnabled = true;
			this->studentsscripts->Location = System::Drawing::Point(15, 461);
			this->studentsscripts->Name = L"studentsscripts";
			this->studentsscripts->Size = System::Drawing::Size(356, 134);
			this->studentsscripts->TabIndex = 2;
			// 
			// projectslist
			// 
			this->projectslist->FormattingEnabled = true;
			this->projectslist->Location = System::Drawing::Point(15, 288);
			this->projectslist->Name = L"projectslist";
			this->projectslist->Size = System::Drawing::Size(356, 147);
			this->projectslist->TabIndex = 1;
			// 
			// practicalslist
			// 
			this->practicalslist->FormattingEnabled = true;
			this->practicalslist->Location = System::Drawing::Point(13, 115);
			this->practicalslist->Name = L"practicalslist";
			this->practicalslist->Size = System::Drawing::Size(358, 147);
			this->practicalslist->TabIndex = 0;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->InitialDirectory = L"C:\\";
			// 
			// Lecturer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(604, 634);
			this->Controls->Add(this->panel2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Lecturer";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Lecturer";
			this->Load += gcnew System::EventHandler(this, &Lecturer::Lecturer_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Lecturer_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void backbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		homebck->Show();
	}
	private: System::Void addpractical_Click(System::Object^ sender, System::EventArgs^ e) {


		openFileDialog1->Title = "Choose File";
		openFileDialog1->ShowDialog();


		filepath = openFileDialog1->FileName;
		filename = openFileDialog1->SafeFileName;


	}
	private: System::Void submitpractical_Click(System::Object^ sender, System::EventArgs^ e) {

		try {
			String^ dbconstr = "Server=127.0.0.1; Uid=root; Pwd=Govgovgov01; Database=allocationsystem";
			MySqlConnection^ con = gcnew MySqlConnection(dbconstr);

			String^ pracnm = practicalname->Text;
			DateTime practicdt = pracdate->Value;
			String^ Type = "practical";
			int IDD = 0;
			int IDD2 = 0;			
			int assfk;


			MySqlCommand^ cmd = gcnew MySqlCommand("insert into assigment values(" + IDD + ",'" + pracnm + "','" + Type + "', '" + filepath + "','" + lecturersdbname + "','" + progID + "')", con);
			MySqlCommand^ cmd2 = gcnew MySqlCommand("select * from assigment  where programnameid= " + progID + "", con);
			MySqlCommand^ cmd3 = gcnew MySqlCommand("select idassigment From assigment order by idassigment Desc Limit 1", con);

			con->Open();
			MySqlDataReader^ Dr = cmd->ExecuteReader();
			con->Close();

			con->Open();
			practicalslist->Items->Clear();
			MySqlDataReader^ Dr2 = cmd2->ExecuteReader();
			while (Dr2->Read()) {

				String^ Programmeslist = Dr2->GetString("name");
				String^ ID = Dr2->GetInt32("idassigment").ToString();
				String^ INDV = Dr2->GetString("invidulator");
				String^ type = Dr2->GetString("type");
				

				practicalslist->Items->Add(ID + "    " + Programmeslist + "     " + INDV + "     " + type);
			}
			con->Close();

			con->Open();
			MySqlDataReader^ Dr3 = cmd3->ExecuteReader();
			while (Dr3->Read()) {
				assfk = Dr3->GetInt32(0);
			}

			con->Close();
			MySqlCommand^ cmd4 = gcnew MySqlCommand("insert into dates values(" + IDD2 + ",'" + practicdt + "','" + assfk + "')", con);
			
			con->Open();
			MySqlDataReader^ Dr4 = cmd4->ExecuteReader();
			con->Close();

		}
		catch (Exception^ Ex)
		{
			MessageBox::Show(Ex->Message);
		}
	}
	private: System::Void removepractical_Click(System::Object^ sender, System::EventArgs^ e) {

		try {
			String^ dbconstr = "Server=127.0.0.1; Uid=root; Pwd=Govgovgov01; Database=allocationsystem";
			MySqlConnection^ con = gcnew MySqlConnection(dbconstr);

			String^ deltrow = practicalslist->SelectedItem->ToString();
			String^ deltrow2 = deltrow->Substring(0, 2);
			int Deltrow = Int32::Parse(deltrow2);

			
			MySqlCommand^ cmd3 = gcnew MySqlCommand("delete from dates where assignmentfk = " + Deltrow + "", con);
			MySqlCommand^ cmd = gcnew MySqlCommand("select * from assigment  where programnameid= " + progID + "", con);

			con->Open();
			MySqlDataReader^ Dr3 = cmd3->ExecuteReader();
			con->Close();

            MySqlCommand^ cmd2 = gcnew MySqlCommand("delete from assigment where idassigment = " + Deltrow + " ", con);
			con->Open();
			MySqlDataReader^ Dr2 = cmd2->ExecuteReader();
			con->Close();

			con->Open();
			practicalslist->Items->Clear();
			MySqlDataReader^ Dr = cmd->ExecuteReader();
			while (Dr->Read()) {

				String^ Programmeslist = Dr->GetString("name");
				String^ ID = Dr->GetInt32("idassigment").ToString();
				String^ INDV = Dr->GetString("invidulator");
				String^ type = Dr->GetString("type");

				practicalslist->Items->Add(ID + "    " + Programmeslist + "     " + INDV + "     " + type);
			}
			con->Close();
		}
		catch (Exception^ Ex)
		{
			MessageBox::Show(Ex->Message);

		}
	}

	private: System::Void addproject_Click(System::Object^ sender, System::EventArgs^ e) {

		openFileDialog1->Title = "Choose File";
		openFileDialog1->ShowDialog();
		filepath2 = openFileDialog1->FileName;
		filename2 = openFileDialog1->SafeFileName;

	}

private: System::Void submitproject_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		String^ dbconstr = "Server=127.0.0.1; Uid=root; Pwd=Govgovgov01; Database=allocationsystem";
		MySqlConnection^ con = gcnew MySqlConnection(dbconstr);

		String^ pracnm2 = projectname->Text;
		DateTime practicdt2 = projectdate->Value;
		String^ Type = "project";
		int IDD = 0;
		int IDD2 = 0;
		int assfk2;


		MySqlCommand^ cmd = gcnew MySqlCommand("insert into assigment values(" + IDD + ",'" + pracnm2 + "','" + Type + "', '" + filepath2 + "','" + lecturersdbname + "','" + progID + "')", con);
		MySqlCommand^ cmd2 = gcnew MySqlCommand("select * from assigment  where programnameid= " + progID + "", con);
		MySqlCommand^ cmd3 = gcnew MySqlCommand("select idassigment From assigment order by idassigment Desc Limit 1", con);

		con->Open();
		MySqlDataReader^ Dr = cmd->ExecuteReader();
		con->Close();

		con->Open();
		projectslist->Items->Clear();
		MySqlDataReader^ Dr2 = cmd2->ExecuteReader();
		while (Dr2->Read()) {

			String^ Programmeslist = Dr2->GetString("name");
			String^ ID = Dr2->GetInt32("idassigment").ToString();
			String^ INDV = Dr2->GetString("invidulator");
			String^ type = Dr2->GetString("type");

			projectslist->Items->Add(ID + "    " + Programmeslist + "     " + INDV + "     " + type);
		}
		con->Close();

		con->Open();
		MySqlDataReader^ Dr3 = cmd3->ExecuteReader();
		while (Dr3->Read()) {
			assfk2 = Dr3->GetInt32(0);
		}
		con->Close();
		MySqlCommand^ cmd4 = gcnew MySqlCommand("insert into dates values(" + IDD2 + ",'" + practicdt2 + "','" + assfk2 + "')", con);

		con->Open();
		MySqlDataReader^ Dr4 = cmd4->ExecuteReader();
		con->Close();

	}
	catch (Exception^ Ex)
	{
		MessageBox::Show(Ex->Message);
	}

}

private: System::Void removeproject_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		String^ dbconstr = "Server=127.0.0.1; Uid=root; Pwd=Govgovgov01; Database=allocationsystem";
		MySqlConnection^ con = gcnew MySqlConnection(dbconstr);

		String^ deltrow = projectslist->SelectedItem->ToString();
		String^ deltrow2 = deltrow->Substring(0, 2);
		int Deltrow = Int32::Parse(deltrow2);


		MySqlCommand^ cmd3 = gcnew MySqlCommand("delete from dates where assignmentfk = " + Deltrow + "", con);
		MySqlCommand^ cmd = gcnew MySqlCommand("select * from assigment  where type =  'project' ", con);

		con->Open();
		MySqlDataReader^ Dr3 = cmd3->ExecuteReader();
		con->Close();

		MySqlCommand^ cmd2 = gcnew MySqlCommand("delete from assigment where idassigment = " + Deltrow + " ", con);
		con->Open();
		MySqlDataReader^ Dr2 = cmd2->ExecuteReader();
		con->Close();

		con->Open();
		projectslist->Items->Clear();
		MySqlDataReader^ Dr = cmd->ExecuteReader();
		while (Dr->Read()) {
			
				String^ Programmeslist = Dr->GetString("name");
				String^ ID = Dr->GetInt32("idassigment").ToString();
				String^ INDV = Dr->GetString("invidulator");
				String^ type = Dr->GetString("type");
				
					projectslist->Items->Add(ID + "    " + Programmeslist + "     " + INDV + "     " + type);
				
			
		}
		con->Close();
	}
	catch (Exception^ Ex)
	{
		MessageBox::Show(Ex->Message);

	}


}
};
}

