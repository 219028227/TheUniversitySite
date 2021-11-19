#pragma once
#include "Adminlogin.h"
#include "StudentPortal.h"
#include "Lecturer.h"

namespace TheUniversitySite {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for HomePage
	/// </summary>
	public ref class HomePage : public System::Windows::Forms::Form
	{
	public:
		HomePage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HomePage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ password;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ admin;

	private: System::Windows::Forms::Button^ login;


	private: System::Windows::Forms::Label^ label2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HomePage::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->admin = (gcnew System::Windows::Forms::Button());
			this->login = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->admin);
			this->panel1->Controls->Add(this->login);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->password);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(0, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(601, 599);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &HomePage::panel1_Paint);
			// 
			// admin
			// 
			this->admin->Location = System::Drawing::Point(12, 525);
			this->admin->Name = L"admin";
			this->admin->Size = System::Drawing::Size(54, 53);
			this->admin->TabIndex = 6;
			this->admin->Text = L"Admin";
			this->admin->UseVisualStyleBackColor = true;
			this->admin->Click += gcnew System::EventHandler(this, &HomePage::admin_Click);
			// 
			// login
			// 
			this->login->Location = System::Drawing::Point(258, 491);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(54, 49);
			this->login->TabIndex = 4;
			this->login->Text = L"Login";
			this->login->UseVisualStyleBackColor = true;
			this->login->Click += gcnew System::EventHandler(this, &HomePage::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(195, 437);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password: ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(195, 387);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Username:";
			this->label1->Click += gcnew System::EventHandler(this, &HomePage::label1_Click);
			// 
			// password
			// 
			this->password->Location = System::Drawing::Point(198, 453);
			this->password->Name = L"password";
			this->password->PasswordChar = '*';
			this->password->Size = System::Drawing::Size(184, 20);
			this->password->TabIndex = 1;
			this->password->TextChanged += gcnew System::EventHandler(this, &HomePage::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(198, 403);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(184, 20);
			this->textBox1->TabIndex = 0;
			// 
			// HomePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(602, 586);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"HomePage";
			this->Text = L"HomePage";
			this->Load += gcnew System::EventHandler(this, &HomePage::HomePage_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void HomePage_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	bool wrong;
	String^ EntererdUsername = textBox1->Text;
	String^ EnteredPassword = password->Text;
	String^ Dbname;
	String^ Dbpass;
	String^ dbrole;
	int progrmnum;
	try {
		String^ dbconstr = "Server=127.0.0.1; Uid=root; Pwd=Govgovgov01; Database=allocationsystem";
		MySqlConnection^ con = gcnew MySqlConnection(dbconstr);
		MySqlCommand^ cmd3 = gcnew MySqlCommand("Select * from user where name='" + EntererdUsername + "'", con);
		con->Open();
		MySqlDataReader^ Dr3 = cmd3->ExecuteReader();
		while (Dr3->Read()) {
			Dbname = Dr3->GetString("name");
			Dbpass = Dr3->GetString("password");
			dbrole = Dr3->GetString("role");
			progrmnum = Dr3->GetInt32("programfk");
		}
		con->Close();		

		if (EntererdUsername == Dbname) {

			if (EnteredPassword == Dbpass) {
				 wrong = false;
				if (dbrole == "student") {
					this->Hide();
					StudentPortal^ stdprtal = gcnew StudentPortal(this,Dbname,progrmnum);
					stdprtal->Show();
				}
				else if (dbrole == "admin") {
					this->Hide();
					Admin^ adloginnext1 = gcnew Admin(this);
					adloginnext1->Show();
				}
				else {
					this->Hide();
					Lecturer^ lechome = gcnew Lecturer(this,Dbname,progrmnum);
					lechome->Show();
					
				}

			}
		}
		 if(wrong!=false){MessageBox::Show("Username or Password is incorrect"); }
	}
	catch (Exception^ Ex)
	{
		MessageBox::Show(Ex->Message);
	}


}
private: System::Void admin_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Adminlogin^ adloginnext = gcnew Adminlogin(this);
	adloginnext->Show();
}
};
}
