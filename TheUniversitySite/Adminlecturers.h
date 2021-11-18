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
	/// Summary for Adminlecturers
	/// </summary>
	public ref class Adminlecturers : public System::Windows::Forms::Form
	{
	public:
		int lecProgrammeChosen;
		Adminlecturers(void)
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
					lecprogramme->Items->Add(Programmeslist);
				}
				con->Close();
				MySqlCommand^ cmd4 = gcnew MySqlCommand("select * from user where role='lecturer'", con);
				con->Open();
				lecturersview->Items->Clear();

				MySqlDataReader^ Dr4 = cmd4->ExecuteReader();
				while (Dr4->Read()) {
					String^ Names = Dr4->GetString("name");
					String^ ID = Dr4->GetString("number");
					lecturersview->Items->Add(ID + "    " + Names);
				}
				con->Close();
			}
			catch (Exception^ Ex)
			{
				MessageBox::Show(Ex->Message);
			}
		}
	private: System::Windows::Forms::ComboBox^ lecprogramme;
	public:

	private: System::Windows::Forms::Label^ namelbl;
	private: System::Windows::Forms::TextBox^ lecname;

	private: System::Windows::Forms::Label^ EmailLbl;
	private: System::Windows::Forms::TextBox^ lecemail;

	public:
		Form^ adhomebck;
		Adminlecturers(Form^adhomebck1)
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
					lecprogramme->Items->Add(Programmeslist);
				}
				con->Close();
				MySqlCommand^ cmd4 = gcnew MySqlCommand("select * from user where role='lecturer'", con);
				con->Open();
				lecturersview->Items->Clear();

				MySqlDataReader^ Dr4 = cmd4->ExecuteReader();
				while (Dr4->Read()) {
					String^ Names = Dr4->GetString("name");
					String^ ID = Dr4->GetString("number");
					lecturersview->Items->Add(ID + "    " + Names);
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
		~Adminlecturers()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	protected:


	private: System::Windows::Forms::Label^ label2;








	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ lecturersview;
	private: System::Windows::Forms::Button^ addlecturers;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ password;



	private: System::Windows::Forms::TextBox^ lecturersid;
	private: System::Windows::Forms::Button^ removelecturers;
	private: System::Windows::Forms::Button^ backbutton;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Adminlecturers::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->namelbl = (gcnew System::Windows::Forms::Label());
			this->lecname = (gcnew System::Windows::Forms::TextBox());
			this->EmailLbl = (gcnew System::Windows::Forms::Label());
			this->lecemail = (gcnew System::Windows::Forms::TextBox());
			this->lecprogramme = (gcnew System::Windows::Forms::ComboBox());
			this->backbutton = (gcnew System::Windows::Forms::Button());
			this->removelecturers = (gcnew System::Windows::Forms::Button());
			this->addlecturers = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->lecturersid = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lecturersview = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->namelbl);
			this->panel2->Controls->Add(this->lecname);
			this->panel2->Controls->Add(this->EmailLbl);
			this->panel2->Controls->Add(this->lecemail);
			this->panel2->Controls->Add(this->lecprogramme);
			this->panel2->Controls->Add(this->backbutton);
			this->panel2->Controls->Add(this->removelecturers);
			this->panel2->Controls->Add(this->addlecturers);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->password);
			this->panel2->Controls->Add(this->lecturersid);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->lecturersview);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(616, 574);
			this->panel2->TabIndex = 2;
			// 
			// namelbl
			// 
			this->namelbl->AutoSize = true;
			this->namelbl->Location = System::Drawing::Point(392, 165);
			this->namelbl->Name = L"namelbl";
			this->namelbl->Size = System::Drawing::Size(35, 13);
			this->namelbl->TabIndex = 42;
			this->namelbl->Text = L"Name";
			// 
			// lecname
			// 
			this->lecname->Location = System::Drawing::Point(395, 181);
			this->lecname->Name = L"lecname";
			this->lecname->Size = System::Drawing::Size(195, 20);
			this->lecname->TabIndex = 41;
			// 
			// EmailLbl
			// 
			this->EmailLbl->AutoSize = true;
			this->EmailLbl->Location = System::Drawing::Point(392, 204);
			this->EmailLbl->Name = L"EmailLbl";
			this->EmailLbl->Size = System::Drawing::Size(32, 13);
			this->EmailLbl->TabIndex = 40;
			this->EmailLbl->Text = L"Email";
			// 
			// lecemail
			// 
			this->lecemail->Location = System::Drawing::Point(395, 220);
			this->lecemail->Name = L"lecemail";
			this->lecemail->Size = System::Drawing::Size(195, 20);
			this->lecemail->TabIndex = 39;
			// 
			// lecprogramme
			// 
			this->lecprogramme->FormattingEnabled = true;
			this->lecprogramme->Location = System::Drawing::Point(395, 357);
			this->lecprogramme->Name = L"lecprogramme";
			this->lecprogramme->Size = System::Drawing::Size(195, 21);
			this->lecprogramme->TabIndex = 38;
			this->lecprogramme->Text = L"Select Programme";
			// 
			// backbutton
			// 
			this->backbutton->Location = System::Drawing::Point(553, 520);
			this->backbutton->Name = L"backbutton";
			this->backbutton->Size = System::Drawing::Size(57, 51);
			this->backbutton->TabIndex = 37;
			this->backbutton->Text = L"Back";
			this->backbutton->UseVisualStyleBackColor = true;
			this->backbutton->Click += gcnew System::EventHandler(this, &Adminlecturers::backbutton_Click);
			// 
			// removelecturers
			// 
			this->removelecturers->Location = System::Drawing::Point(237, 449);
			this->removelecturers->Name = L"removelecturers";
			this->removelecturers->Size = System::Drawing::Size(79, 34);
			this->removelecturers->TabIndex = 36;
			this->removelecturers->Text = L"REMOVE";
			this->removelecturers->UseVisualStyleBackColor = true;
			this->removelecturers->Click += gcnew System::EventHandler(this, &Adminlecturers::removelecturers_Click);
			// 
			// addlecturers
			// 
			this->addlecturers->Location = System::Drawing::Point(511, 384);
			this->addlecturers->Name = L"addlecturers";
			this->addlecturers->Size = System::Drawing::Size(79, 34);
			this->addlecturers->TabIndex = 35;
			this->addlecturers->Text = L"ADD";
			this->addlecturers->UseVisualStyleBackColor = true;
			this->addlecturers->Click += gcnew System::EventHandler(this, &Adminlecturers::addlecturers_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(392, 341);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 13);
			this->label5->TabIndex = 34;
			this->label5->Text = L"Programme";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(392, 291);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 13);
			this->label4->TabIndex = 33;
			this->label4->Text = L"Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(392, 252);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 13);
			this->label3->TabIndex = 32;
			this->label3->Text = L"Lecture ID";
			// 
			// password
			// 
			this->password->Location = System::Drawing::Point(395, 307);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(195, 20);
			this->password->TabIndex = 31;
			// 
			// lecturersid
			// 
			this->lecturersid->Location = System::Drawing::Point(395, 268);
			this->lecturersid->Name = L"lecturersid";
			this->lecturersid->Size = System::Drawing::Size(195, 20);
			this->lecturersid->TabIndex = 29;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(28, 109);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 29);
			this->label1->TabIndex = 20;
			this->label1->Text = L"LECTURERS";
			// 
			// lecturersview
			// 
			this->lecturersview->FormattingEnabled = true;
			this->lecturersview->Location = System::Drawing::Point(42, 139);
			this->lecturersview->Name = L"lecturersview";
			this->lecturersview->Size = System::Drawing::Size(274, 303);
			this->lecturersview->TabIndex = 19;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(408, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 29);
			this->label2->TabIndex = 18;
			this->label2->Text = L"LECTURERS";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.ErrorImage")));
			this->pictureBox2->Location = System::Drawing::Point(519, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(94, 69);
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// Adminlecturers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(613, 571);
			this->Controls->Add(this->panel2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Adminlecturers";
			this->Text = L"Adminlecturers";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void backbutton_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Hide();
		adhomebck->Show();
	}

private: System::Void removelecturers_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		String^ dbconstr = "Server=127.0.0.1; Uid=root; Pwd=Govgovgov01; Database=allocationsystem";
		MySqlConnection^ con = gcnew MySqlConnection(dbconstr);

		String^ deltrow = lecturersview->SelectedItem->ToString();
		String^ deltrow2 = deltrow->Substring(0, 9);
		int Deltrow = Int32::Parse(deltrow2);

		MySqlCommand^ cmd2 = gcnew MySqlCommand("delete from user where number ="+Deltrow+" ", con);


		con->Open();
		MySqlDataReader^ Dr = cmd2->ExecuteReader();
		con->Close();
		MySqlCommand^ cmd5 = gcnew MySqlCommand("select * from user where role='lecturer'", con);
		con->Open();
		lecturersview->Items->Clear();

		MySqlDataReader^ Dr5 = cmd5->ExecuteReader();
		while (Dr5->Read()) {
			String^ Names = Dr5->GetString("name");
			String^ ID = Dr5->GetString("number");
			lecturersview->Items->Add(ID + "    " + Names);
		}
		con->Close();


	}
	catch (Exception^ Ex)
	{
		MessageBox::Show(Ex->Message);
	}
}

