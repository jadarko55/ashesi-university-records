#pragma once
#include "StudentManagement.h"
#include "FacultyManagement.h"
#include "EnrollmentManagement.h"
#include "CourseManagement.h"
#include "Profile.h"  // Include the Profile form header

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
		String^ loggedInEmail;

	public:
		AdminDashboard(String^ userEmail)
		{
			InitializeComponent();
			loggedInEmail = userEmail;
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
	private: System::Windows::Forms::Button^ btnEnrollment;
	private: System::Windows::Forms::Button^ btnReports;
	private: System::Windows::Forms::Button^ btnProfileManagement;
	private: System::Windows::Forms::Button^ btnLogout;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnFacultyManagement;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->btnEnrollment = (gcnew System::Windows::Forms::Button());
			this->btnReports = (gcnew System::Windows::Forms::Button());
			this->btnProfileManagement = (gcnew System::Windows::Forms::Button());
			this->btnLogout = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnFacultyManagement = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
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
			this->btnUserManagement->Click += gcnew System::EventHandler(this, &AdminDashboard::btnUserManagement_Click);
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
			this->btnCourseManagement->Click += gcnew System::EventHandler(this, &AdminDashboard::btnCourseManagement_Click);
			// 
			// btnEnrollment
			// 
			this->btnEnrollment->BackColor = System::Drawing::Color::LightCoral;
			this->btnEnrollment->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEnrollment->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnEnrollment->Location = System::Drawing::Point(35, 354);
			this->btnEnrollment->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnEnrollment->Name = L"btnEnrollment";
			this->btnEnrollment->Size = System::Drawing::Size(181, 30);
			this->btnEnrollment->TabIndex = 4;
			this->btnEnrollment->Text = L"ENROLLMENT";
			this->btnEnrollment->UseVisualStyleBackColor = false;
			this->btnEnrollment->Click += gcnew System::EventHandler(this, &AdminDashboard::btnEnrollment_Click);
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
			this->btnReports->Click += gcnew System::EventHandler(this, &AdminDashboard::btnReports_Click);
			// 
			// btnProfileManagement
			// 
			this->btnProfileManagement->BackColor = System::Drawing::Color::LightCoral;
			this->btnProfileManagement->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnProfileManagement->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnProfileManagement->Location = System::Drawing::Point(35, 444);
			this->btnProfileManagement->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnProfileManagement->Name = L"btnProfileManagement";
			this->btnProfileManagement->Size = System::Drawing::Size(181, 30);
			this->btnProfileManagement->TabIndex = 13;
			this->btnProfileManagement->Text = L"PROFILE MANAGEMENT";
			this->btnProfileManagement->UseVisualStyleBackColor = false;
			this->btnProfileManagement->Click += gcnew System::EventHandler(this, &AdminDashboard::btnProfileManagement_Click);
			// 
			// btnLogout
			// 
			this->btnLogout->BackColor = System::Drawing::Color::LightCoral;
			this->btnLogout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogout->Location = System::Drawing::Point(531, 460);
			this->btnLogout->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->Size = System::Drawing::Size(181, 30);
			this->btnLogout->TabIndex = 15;
			this->btnLogout->Text = L"LOGOUT";
			this->btnLogout->UseVisualStyleBackColor = false;
			this->btnLogout->Click += gcnew System::EventHandler(this, &AdminDashboard::btnLogout_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Maroon;
			this->panel1->Controls->Add(this->btnFacultyManagement);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->btnUserManagement);
			this->panel1->Controls->Add(this->btnProfileManagement);
			this->panel1->Controls->Add(this->btnCourseManagement);
			this->panel1->Controls->Add(this->btnEnrollment);
			this->panel1->Controls->Add(this->btnReports);
			this->panel1->Location = System::Drawing::Point(12, 2);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(251, 516);
			this->panel1->TabIndex = 16;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminDashboard::panel1_Paint);
			// 
			// btnFacultyManagement
			// 
			this->btnFacultyManagement->BackColor = System::Drawing::Color::LightCoral;
			this->btnFacultyManagement->Location = System::Drawing::Point(35, 256);
			this->btnFacultyManagement->Name = L"btnFacultyManagement";
			this->btnFacultyManagement->Size = System::Drawing::Size(181, 29);
			this->btnFacultyManagement->TabIndex = 15;
			this->btnFacultyManagement->Text = L"FACULTY MANAGEMENT";
			this->btnFacultyManagement->UseVisualStyleBackColor = false;
			this->btnFacultyManagement->Click += gcnew System::EventHandler(this, &AdminDashboard::btnFacultyManagement_Click);
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
			// AdminDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(747, 547);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btnLogout);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"AdminDashboard";
			this->Text = L"AdminDashboard";
			this->Load += gcnew System::EventHandler(this, &AdminDashboard::AdminDashboard_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnUserManagement_Click(System::Object^ sender, System::EventArgs^ e) {
		StudentManagement^ studentManagement = gcnew StudentManagement();
		studentManagement->Show();  // Show the form
	}
	private: System::Void btnCourseManagement_Click(System::Object^ sender, System::EventArgs^ e) {
		CourseManagement^ courseManagement = gcnew CourseManagement();
		courseManagement->Show();  // Show the form
	}
	private: System::Void btnEnrollment_Click(System::Object^ sender, System::EventArgs^ e) {
		EnrollmentManagement^ enrollmentManagement = gcnew EnrollmentManagement();
		enrollmentManagement->Show();  // Show the form
	}
	private: System::Void btnReports_Click(System::Object^ sender, System::EventArgs^ e) {
		// Add your code here
	}
	private: System::Void btnProfileManagement_Click(System::Object^ sender, System::EventArgs^ e) {
		Profile^ profileForm = gcnew Profile(loggedInEmail);
		profileForm->Show();  // Show the Profile form
	}
	private: System::Void btnLogout_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();  // Close the application
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		// Add your code here
	}
	private: System::Void AdminDashboard_Load(System::Object^ sender, System::EventArgs^ e) {
		// Add your code here
	}
	private: System::Void btnFacultyManagement_Click(System::Object^ sender, System::EventArgs^ e) {
		FacultyManagement^ facultyManagement = gcnew FacultyManagement();
		facultyManagement->Show();
	}
	};
}

