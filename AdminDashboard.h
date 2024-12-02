#pragma once

namespace ashesi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminDashboard
	/// </summary>
	public ref class AdminDashboard : public System::Windows::Forms::Form
	{
	public:
		AdminDashboard(void)
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
		~AdminDashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Button^ button7;

	private: System::Windows::Forms::Button^ button9;

	private: System::Windows::Forms::Button^ button11;


	private: System::Windows::Forms::Button^ button14;

	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Label^ label1;
	private: System::Diagnostics::EventLog^ eventLog1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->eventLog1 = (gcnew System::Diagnostics::EventLog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->eventLog1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(22, 102);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(204, 37);
			this->button1->TabIndex = 0;
			this->button1->Text = L"HOME";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminDashboard::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(22, 145);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(204, 37);
			this->button2->TabIndex = 1;
			this->button2->Text = L"USER MANAGEMENT";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdminDashboard::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(22, 188);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(204, 37);
			this->button3->TabIndex = 2;
			this->button3->Text = L"COURSE MANAGEMENT";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AdminDashboard::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(22, 231);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(204, 37);
			this->button4->TabIndex = 3;
			this->button4->Text = L"CURRICULUMN";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(22, 274);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(204, 37);
			this->button5->TabIndex = 4;
			this->button5->Text = L"ENROLLMENT";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(22, 317);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(204, 37);
			this->button7->TabIndex = 6;
			this->button7->Text = L"REPORTS";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &AdminDashboard::button7_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(22, 360);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(204, 37);
			this->button9->TabIndex = 8;
			this->button9->Text = L"SYSTEM SETTINGS";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &AdminDashboard::button9_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(22, 403);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(204, 37);
			this->button11->TabIndex = 10;
			this->button11->Text = L"NOTIFICATIONS";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(22, 446);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(204, 37);
			this->button14->TabIndex = 13;
			this->button14->Text = L"PROFILE MANAGEMENT";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(379, 463);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(204, 37);
			this->button16->TabIndex = 15;
			this->button16->Text = L"LOGOUT";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &AdminDashboard::button16_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(36, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 20);
			this->label1->TabIndex = 16;
			this->label1->Text = L"label1";
			// 
			// eventLog1
			// 
			this->eventLog1->SynchronizingObject = this;
			// 
			// AdminDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(595, 526);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"AdminDashboard";
			this->Text = L"AdminDashboard";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->eventLog1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
