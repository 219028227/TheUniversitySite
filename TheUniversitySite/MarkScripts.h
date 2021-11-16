#pragma once

namespace TheUniversitySite {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MarkScripts
	/// </summary>
	public ref class MarkScripts : public System::Windows::Forms::Form
	{
	public:
		MarkScripts(void)
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
		~MarkScripts()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ releasemarks;
	protected:

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ total;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ secb;
	private: System::Windows::Forms::TextBox^ secc;


	private: System::Windows::Forms::TextBox^ seca;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MarkScripts::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->releasemarks = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->total = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->secb = (gcnew System::Windows::Forms::TextBox());
			this->secc = (gcnew System::Windows::Forms::TextBox());
			this->seca = (gcnew System::Windows::Forms::TextBox());
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->releasemarks);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->total);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->secb);
			this->panel2->Controls->Add(this->secc);
			this->panel2->Controls->Add(this->seca);
			this->panel2->Location = System::Drawing::Point(2, 1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(603, 627);
			this->panel2->TabIndex = 5;
			// 
			// releasemarks
			// 
			this->releasemarks->Location = System::Drawing::Point(276, 418);
			this->releasemarks->Name = L"releasemarks";
			this->releasemarks->Size = System::Drawing::Size(119, 23);
			this->releasemarks->TabIndex = 8;
			this->releasemarks->Text = L"Release Marks";
			this->releasemarks->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(21, 327);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Total";
			// 
			// total
			// 
			this->total->Location = System::Drawing::Point(24, 343);
			this->total->Multiline = true;
			this->total->Name = L"total";
			this->total->Size = System::Drawing::Size(371, 27);
			this->total->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 200);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Section B";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 265);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Section C";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 140);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Section A";
			// 
			// secb
			// 
			this->secb->Location = System::Drawing::Point(24, 216);
			this->secb->Multiline = true;
			this->secb->Name = L"secb";
			this->secb->Size = System::Drawing::Size(371, 27);
			this->secb->TabIndex = 2;
			// 
			// secc
			// 
			this->secc->Location = System::Drawing::Point(24, 281);
			this->secc->Multiline = true;
			this->secc->Name = L"secc";
			this->secc->Size = System::Drawing::Size(371, 27);
			this->secc->TabIndex = 1;
			// 
			// seca
			// 
			this->seca->Location = System::Drawing::Point(24, 156);
			this->seca->Multiline = true;
			this->seca->Name = L"seca";
			this->seca->Size = System::Drawing::Size(371, 27);
			this->seca->TabIndex = 0;
			// 
			// MarkScripts
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(605, 610);
			this->Controls->Add(this->panel2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MarkScripts";
			this->Text = L"MarkScripts";
			this->Load += gcnew System::EventHandler(this, &MarkScripts::MarkScripts_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MarkScripts_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
