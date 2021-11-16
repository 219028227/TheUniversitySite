#pragma once

namespace TheUniversitySite {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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


	private: System::Windows::Forms::RadioButton^ selectprac2;

	private: System::Windows::Forms::ComboBox^ choosepractical2;

	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ grades1;

	private: System::Windows::Forms::TextBox^ practicalupload1;
	private: System::Windows::Forms::Button^ upload1;


	private: System::Windows::Forms::RadioButton^ selectprac1;

	private: System::Windows::Forms::ComboBox^ choosepractical;

	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ grades3;

	private: System::Windows::Forms::TextBox^ projectupload;
	private: System::Windows::Forms::Button^ upload3;


	private: System::Windows::Forms::RadioButton^ selectproject;

	private: System::Windows::Forms::ComboBox^ chooseproject;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ studentnumber;
	private: System::Windows::Forms::TextBox^ programmename;
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
			this->backbutton = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->programmename = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->grades2 = (gcnew System::Windows::Forms::TextBox());
			this->practicalupload2 = (gcnew System::Windows::Forms::TextBox());
			this->upload2 = (gcnew System::Windows::Forms::Button());
			this->selectprac2 = (gcnew System::Windows::Forms::RadioButton());
			this->choosepractical2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->grades1 = (gcnew System::Windows::Forms::TextBox());
			this->practicalupload1 = (gcnew System::Windows::Forms::TextBox());
			this->upload1 = (gcnew System::Windows::Forms::Button());
			this->selectprac1 = (gcnew System::Windows::Forms::RadioButton());
			this->choosepractical = (gcnew System::Windows::Forms::ComboBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->grades3 = (gcnew System::Windows::Forms::TextBox());
			this->projectupload = (gcnew System::Windows::Forms::TextBox());
			this->upload3 = (gcnew System::Windows::Forms::Button());
			this->selectproject = (gcnew System::Windows::Forms::RadioButton());
			this->chooseproject = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->studentnumber = (gcnew System::Windows::Forms::TextBox());
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->backbutton);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->programmename);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->grades2);
			this->panel2->Controls->Add(this->practicalupload2);
			this->panel2->Controls->Add(this->upload2);
			this->panel2->Controls->Add(this->selectprac2);
			this->panel2->Controls->Add(this->choosepractical2);
			this->panel2->Controls->Add(this->textBox10);
			this->panel2->Controls->Add(this->grades1);
			this->panel2->Controls->Add(this->practicalupload1);
			this->panel2->Controls->Add(this->upload1);
			this->panel2->Controls->Add(this->selectprac1);
			this->panel2->Controls->Add(this->choosepractical);
			this->panel2->Controls->Add(this->textBox7);
			this->panel2->Controls->Add(this->grades3);
			this->panel2->Controls->Add(this->projectupload);
			this->panel2->Controls->Add(this->upload3);
			this->panel2->Controls->Add(this->selectproject);
			this->panel2->Controls->Add(this->chooseproject);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->studentnumber);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(604, 610);
			this->panel2->TabIndex = 4;
			// 
			// backbutton
			// 
			this->backbutton->Location = System::Drawing::Point(538, 540);
			this->backbutton->Name = L"backbutton";
			this->backbutton->Size = System::Drawing::Size(63, 56);
			this->backbutton->TabIndex = 26;
			this->backbutton->Text = L"BACK";
			this->backbutton->UseVisualStyleBackColor = true;
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
			// programmename
			// 
			this->programmename->Location = System::Drawing::Point(425, 55);
			this->programmename->Multiline = true;
			this->programmename->Name = L"programmename";
			this->programmename->Size = System::Drawing::Size(164, 25);
			this->programmename->TabIndex = 22;
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
			// 
			// selectprac2
			// 
			this->selectprac2->AutoSize = true;
			this->selectprac2->Location = System::Drawing::Point(292, 295);
			this->selectprac2->Name = L"selectprac2";
			this->selectprac2->Size = System::Drawing::Size(128, 17);
			this->selectprac2->TabIndex = 15;
			this->selectprac2->TabStop = true;
			this->selectprac2->Text = L"SELECT PRACTICAL";
			this->selectprac2->UseVisualStyleBackColor = true;
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
			// 
			// selectprac1
			// 
			this->selectprac1->AutoSize = true;
			this->selectprac1->Location = System::Drawing::Point(292, 142);
			this->selectprac1->Name = L"selectprac1";
			this->selectprac1->Size = System::Drawing::Size(128, 17);
			this->selectprac1->TabIndex = 9;
			this->selectprac1->TabStop = true;
			this->selectprac1->Text = L"SELECT PRACTICAL";
			this->selectprac1->UseVisualStyleBackColor = true;
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
			// 
			// selectproject
			// 
			this->selectproject->AutoSize = true;
			this->selectproject->Location = System::Drawing::Point(292, 455);
			this->selectproject->Name = L"selectproject";
			this->selectproject->Size = System::Drawing::Size(118, 17);
			this->selectproject->TabIndex = 3;
			this->selectproject->TabStop = true;
			this->selectproject->Text = L"SELECT PROJECT";
			this->selectproject->UseVisualStyleBackColor = true;
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
			this->studentnumber->Size = System::Drawing::Size(164, 25);
			this->studentnumber->TabIndex = 0;
			// 
			// StudentPortal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(601, 599);
			this->Controls->Add(this->panel2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"StudentPortal";
			this->Text = L"StudentPortal";
			this->Load += gcnew System::EventHandler(this, &StudentPortal::StudentPortal_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void StudentPortal_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
