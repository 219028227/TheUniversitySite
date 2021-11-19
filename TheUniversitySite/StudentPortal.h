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
	/// Summary for StudentPortal
	/// </summary>
	public ref class StudentPortal : public System::Windows::Forms::Form
	{
	public:
		StudentPortal(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Form^ bck;
		String^ studdbname;
		int progID;
		
	private: System::Windows::Forms::CheckBox^ pracslec1;
	private: System::Windows::Forms::CheckBox^ projslec;
	private: System::Windows::Forms::CheckBox^ pracslec2;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	public:

	public:
		int StudUnID;
		StudentPortal(Form^bck1,String^ stdname, int prgmnum,int Unid)
		{
			bck = bck1;
			progID = prgmnum;
			studdbname = stdname;
			StudUnID = Unid;
			InitializeComponent();

			try {
				String^ dbconstr = "Server=127.0.0.1; Uid=root; Pwd=Govgovgov01; Database=allocationsystem";
				MySqlConnection^ con = gcnew MySqlConnection(dbconstr);


				MySqlCommand^ cmd3 = gcnew MySqlCommand("select * from programme where idProgramme = " + prgmnum + "", con);
				con->Open();
				MySqlDataReader^ Dr3 = cmd3->ExecuteReader();
				while (Dr3->Read()) {
					programmename1->Text = Dr3->GetString("programName");
					studentnumber->Text = studdbname;

				}
				con->Close();

				MySqlCommand^ cmd2 = gcnew MySqlCommand("select * from assigment where programnameid= " + progID + "", con);
				con->Open();

				MySqlDataReader^ Dr2 = cmd2->ExecuteReader();
				while (Dr2->Read()) {
					String^ Programmeslist = Dr2->GetString("name");
					int id = Dr2->GetInt32("idassigment");
					String^ invid = Dr2->GetString("invidulator");
					String^ Programmeslist2 = Dr2->GetString("type");
					if (Programmeslist2 == "practical") {
						choosepractical->Items->Add(id+"    "+Programmeslist+"    "+invid);
						choosepractical2->Items->Add(id+"    "+Programmeslist+"    "+invid);
					}
					else { chooseproject->Items->Add(id+"    "+Programmeslist+"    "+invid); }
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
		~StudentPortal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ grades2;

	private: System::Windows::Forms::TextBox^ practicalupload2;
	private: System::Windows::Forms::Button^ upload2;




	private: System::Windows::Forms::ComboBox^ choosepractical2;

	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ grades1;

	private: System::Windows::Forms::TextBox^ practicalupload1;
	private: System::Windows::Forms::Button^ upload1;




	private: System::Windows::Forms::ComboBox^ choosepractical;

	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ grades3;

	private: System::Windows::Forms::TextBox^ projectupload;
	private: System::Windows::Forms::Button^ upload3;




	private: System::Windows::Forms::ComboBox^ chooseproject;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ studentnumber;
		private: System::Windows::Forms::TextBox^ programmename1;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ backbutton;



	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentPortal::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->projslec = (gcnew System::Windows::Forms::CheckBox());
			this->pracslec2 = (gcnew System::Windows::Forms::CheckBox());
			this->pracslec1 = (gcnew System::Windows::Forms::CheckBox());
			this->backbutton = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->programmename1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->grades2 = (gcnew System::Windows::Forms::TextBox());
			this->practicalupload2 = (gcnew System::Windows::Forms::TextBox());
			this->upload2 = (gcnew System::Windows::Forms::Button());
			this->choosepractical2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->grades1 = (gcnew System::Windows::Forms::TextBox());
			this->practicalupload1 = (gcnew System::Windows::Forms::TextBox());
			this->upload1 = (gcnew System::Windows::Forms::Button());
			this->choosepractical = (gcnew System::Windows::Forms::ComboBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->grades3 = (gcnew System::Windows::Forms::TextBox());
			this->projectupload = (gcnew System::Windows::Forms::TextBox());
			this->upload3 = (gcnew System::Windows::Forms::Button());
			this->chooseproject = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->studentnumber = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->projslec);
			this->panel2->Controls->Add(this->pracslec2);
			this->panel2->Controls->Add(this->pracslec1);
			this->panel2->Controls->Add(this->backbutton);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->programmename1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->grades2);
			this->panel2->Controls->Add(this->practicalupload2);
			this->panel2->Controls->Add(this->upload2);
			this->panel2->Controls->Add(this->choosepractical2);
			this->panel2->Controls->Add(this->textBox10);
			this->panel2->Controls->Add(this->grades1);
			this->panel2->Controls->Add(this->practicalupload1);
			this->panel2->Controls->Add(this->upload1);
			this->panel2->Controls->Add(this->choosepractical);
			this->panel2->Controls->Add(this->textBox7);
			this->panel2->Controls->Add(this->grades3);
			this->panel2->Controls->Add(this->projectupload);
			this->panel2->Controls->Add(this->upload3);
			this->panel2->Controls->Add(this->chooseproject);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->studentnumber);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(604, 610);
			this->panel2->TabIndex = 4;
			// 
			// projslec
			// 
			this->projslec->AutoSize = true;
			this->projslec->Location = System::Drawing::Point(292, 458);
			this->projslec->Name = L"projslec";
			this->projslec->Size = System::Drawing::Size(67, 17);
			this->projslec->TabIndex = 29;
			this->projslec->Text = L"SELECT";
			this->projslec->UseVisualStyleBackColor = true;
			this->projslec->CheckedChanged += gcnew System::EventHandler(this, &StudentPortal::projslec_CheckedChanged);
			// 
			// pracslec2
			// 
			this->pracslec2->AutoSize = true;
			this->pracslec2->Location = System::Drawing::Point(292, 298);
			this->pracslec2->Name = L"pracslec2";
			this->pracslec2->Size = System::Drawing::Size(67, 17);
			this->pracslec2->TabIndex = 28;
			this->pracslec2->Text = L"SELECT";
			this->pracslec2->UseVisualStyleBackColor = true;
			this->pracslec2->CheckedChanged += gcnew System::EventHandler(this, &StudentPortal::pracslec2_CheckedChanged);
			// 
			// pracslec1
			// 
			this->pracslec1->AutoSize = true;
			this->pracslec1->Location = System::Drawing::Point(292, 145);
			this->pracslec1->Name = L"pracslec1";
			this->pracslec1->Size = System::Drawing::Size(67, 17);
			this->pracslec1->TabIndex = 27;
			this->pracslec1->Text = L"SELECT";
			this->pracslec1->UseVisualStyleBackColor = true;
			this->pracslec1->CheckedChanged += gcnew System::EventHandler(this, &StudentPortal::pracslec1_CheckedChanged);
			// 
			// backbutton
			// 
			this->backbutton->Location = System::Drawing::Point(538, 540);
			this->backbutton->Name = L"backbutton";
			this->backbutton->Size = System::Drawing::Size(63, 56);
			this->backbutton->TabIndex = 26;
			this->backbutton->Text = L"LOGOUT";
			this->backbutton->UseVisualStyleBackColor = true;
			this->backbutton->Click += gcnew System::EventHandler(this, &StudentPortal::backbutton_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(19, 419);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(58, 20);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Project";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(19, 266);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 20);
			this->label5->TabIndex = 24;
			this->label5->Text = L"Practical";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(19, 108);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 20);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Practical";
			// 
			// programmename1
			// 
			this->programmename1->Location = System::Drawing::Point(425, 55);
			this->programmename1->Multiline = true;
			this->programmename1->Name = L"programmename1";
			this->programmename1->ReadOnly = true;
			this->programmename1->Size = System::Drawing::Size(164, 25);
			this->programmename1->TabIndex = 22;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(30, 524);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 13);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Grades";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(30, 364);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 13);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Grades";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(30, 211);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Grades";
			// 
			// grades2
			// 
			this->grades2->Location = System::Drawing::Point(33, 380);
			this->grades2->Multiline = true;
			this->grades2->Name = L"grades2";
			this->grades2->Size = System::Drawing::Size(100, 20);
			this->grades2->TabIndex = 18;
			// 
			// practicalupload2
			// 
			this->practicalupload2->Location = System::Drawing::Point(33, 336);
			this->practicalupload2->Name = L"practicalupload2";
			this->practicalupload2->ReadOnly = true;
			this->practicalupload2->Size = System::Drawing::Size(244, 20);
			this->practicalupload2->TabIndex = 17;
			// 
			// upload2
			// 
			this->upload2->Location = System::Drawing::Point(292, 334);
			this->upload2->Name = L"upload2";
			this->upload2->Size = System::Drawing::Size(118, 23);
			this->upload2->TabIndex = 16;
			this->upload2->Text = L"UPLOAD";
			this->upload2->UseVisualStyleBackColor = true;
			this->upload2->Click += gcnew System::EventHandler(this, &StudentPortal::upload2_Click);
			// 
			// choosepractical2
			// 
			this->choosepractical2->FormattingEnabled = true;
			this->choosepractical2->Location = System::Drawing::Point(33, 294);
			this->choosepractical2->Name = L"choosepractical2";
			this->choosepractical2->Size = System::Drawing::Size(244, 21);
			this->choosepractical2->TabIndex = 14;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(23, 274);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(418, 142);
			this->textBox10->TabIndex = 13;
			// 
			// grades1
			// 
			this->grades1->Location = System::Drawing::Point(33, 227);
			this->grades1->Multiline = true;
			this->grades1->Name = L"grades1";
			this->grades1->Size = System::Drawing::Size(100, 20);
			this->grades1->TabIndex = 12;
			// 
			// practicalupload1
			// 
			this->practicalupload1->Location = System::Drawing::Point(33, 183);
			this->practicalupload1->Name = L"practicalupload1";
			this->practicalupload1->ReadOnly = true;
			this->practicalupload1->Size = System::Drawing::Size(244, 20);
			this->practicalupload1->TabIndex = 11;
			// 
			// upload1
			// 
			this->upload1->Location = System::Drawing::Point(292, 181);
			this->upload1->Name = L"upload1";
			this->upload1->Size = System::Drawing::Size(118, 23);
			this->upload1->TabIndex = 10;
			this->upload1->Text = L"UPLOAD";
			this->upload1->UseVisualStyleBackColor = true;
			this->upload1->Click += gcnew System::EventHandler(this, &StudentPortal::upload1_Click);
			// 
			// choosepractical
			// 
			this->choosepractical->FormattingEnabled = true;
			this->choosepractical->Location = System::Drawing::Point(33, 141);
			this->choosepractical->Name = L"choosepractical";
			this->choosepractical->Size = System::Drawing::Size(244, 21);
			this->choosepractical->TabIndex = 8;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(23, 121);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(418, 142);
			this->textBox7->TabIndex = 7;
			// 
			// grades3
			// 
			this->grades3->Location = System::Drawing::Point(33, 540);
			this->grades3->Multiline = true;
			this->grades3->Name = L"grades3";
			this->grades3->Size = System::Drawing::Size(100, 20);
			this->grades3->TabIndex = 6;
			// 
			// projectupload
			// 
			this->projectupload->Location = System::Drawing::Point(33, 496);
			this->projectupload->Name = L"projectupload";
			this->projectupload->ReadOnly = true;
			this->projectupload->Size = System::Drawing::Size(244, 20);
			this->projectupload->TabIndex = 5;
			// 
			// upload3
			// 
			this->upload3->Location = System::Drawing::Point(292, 494);
			this->upload3->Name = L"upload3";
			this->upload3->Size = System::Drawing::Size(118, 23);
			this->upload3->TabIndex = 4;
			this->upload3->Text = L"UPLOAD";
			this->upload3->UseVisualStyleBackColor = true;
			this->upload3->Click += gcnew System::EventHandler(this, &StudentPortal::upload3_Click);
			// 
			// chooseproject
			// 
			this->chooseproject->FormattingEnabled = true;
			this->chooseproject->Location = System::Drawing::Point(33, 454);
			this->chooseproject->Name = L"chooseproject";
			this->chooseproject->Size = System::Drawing::Size(244, 21);
			this->chooseproject->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(23, 434);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(418, 142);
			this->textBox2->TabIndex = 1;
			// 
			// studentnumber
			// 
			this->studentnumber->Location = System::Drawing::Point(425, 12);
			this->studentnumber->Multiline = true;
			this->studentnumber->Name = L"studentnumber";
			this->studentnumber->ReadOnly = true;
			this->studentnumber->Size = System::Drawing::Size(164, 25);
			this->studentnumber->TabIndex = 0;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->InitialDirectory = L"C:\\";
			// 
			// StudentPortal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(601, 599);
			this->Controls->Add(this->panel2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"StudentPortal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StudentPortal";
			this->Load += gcnew System::EventHandler(this, &StudentPortal::StudentPortal_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void StudentPortal_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
private: System::Void backbutton_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Hide();
	bck->Show();}

private: System::Void pracslec1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	  
	
	if (pracslec1->Checked==true) {
		choosepractical->Enabled = false;

		try {
			String^ dbconstr = "Server=127.0.0.1; Uid=root; Pwd=Govgovgov01; Database=allocationsystem";
			MySqlConnection^ con = gcnew MySqlConnection(dbconstr);

			String^ deltrow = choosepractical->Text;
			String^ deltrow2 = deltrow->Substring(0, 2);
			int Deltrow = Int32::Parse(deltrow2);
			int IDUA = 0;

			MySqlCommand^ cmd2 = gcnew MySqlCommand("insert into userassignments values(" + IDUA + " ," + StudUnID + "," + Deltrow + " )", con);

			con->Open();
			MySqlDataReader^ Dr = cmd2->ExecuteReader();
			con->Close();

		}
		catch (Exception^ Ex)
		{
			MessageBox::Show(Ex->Message);
		}

	}
	else {
		choosepractical->Enabled = true;
		try {
			String^ dbconstr = "Server=127.0.0.1; Uid=root; Pwd=Govgovgov01; Database=allocationsystem";
			MySqlConnection^ con = gcnew MySqlConnection(dbconstr);

			String^ deltrow = choosepractical->Text;
			String^ deltrow2 = deltrow->Substring(0, 2);
			int Deltrow = Int32::Parse(deltrow2);
			int IDUA = 0;

			MySqlCommand^ cmd2 = gcnew MySqlCommand("delete from userassignments where assignuserfk1= " + Deltrow + " and userassignfk1= " +StudUnID+ "", con);

			con->Open();
			MySqlDataReader^ Dr = cmd2->ExecuteReader();
			con->Close();

		}
		catch (Exception^ Ex)
		{
			MessageBox::Show(Ex->Message);
		}
	}


}


private: System::Void upload1_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ Filepath;
	String^ Filename;
	openFileDialog1->Title = "Choose File";
	openFileDialog1->ShowDialog();
	Filepath = openFileDialog1->FileName;
	Filename = openFileDialog1->SafeFileName;
	if (Filepath != "") {
		String^ deltrow = choosepractical->Text;
		String^ deltrow2 = deltrow->Substring(0, 2);
		int Deltrow = Int32::Parse(deltrow2);
		int IDD = 0;

		try {
			String^ dbconstr = "Server=127.0.0.1; Uid=root; Pwd=Govgovgov01; Database=allocationsystem";
			MySqlConnection^ con = gcnew MySqlConnection(dbconstr);
			MySqlCommand^ cmd = gcnew MySqlCommand("insert into submission values(" + IDD + ",'" + Filepath + "','" + StudUnID + "', '" + Deltrow + "')", con);
			con->Open();
			MySqlDataReader^ Dr = cmd->ExecuteReader();
			con->Close();
			practicalupload1->Text = Filename;
			MessageBox::Show("File Uploaded Successfully");
		}
		catch (Exception^ Ex)
		{
			MessageBox::Show(Ex->Message);
		}
	}
}


private: System::Void pracslec2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	
	if (pracslec2->Checked == true) {
		choosepractical2->Enabled = false;

		try {
			String^ dbconstr = "Server=127.0.0.1; Uid=root; Pwd=Govgovgov01; Database=allocationsystem";
			MySqlConnection^ con = gcnew MySqlConnection(dbconstr);

			String^ deltrow = choosepractical2->Text;
			String^ deltrow2 = deltrow->Substring(0, 2);
			int Deltrow = Int32::Parse(deltrow2);
			int IDUA = 0;

			MySqlCommand^ cmd2 = gcnew MySqlCommand("insert into userassignments values(" + IDUA + " ," + StudUnID + "," + Deltrow + " )", con);

			con->Open();
			MySqlDataReader^ Dr = cmd2->ExecuteReader();
			con->Close();

		}
		catch (Exception^ Ex)
		{
			MessageBox::Show(Ex->Message);
		}

	}
	else {
		choosepractical2->Enabled = true;
		try {
			String^ dbconstr = "Server=127.0.0.1; Uid=root; Pwd=Govgovgov01; Database=allocationsystem";
			MySqlConnection^ con = gcnew MySqlConnection(dbconstr);

			String^ deltrow = choosepractical2->Text;
			String^ deltrow2 = deltrow->Substring(0, 2);
			int Deltrow = Int32::Parse(deltrow2);
			int IDUA = 0;

			MySqlCommand^ cmd2 = gcnew MySqlCommand("delete from userassignments where assignuserfk1= " + Deltrow + " and userassignfk1= " + StudUnID + "", con);

			con->Open();
			MySqlDataReader^ Dr = cmd2->ExecuteReader();
			con->Close();

		}
		catch (Exception^ Ex)
		{
			MessageBox::Show(Ex->Message);
		}
	}

}


