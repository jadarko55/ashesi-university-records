#pragma once
#include "Profile.h"

namespace ashesi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentDashboard
	/// </summary>
	public ref class StudentDashboard : public System::Windows::Forms::Form
	{
	public:
		String^ studentEmail;

	public:
		StudentDashboard(String^ email)
		{
			InitializeComponent();
			studentEmail = email;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentDashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnRegister;
	private: System::Windows::Forms::Button^ btnEnrolment;
	private: System::Windows::Forms::Button^ btnGrades;
	private: System::Windows::Forms::Button^ btnFees;
	private: System::Windows::Forms::Button^ btnSchedule;
	private: System::Windows::Forms::Button^ btnProfile;
	private: System::Windows::Forms::Panel^ panel1;
	protected:

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
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->btnEnrolment = (gcnew System::Windows::Forms::Button());
			this->btnGrades = (gcnew System::Windows::Forms::Button());
			this->btnFees = (gcnew System::Windows::Forms::Button());
			this->btnSchedule = (gcnew System::Windows::Forms::Button());
			this->btnProfile = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnRegister
			// 
			this->btnRegister->Location = System::Drawing::Point(28, 130);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(137, 23);
			this->btnRegister->TabIndex = 0;
			this->btnRegister->Text = L"Register";
			this->btnRegister->UseVisualStyleBackColor = true;
			this->btnRegister->Click += gcnew System::EventHandler(this, &StudentDashboard::btnRegister_Click);
			// 
			// btnEnrolment
			// 
			this->btnEnrolment->Location = System::Drawing::Point(28, 179);
			this->btnEnrolment->Name = L"btnEnrolment";
			this->btnEnrolment->Size = System::Drawing::Size(137, 23);
			this->btnEnrolment->TabIndex = 1;
			this->btnEnrolment->Text = L"Enrolment History";
			this->btnEnrolment->UseVisualStyleBackColor = true;
			this->btnEnrolment->Click += gcnew System::EventHandler(this, &StudentDashboard::btnEnrolment_Click);
			// 
			// btnGrades
			// 
			this->btnGrades->Location = System::Drawing::Point(28, 232);
			this->btnGrades->Name = L"btnGrades";
			this->btnGrades->Size = System::Drawing::Size(137, 23);
			this->btnGrades->TabIndex = 2;
			this->btnGrades->Text = L"View Grades";
			this->btnGrades->UseVisualStyleBackColor = true;
			this->btnGrades->Click += gcnew System::EventHandler(this, &StudentDashboard::btnGrades_Click);
			// 
			// btnFees
			// 
			this->btnFees->Location = System::Drawing::Point(28, 280);
			this->btnFees->Name = L"btnFees";
			this->btnFees->Size = System::Drawing::Size(137, 23);
			this->btnFees->TabIndex = 3;
			this->btnFees->Text = L"Pay Fees";
			this->btnFees->UseVisualStyleBackColor = true;
			this->btnFees->Click += gcnew System::EventHandler(this, &StudentDashboard::btnFees_Click);
			// 
			// btnSchedule
			// 
			this->btnSchedule->Location = System::Drawing::Point(28, 323);
			this->btnSchedule->Name = L"btnSchedule";
			this->btnSchedule->Size = System::Drawing::Size(137, 23);
			this->btnSchedule->TabIndex = 4;
			this->btnSchedule->Text = L"View Schedule";
			this->btnSchedule->UseVisualStyleBackColor = true;
			this->btnSchedule->Click += gcnew System::EventHandler(this, &StudentDashboard::btnSchedule_Click);
			// 
			// btnProfile
			// 
			this->btnProfile->Location = System::Drawing::Point(28, 376);
			this->btnProfile->Name = L"btnProfile";
			this->btnProfile->Size = System::Drawing::Size(137, 23);
			this->btnProfile->TabIndex = 5;
			this->btnProfile->Text = L"Profile";
			this->btnProfile->UseVisualStyleBackColor = true;
			this->btnProfile->Click += gcnew System::EventHandler(this, &StudentDashboard::btnProfile_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btnRegister);
			this->panel1->Controls->Add(this->btnProfile);
			this->panel1->Controls->Add(this->btnEnrolment);
			this->panel1->Controls->Add(this->btnSchedule);
			this->panel1->Controls->Add(this->btnGrades);
			this->panel1->Controls->Add(this->btnFees);
			this->panel1->Location = System::Drawing::Point(1, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 446);
			this->panel1->TabIndex = 6;
			// 
			// StudentDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(617, 446);
			this->Controls->Add(this->panel1);
			this->Name = L"StudentDashboard";
			this->Text = L"StudentDashboard";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			

		}
#pragma endregion
private: System::Void btnProfile_Click(System::Object^ sender, System::EventArgs^ e) {
	// Create and display the Student dashboard
	Profile^ studentProfile = gcnew Profile(studentEmail);

	studentProfile->LoadStudentDetails(studentEmail);
	
	studentProfile->Show();  // Show the form

}
private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnEnrolment_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnGrades_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnFees_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnSchedule_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
