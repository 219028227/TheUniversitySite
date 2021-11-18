#pragma once
#include "Admin.h"

namespace TheUniversitySite {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Adminlogin
	/// </summary>
	public ref class Adminlogin : public System::Windows::Forms::Form
	{
	public:
		Adminlogin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Form^ mainbck;
		Adminlogin(Form^mainbck1)
		{
			mainbck = mainbck1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Adminlogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ login;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ password;
	private: System::Windows::Forms::TextBox^ admin;
	private: System::Windows::Forms::Button^ backmain;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Adminlogin::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->login = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->admin = (gcnew System::Windows::Forms::TextBox());
			this->backmain = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->backmain);
			this->panel1->Controls->Add(this->login);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->password);
			this->panel1->Controls->Add(this->admin);
			this->panel1->Location = System::Drawing::Point(1, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(601, 599);
			this->panel1->TabIndex = 1;
			// 
			// login
			// 
			this->login->Location = System::Drawing::Point(271, 489);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(54, 49);
			this->login->TabIndex = 4;
			this->login->Text = L"Login";
			this->login->UseVisualStyleBackColor = true;
			this->login->Click += gcnew System::EventHandler(this, &Adminlogin::login_Click);
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
			this->label1->Size = System::Drawing::Size(39, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Admin ";
			// 
			// password
			// 
			this->password->Location = System::Drawing::Point(198, 453);
			this->password->Name = L"password";
			this->password->PasswordChar = '*';
			this->password->Size = System::Drawing::Size(184, 20);
			this->password->TabIndex = 1;
			// 
			// admin
			// 
			this->admin->Location = System::Drawing::Point(198, 403);
			this->admin->Name = L"admin";
			this->admin->Size = System::Drawing::Size(184, 20);
			this->admin->TabIndex = 0;
			// 
			// backmain
			// 
			this->backmain->Location = System::Drawing::Point(542, 537);
			this->backmain->Name = L"backmain";
			this->backmain->Size = System::Drawing::Size(46, 43);
			this->backmain->TabIndex = 22;
			this->backmain->Text = L"Back";
			this->backmain->UseVisualStyleBackColor = true;
			this->backmain->Click += gcnew System::EventHandler(this, &Adminlogin::backmain_Click);
			// 
			// Adminlogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(601, 593);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Adminlogin";
			this->Text = L"Adminlogin";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void login_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Hide();
		Admin^ adhomepg = gcnew Admin(this);
		adhomepg->Show();
	}
private: System::Void backmain_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	mainbck->Show();
}
};
}