private: System::Void addlecturers_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		String^ dbconstr = "Server=127.0.0.1; Uid=root; Pwd=Govgovgov01; Database=allocationsystem";
		MySqlConnection^ con = gcnew MySqlConnection(dbconstr);

		String^ ProgrammeSt = lecprogramme->Text;
		MySqlCommand^ cmd3 = gcnew MySqlCommand("Select idProgramme from programme where programName='"+ ProgrammeSt +"'", con);
		con->Open();
		MySqlDataReader^ Dr3 = cmd3->ExecuteReader();
		while (Dr3->Read()) {
			lecProgrammeChosen = Dr3->GetInt32("idProgramme");
		}
		con->Close();
		
		String^ Password = password->Text;
		String^ Number = lecturersid->Text;
		String^ Role = "lecturer";
		int Programme = lecProgrammeChosen;
		int uniqId=0;
		String^ Lecnames = lecname->Text;
		String^ Email = lecemail->Text;


		MySqlCommand^ cmd = gcnew MySqlCommand("Insert into user values(" +uniqId+ ",'" + Lecnames + "', '" + Number + "', '" + Email + "', '" + Password + "', '" + Role + "'," + Programme + ")", con);
		con->Open();
		MySqlDataReader^ Dr = cmd->ExecuteReader();
		con->Close();

		MySqlCommand^ cmd4 = gcnew MySqlCommand("select * from user where role='lecturer'", con);
		con->Open();
		lecturersview->Items->Clear();

		MySqlDataReader^ Dr4 = cmd4->ExecuteReader();
		while (Dr4->Read()) {
			String^ Names = Dr4->GetString("name");
			String^ ID = Dr4->GetString("number");
			lecturersview->Items->Add(ID + "    " + Names);
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
