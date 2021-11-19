#pragma once

namespace TheUniversitySite {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Adminstudents
	/// </summary>
	public ref class Adminstudents : public System::Windows::Forms::Form
	{
	public:
		 int ProgrammeChosen;
		Adminstudents(void)
		{
			InitializeComponent();
			try {
				String^ dbconstr = "Server=127.0.0.1; Uid=root; Pwd=Govgovgov01; Database=allocationsystem";
				MySqlConnection^ con = gcnew MySqlConnection(dbconstr);
				MySqlCommand^ cmd2 = gcnew MySqlCommand("select * from programme", con);
				con->Open();

				MySqlDataReader^ Dr2 = cmd2->ExecuteReader();
				while (Dr2->Read()) {
					String^ Programmeslist = Dr2->GetString("programName");
					programme->Items->Add(Programmeslist);
				}
				con->Close();
				MySqlCommand^ cmd4 = gcnew MySqlCommand("select * from user where role='student'", con);
				con->Open();
				studentsview->Items->Clear();

				MySqlDataReader^ Dr4 = cmd4->ExecuteReader();
				while (Dr4->Read()) {
					String^ Names = Dr4->GetString("name");
					String^ ID = Dr4->GetString("number");
					studentsview->Items->Add(ID + "    " + Names);
				}
				con->Close();
			}
			catch (Exception^ Ex)
			{
				MessageBox::Show(Ex->Message);
			}
			
		}
	private: System::Windows::Forms::TextBox^ emailstud;
	private: System::Windows::Forms::Label^ namelbl;
	private: System::Windows::Forms::TextBox^ studnamebx;
	private: System::Windows::Forms::Label^ Emaillbl;
	public:

	public:

		   Form^ adhomebck;
		Adminstudents(Form^adhomebck1)
		{
			adhomebck = adhomebck1;
			InitializeComponent();
			try {
				String^ dbconstr = "Server=127.0.0.1; Uid=root; Pwd=Govgovgov01; Database=allocationsystem";
				MySqlConnection^ con = gcnew MySqlConnection(dbconstr);
				MySqlCommand^ cmd2 = gcnew MySqlCommand("select * from programme", con);
				con->Open();

				MySqlDataReader^ Dr2 = cmd2->ExecuteReader();
				while (Dr2->Read()) {
					String^ Programmeslist = Dr2->GetString("programName");
					programme->Items->Add(Programmeslist);
				}
				con->Close();
				MySqlCommand^ cmd4 = gcnew MySqlCommand("select * from user where role='student'", con);
				con->Open();
				studentsview->Items->Clear();

				MySqlDataReader^ Dr4 = cmd4->ExecuteReader();
				while (Dr4->Read()) {
					String^ Names = Dr4->GetString("name");
					String^ ID = Dr4->GetString("number");
					studentsview->Items->Add(ID + "    " + Names);
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
		~Adminstudents()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ addstudents;
	protected:

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ password;



	private: System::Windows::Forms::TextBox^ studentnumber;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ListBox^ studentsview;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ removestudents;
	private: System::Windows::Forms::Button^ backbutton;
	private: System::Windows::Forms::ComboBox^ programme;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Adminstudents::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->namelbl = (gcnew System::Windows::Forms::Label());
			this->studnamebx = (gcnew System::Windows::Forms::TextBox());
			this->Emaillbl = (gcnew System::Windows::Forms::Label());
			this->emailstud = (gcnew System::Windows::Forms::TextBox());
			this->programme = (gcnew System::Windows::Forms::ComboBox());
			this->backbutton = (gcnew System::Windows::Forms::Button());
			this->removestudents = (gcnew System::Windows::Forms::Button());
			this->addstudents = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->studentnumber = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->studentsview = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->namelbl);
			this->panel2->Controls->Add(this->studnamebx);
			this->panel2->Controls->Add(this->Emaillbl);
			this->panel2->Controls->Add(this->emailstud);
			this->panel2->Controls->Add(this->programme);
			this->panel2->Controls->Add(this->backbutton);
			this->panel2->Controls->Add(this->removestudents);
			this->panel2->Controls->Add(this->addstudents);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->password);
			this->panel2->Controls->Add(this->studentnumber);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->studentsview);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Location = System::Drawing::Point(1, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(629, 610);
			this->panel2->TabIndex = 2;
			// 
			// namelbl
			// 
			this->namelbl->AutoSize = true;
			this->namelbl->Location = System::Drawing::Point(401, 156);
			this->namelbl->Name = L"namelbl";
			this->namelbl->Size = System::Drawing::Size(35, 13);
			this->namelbl->TabIndex = 35;
			this->namelbl->Text = L"Name";
			// 
			// studnamebx
			// 
			this->studnamebx->Location = System::Drawing::Point(404, 172);
			this->studnamebx->Name = L"studnamebx";
			this->studnamebx->Size = System::Drawing::Size(194, 20);
			this->studnamebx->TabIndex = 34;
			// 
			// Emaillbl
			// 
			this->Emaillbl->AutoSize = true;
			this->Emaillbl->Location = System::Drawing::Point(403, 197);
			this->Emaillbl->Name = L"Emaillbl";
			this->Emaillbl->Size = System::Drawing::Size(32, 13);
			this->Emaillbl->TabIndex = 33;
			this->Emaillbl->Text = L"Email";
			// 
			// emailstud
			// 
			this->emailstud->Location = System::Drawing::Point(404, 213);
			this->emailstud->Name = L"emailstud";
			this->emailstud->Size = System::Drawing::Size(195, 20);
			this->emailstud->TabIndex = 32;
			// 
			// programme
			// 
			this->programme->FormattingEnabled = true;
			this->programme->Location = System::Drawing::Point(406, 360);
			this->programme->Name = L"programme";
			this->programme->Size = System::Drawing::Size(194, 21);
			this->programme->TabIndex = 31;
			this->programme->Text = L"Select Programme";
			// 
			// backbutton
			// 
			this->backbutton->Location = System::Drawing::Point(557, 545);
			this->backbutton->Name = L"backbutton";
			this->backbutton->Size = System::Drawing::Size(59, 51);
			this->backbutton->TabIndex = 30;
			this->backbutton->Text = L"BACK";
			this->backbutton->UseVisualStyleBackColor = true;
			this->backbutton->Click += gcnew System::EventHandler(this, &Adminstudents::backbutton_Click);
			// 
			// removestudents
			// 
			this->removestudents->Location = System::Drawing::Point(257, 480);
			this->removestudents->Name = L"removestudents";
			this->removestudents->Size = System::Drawing::Size(79, 34);
			this->removestudents->TabIndex = 29;
			this->removestudents->Text = L"REMOVE";
			this->removestudents->UseVisualStyleBackColor = true;
			this->removestudents->Click += gcnew System::EventHandler(this, &Adminstudents::removestudents_Click);
			// 
			// addstudents
			// 
			this->addstudents->Location = System::Drawing::Point(520, 387);
			this->addstudents->Name = L"addstudents";
			this->addstudents->Size = System::Drawing::Size(79, 34);
			this->addstudents->TabIndex = 28;
			this->addstudents->Text = L"ADD";
			this->addstudents->UseVisualStyleBackColor = true;
			this->addstudents->Click += gcnew System::EventHandler(this, &Adminstudents::addstudents_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(403, 344);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 13);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Programme";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(401, 295);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 13);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(401, 245);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 13);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Student Number";
			// 
			// password
			// 
			this->password->Location = System::Drawing::Point(404, 311);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(195, 20);
			this->password->TabIndex = 24;
			// 
			// studentnumber
			// 
			this->studentnumber->Location = System::Drawing::Point(404, 261);
			this->studentnumber->Name = L"studentnumber";
			this->studentnumber->Size = System::Drawing::Size(195, 20);
			this->studentnumber->TabIndex = 20;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(11, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 29);
			this->label2->TabIndex = 19;
			this->label2->Text = L"STUDENTS";
			// 
			// studentsview
			// 
			this->studentsview->FormattingEnabled = true;
			this->studentsview->Location = System::Drawing::Point(31, 132);
			this->studentsview->Name = L"studentsview";
			this->studentsview->Size = System::Drawing::Size(305, 342);
			this->studentsview->TabIndex = 18;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(432, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 29);
			this->label1->TabIndex = 17;
			this->label1->Text = L"STUDENTS";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->Location = System::Drawing::Point(541, 10);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(85, 69);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// Adminstudents
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(629, 610);
			this->Controls->Add(this->panel2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Adminstudents";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Adminstudents";
			this->Load += gcnew System::EventHandler(this, &Adminstudents::Adminstudents_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Adminstudents_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void addstudents_Click(System::Object^ sender, System::EventArgs^ e) {

		
		try {
			String^ dbconstr = "Server=127.0.0.1; Uid=root; Pwd=Govgovgov01; Database=allocationsystem";
			MySqlConnection^ con = gcnew MySqlConnection(dbconstr);

			String^ ProgrammeSt = programme->Text;			
			MySqlCommand^ cmd3 = gcnew MySqlCommand("Select idProgramme from programme where programName='"+ProgrammeSt+"'", con);
			con->Open();
			MySqlDataReader^ Dr3 = cmd3->ExecuteReader();
			while (Dr3->Read()) {
				ProgrammeChosen = Dr3->GetInt32("idProgramme");			}
			con->Close();

			String^ Password = password->Text;					
			String^ Number = studentnumber->Text;	
			String^ Role = "student";
			int Programme= ProgrammeChosen;
			int Id=0;
			String^ stdname = studnamebx->Text; 
			String^ Email = emailstud->Text;
			

			MySqlCommand^ cmd = gcnew MySqlCommand("Insert into user values(" + Id + ",'" + stdname + "', '" + Number + "', '" + Email + "', '" + Password + "', '" + Role + "',"+ Programme +")", con);
			con->Open();
			MySqlDataReader^ Dr = cmd->ExecuteReader();
			con->Close();

			MySqlCommand^ cmd4 = gcnew MySqlCommand("select * from user where role='student'", con);
			con->Open();
			studentsview->Items->Clear();

			MySqlDataReader^ Dr4 = cmd4->ExecuteReader();
			while (Dr4->Read()) {
				String^ Names = Dr4->GetString("name");
				String^ ID = Dr4->GetString("number");
				studentsview->Items->Add(ID + "    " + Names);
			}
			con->Close();

		}
		catch (Exception^ Ex)
		{
			MessageBox::Show(Ex->Message);
		}

	}
private: System::Void backbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	adhomebck->Show();
}


private: System::Void removestudents_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		String^ dbconstr = "Server=127.0.0.1; Uid=root; Pwd=Govgovgov01; Database=allocationsystem";
		MySqlConnection^ con = gcnew MySqlConnection(dbconstr);

		String^ deltrow = studentsview->SelectedItem->ToString();
		String^ deltrow2 = deltrow->Substring(0, 9);
		int Deltrow = Int32::Parse(deltrow2);

		MySqlCommand^ cmd2 = gcnew MySqlCommand("delete from user where number ="+Deltrow+" ", con);
		

		con->Open();
		MySqlDataReader^ Dr = cmd2->ExecuteReader();
		con->Close();
		MySqlCommand^ cmd4 = gcnew MySqlCommand("select * from user where role='student'", con);
		con->Open();
		studentsview->Items->Clear();

		MySqlDataReader^ Dr4 = cmd4->ExecuteReader();
		while (Dr4->Read()) {
			String^ Names = Dr4->GetString("name");
			String^ ID = Dr4->GetString("number");
			studentsview->Items->Add(ID + "    " + Names);
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
