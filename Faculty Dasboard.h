#pragma once

namespace ashesi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FacultyDasboard
	/// </summary>
	public ref class FacultyDasboard : public System::Windows::Forms::Form
	{
	public:
		FacultyDasboard(void)
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
		~FacultyDasboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;

	protected:

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 100);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(204, 37);
			this->button1->TabIndex = 1;
			this->button1->Text = L"HOME";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 147);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(204, 37);
			this->button2->TabIndex = 2;
			this->button2->Text = L"ANNOUNCEMENTS";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 190);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(204, 37);
			this->button3->TabIndex = 3;
			this->button3->Text = L"ASSIGNMENTS";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 233);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(204, 37);
			this->button4->TabIndex = 4;
			this->button4->Text = L"DISCUSSIONS";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 276);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(204, 37);
			this->button5->TabIndex = 5;
			this->button5->Text = L"GRADES";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 321);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(204, 37);
			this->button6->TabIndex = 6;
			this->button6->Text = L"PEOPLE";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(12, 364);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(204, 37);
			this->button7->TabIndex = 7;
			this->button7->Text = L"PAGES";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(12, 407);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(204, 37);
			this->button8->TabIndex = 8;
			this->button8->Text = L"FILES";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(12, 450);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(204, 37);
			this->button9->TabIndex = 9;
			this->button9->Text = L"SYLLABUS";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(534, 104);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(204, 37);
			this->button10->TabIndex = 10;
			this->button10->Text = L"QUIZZES";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(534, 147);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(204, 37);
			this->button11->TabIndex = 11;
			this->button11->Text = L"MODULES";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(534, 190);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(204, 37);
			this->button12->TabIndex = 12;
			this->button12->Text = L"COLLABORATIONS";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(534, 233);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(204, 37);
			this->button13->TabIndex = 13;
			this->button13->Text = L"REPORTS";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(534, 276);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(204, 37);
			this->button14->TabIndex = 14;
			this->button14->Text = L"PROFILE\\SETTINGS";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(534, 419);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(204, 37);
			this->button15->TabIndex = 15;
			this->button15->Text = L"LOGOUT";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// FacultyDasboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(766, 585);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"FacultyDasboard";
			this->Text = L"FacultyDasboard";
			this->Load += gcnew System::EventHandler(this, &FacultyDasboard::FacultyDasboard_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FacultyDasboard_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
