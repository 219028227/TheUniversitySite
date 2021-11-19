#pragma once

namespace TheUniversitySite {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminTimetable
	/// </summary>
	public ref class AdminTimetable : public System::Windows::Forms::Form
	{
	public:
		AdminTimetable(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Form^ adhomebck;
		AdminTimetable(Form^adhomebck1)
		{
			adhomebck = adhomebck1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminTimetable()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ backhomead;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminTimetable::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->backhomead = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->backhomead);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(629, 610);
			this->panel2->TabIndex = 3;
			// 
			// backhomead
			// 
			this->backhomead->Location = System::Drawing::Point(569, 556);
			this->backhomead->Name = L"backhomead";
			this->backhomead->Size = System::Drawing::Size(57, 51);
			this->backhomead->TabIndex = 38;
			this->backhomead->Text = L"Back";
			this->backhomead->UseVisualStyleBackColor = true;
			this->backhomead->Click += gcnew System::EventHandler(this, &AdminTimetable::backhomead_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(33, 108);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(574, 428);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// AdminTimetable
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(629, 610);
			this->Controls->Add(this->panel2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AdminTimetable";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminTimetable";
			this->Load += gcnew System::EventHandler(this, &AdminTimetable::AdminTimetable_Load);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AdminTimetable_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private: System::Void backhomead_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		adhomebck->Show();
	}
	};
}