private: System::Void upload2_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ Filepath;
	String^ Filename;
	openFileDialog1->Title = "Choose File";
	openFileDialog1->ShowDialog();
	Filepath = openFileDialog1->FileName;
	Filename = openFileDialog1->SafeFileName;
	if (Filepath != "") {
		String^ deltrow = choosepractical2->Text;
		String^ deltrow2 = deltrow->Substring(0, 2);
		int Deltrow = Int32::Parse(deltrow2);
		int IDD = 0;

		try {
			String^ dbconstr = "Server=127.0.0.1; Uid=root; Pwd=Govgovgov01; Database=allocationsystem";
			MySqlConnection^ con = gcnew MySqlConnection(dbconstr);
			MySqlCommand^ cmd = gcnew MySqlCommand("insert into submission values(" + IDD + ",'" + Filepath + "','" + StudUnID + "', '" + Deltrow + "')", con);
			con->Open();
			MySqlDataReader^ Dr = cmd->ExecuteReader();
			con->Close();
			practicalupload2->Text = Filename;
			MessageBox::Show("File Uploaded Successfully");
		}
		catch (Exception^ Ex)
		{
			MessageBox::Show(Ex->Message);
		}
	}
}


private: System::Void projslec_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (projslec->Checked == true) {
		chooseproject->Enabled = false;

		try {
			String^ dbconstr = "Server=127.0.0.1; Uid=root; Pwd=Govgovgov01; Database=allocationsystem";
			MySqlConnection^ con = gcnew MySqlConnection(dbconstr);

			String^ deltrow = chooseproject->Text;
			String^ deltrow2 = deltrow->Substring(0, 2);
			int Deltrow = Int32::Parse(deltrow2);
			int IDUA = 0;

			MySqlCommand^ cmd2 = gcnew MySqlCommand("insert into userassignments values(" + IDUA + " ," + StudUnID + "," + Deltrow + " )", con);

			con->Open();
			MySqlDataReader^ Dr = cmd2->ExecuteReader();
			con->Close();

		}
		catch (Exception^ Ex)
		{
			MessageBox::Show(Ex->Message);
		}

	}
	else {
		chooseproject->Enabled = true;
		try {
			String^ dbconstr = "Server=127.0.0.1; Uid=root; Pwd=Govgovgov01; Database=allocationsystem";
			MySqlConnection^ con = gcnew MySqlConnection(dbconstr);

			String^ deltrow = chooseproject->Text;
			String^ deltrow2 = deltrow->Substring(0, 2);
			int Deltrow = Int32::Parse(deltrow2);
			int IDUA = 0;

			MySqlCommand^ cmd2 = gcnew MySqlCommand("delete from userassignments where assignuserfk1= " + Deltrow + " and userassignfk1= " + StudUnID + "", con);

			con->Open();
			MySqlDataReader^ Dr = cmd2->ExecuteReader();
			con->Close();

		}
		catch (Exception^ Ex)
		{
			MessageBox::Show(Ex->Message);
		}
	}

}


private: System::Void upload3_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ Filepath;
	String^ Filename;
	openFileDialog1->Title = "Choose File";
	openFileDialog1->ShowDialog();
	Filepath = openFileDialog1->FileName;
	Filename = openFileDialog1->SafeFileName;
	if (Filepath != "") {
		String^ deltrow = chooseproject->Text;
		String^ deltrow2 = deltrow->Substring(0, 2);
		int Deltrow = Int32::Parse(deltrow2);
		int IDD = 0;

		try {
			String^ dbconstr = "Server=127.0.0.1; Uid=root; Pwd=Govgovgov01; Database=allocationsystem";
			MySqlConnection^ con = gcnew MySqlConnection(dbconstr);
			MySqlCommand^ cmd = gcnew MySqlCommand("insert into submission values(" + IDD + ",'" + Filepath + "','" + StudUnID + "', '" + Deltrow + "')", con);
			con->Open();
			MySqlDataReader^ Dr = cmd->ExecuteReader();
			con->Close();
			projectupload->Text = Filename;
			MessageBox::Show("File Uploaded Successfully");
		}
		catch (Exception^ Ex)
		{
			MessageBox::Show(Ex->Message);
		}
	}

}
};



}
