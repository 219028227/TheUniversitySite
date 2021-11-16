#pragma once

namespace TheUniversitySite {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminProgrammes
	/// </summary>
	public ref class AdminProgrammes : public System::Windows::Forms::Form
	{
	public:
		AdminProgrammes(void)
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
		~AdminProgrammes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	protected:




	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ programmesview;
	private: System::Windows::Forms::Button^ addprogrammes;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ programmename;
	private: System::Windows::Forms::Button^ removeprogrammes;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminProgrammes::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->backbutton = (gcnew System::Windows::Forms::Button());
			this->removeprogrammes = (gcnew System::Windows::Forms::Button());
			this->addprogrammes = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->programmename = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->programmesview = (gcnew System::Windows::Forms::ListBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->backbutton);
			this->panel2->Controls->Add(this->removeprogrammes);
			this->panel2->Controls->Add(this->addprogrammes);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->programmename);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->programmesview);
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Location = System::Drawing::Point(2, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(629, 610);
			this->panel2->TabIndex = 2;
			// 
			// backbutton
			// 
			this->backbutton->Location = System::Drawing::Point(556, 550);
			this->backbutton->Name = L"backbutton";
			this->backbutton->Size = System::Drawing::Size(59, 48);
			this->backbutton->TabIndex = 37;
			this->backbutton->Text = L"ADD";
			this->backbutton->UseVisualStyleBackColor = true;
			// 
			// removeprogrammes
			// 
			this->removeprogrammes->Location = System::Drawing::Point(244, 456);
			this->removeprogrammes->Name = L"removeprogrammes";
			this->removeprogrammes->Size = System::Drawing::Size(79, 34);
			this->removeprogrammes->TabIndex = 36;
			this->removeprogrammes->Text = L"REMOVE";
			this->removeprogrammes->UseVisualStyleBackColor = true;
			// 
			// addprogrammes
			// 
			this->addprogrammes->Location = System::Drawing::Point(513, 167);
			this->addprogrammes->Name = L"addprogrammes";
			this->addprogrammes->Size = System::Drawing::Size(79, 34);
			this->addprogrammes->TabIndex = 35;
			this->addprogrammes->Text = L"ADD";
			this->addprogrammes->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(394, 113);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 13);
			this->label3->TabIndex = 32;
			this->label3->Text = L"Programme";
			// 
			// programmename
			// 
			this->programmename->Location = System::Drawing::Point(397, 129);
			this->programmename->Name = L"programmename";
			this->programmename->Size = System::Drawing::Size(195, 20);
			this->programmename->TabIndex = 29;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(10, 99);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 29);
			this->label1->TabIndex = 21;
			this->label1->Text = L"PROGRAMMES";
			// 
			// programmesview
			// 
			this->programmesview->FormattingEnabled = true;
			this->programmesview->Location = System::Drawing::Point(23, 108);
			this->programmesview->Name = L"programmesview";
			this->programmesview->Size = System::Drawing::Size(300, 342);
			this->programmesview->TabIndex = 20;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(556, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(70, 68);
			this->pictureBox3->TabIndex = 16;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &AdminProgrammes::pictureBox3_Click);
			// 
			// AdminProgrammes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(629, 610);
			this->Controls->Add(this->panel2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AdminProgrammes";
			this->Text = L"AdminProgrammes";
			this->Load += gcnew System::EventHandler(this, &AdminProgrammes::AdminProgrammes_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AdminProgrammes_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
