#pragma once
#include "StudentManagement.h"

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
	private: System::Windows::Forms::Button^ btnUserManagement;
	private: System::Windows::Forms::Button^ btnCourseManagement;
	private: System::Windows::Forms::Button^ btnEnrolment;
	private: System::Windows::Forms::Button^ btnReports;
	protected:



	private: System::Windows::Forms::Button^ button14;

	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnfacultymanage;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminDashboard::typeid));
			this->btnUserManagement = (gcnew System::Windows::Forms::Button());
			this->btnCourseManagement = (gcnew System::Windows::Forms::Button());
			this->btnEnrolment = (gcnew System::Windows::Forms::Button());
			this->btnReports = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnfacultymanage = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnUserManagement
			// 
			this->btnUserManagement->BackColor = System::Drawing::Color::LightCoral;
			this->btnUserManagement->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUserManagement->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnUserManagement->Location = System::Drawing::Point(35, 212);
			this->btnUserManagement->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUserManagement->Name = L"btnUserManagement";
			this->btnUserManagement->Size = System::Drawing::Size(181, 30);
			this->btnUserManagement->TabIndex = 1;
			this->btnUserManagement->Text = L"USER MANAGEMENT";
			this->btnUserManagement->UseVisualStyleBackColor = false;
			this->btnUserManagement->Click += gcnew System::EventHandler(this, &AdminDashboard::button2_Click);
			// 
			// btnCourseManagement
			// 
			this->btnCourseManagement->BackColor = System::Drawing::Color::LightCoral;
			this->btnCourseManagement->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCourseManagement->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnCourseManagement->Location = System::Drawing::Point(35, 306);
			this->btnCourseManagement->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCourseManagement->Name = L"btnCourseManagement";
			this->btnCourseManagement->Size = System::Drawing::Size(181, 30);
			this->btnCourseManagement->TabIndex = 2;
			this->btnCourseManagement->Text = L"COURSE MANAGEMENT";
			this->btnCourseManagement->UseVisualStyleBackColor = false;
			this->btnCourseManagement->Click += gcnew System::EventHandler(this, &AdminDashboard::button3_Click);
			// 
			// btnEnrolment
			// 
			this->btnEnrolment->BackColor = System::Drawing::Color::LightCoral;
			this->btnEnrolment->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEnrolment->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnEnrolment->Location = System::Drawing::Point(35, 354);
			this->btnEnrolment->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnEnrolment->Name = L"btnEnrolment";
			this->btnEnrolment->Size = System::Drawing::Size(181, 30);
			this->btnEnrolment->TabIndex = 4;
			this->btnEnrolment->Text = L"ENROLLMENT";
			this->btnEnrolment->UseVisualStyleBackColor = false;
			this->btnEnrolment->Click += gcnew System::EventHandler(this, &AdminDashboard::button5_Click);
			// 
			// btnReports
			// 
			this->btnReports->BackColor = System::Drawing::Color::LightCoral;
			this->btnReports->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnReports->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnReports->Location = System::Drawing::Point(35, 401);
			this->btnReports->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnReports->Name = L"btnReports";
			this->btnReports->Size = System::Drawing::Size(181, 30);
			this->btnReports->TabIndex = 6;
			this->btnReports->Text = L"REPORTS";
			this->btnReports->UseVisualStyleBackColor = false;
			this->btnReports->Click += gcnew System::EventHandler(this, &AdminDashboard::button7_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::LightCoral;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button14->Location = System::Drawing::Point(35, 444);
			this->button14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(181, 30);
			this->button14->TabIndex = 13;
			this->button14->Text = L"PROFILE MANAGEMENT";
			this->button14->UseVisualStyleBackColor = false;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::LightCoral;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Location = System::Drawing::Point(531, 460);
			this->button16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(181, 30);
			this->button16->TabIndex = 15;
			this->button16->Text = L"LOGOUT";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &AdminDashboard::button16_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Maroon;
			this->panel1->Controls->Add(this->btnfacultymanage);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->btnUserManagement);
			this->panel1->Controls->Add(this->button14);
			this->panel1->Controls->Add(this->btnCourseManagement);
			this->panel1->Controls->Add(this->btnEnrolment);
			this->panel1->Controls->Add(this->btnReports);
			this->panel1->Location = System::Drawing::Point(12, 2);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(251, 516);
			this->panel1->TabIndex = 16;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminDashboard::panel1_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(17, 9);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(216, 192);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			// 
			// btnfacultymanage
			// 
			this->btnfacultymanage->BackColor = System::Drawing::Color::LightCoral;
			this->btnfacultymanage->Location = System::Drawing::Point(35, 256);
			this->btnfacultymanage->Name = L"btnfacultymanage";
			this->btnfacultymanage->Size = System::Drawing::Size(181, 29);
			this->btnfacultymanage->TabIndex = 15;
			this->btnfacultymanage->Text = L"FACULTY MANAGEMENT";
			this->btnfacultymanage->UseVisualStyleBackColor = false;
			// 
			// AdminDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(747, 547);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button16);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"AdminDashboard";
			this->Text = L"AdminDashboard";
			this->Load += gcnew System::EventHandler(this, &AdminDashboard::AdminDashboard_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	StudentManagement^ studentManagement = gcnew StudentManagement();

	studentManagement->Show();  // Show the form
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AdminDashboard_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
