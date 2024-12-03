#pragma once
#include "DeleteStudent.h"
#include "AddStudent.h"

namespace ashesi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentManagement
	/// </summary>
	public ref class StudentManagement : public System::Windows::Forms::Form
	{
	public:
		StudentManagement(void)
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
		~StudentManagement()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvStudents;
	protected:
	private: System::Windows::Forms::DataGridView^ dgvStudentDetails;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnAddStudent;

	private: System::Windows::Forms::Button^ btnUpdateStudent;

	private: System::Windows::Forms::Button^ btnDeleteStudent;


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
			this->dgvStudents = (gcnew System::Windows::Forms::DataGridView());
			this->dgvStudentDetails = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnAddStudent = (gcnew System::Windows::Forms::Button());
			this->btnDeleteStudent = (gcnew System::Windows::Forms::Button());
			this->btnUpdateStudent = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStudents))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStudentDetails))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgvStudents
			// 
			this->dgvStudents->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvStudents->Location = System::Drawing::Point(55, 183);
			this->dgvStudents->Name = L"dgvStudents";
			this->dgvStudents->RowHeadersWidth = 51;
			this->dgvStudents->RowTemplate->Height = 24;
			this->dgvStudents->Size = System::Drawing::Size(240, 290);
			this->dgvStudents->TabIndex = 0;
			// 
			// dgvStudentDetails
			// 
			this->dgvStudentDetails->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvStudentDetails->Location = System::Drawing::Point(321, 183);
			this->dgvStudentDetails->Name = L"dgvStudentDetails";
			this->dgvStudentDetails->RowHeadersWidth = 51;
			this->dgvStudentDetails->RowTemplate->Height = 24;
			this->dgvStudentDetails->Size = System::Drawing::Size(444, 290);
			this->dgvStudentDetails->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btnAddStudent);
			this->panel1->Controls->Add(this->btnDeleteStudent);
			this->panel1->Controls->Add(this->btnUpdateStudent);
			this->panel1->Location = System::Drawing::Point(182, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(582, 76);
			this->panel1->TabIndex = 2;
			// 
			// btnAddStudent
			// 
			this->btnAddStudent->Location = System::Drawing::Point(408, 27);
			this->btnAddStudent->Name = L"btnAddStudent";
			this->btnAddStudent->Size = System::Drawing::Size(154, 31);
			this->btnAddStudent->TabIndex = 2;
			this->btnAddStudent->Text = L"Add Student";
			this->btnAddStudent->UseVisualStyleBackColor = true;
			this->btnAddStudent->Click += gcnew System::EventHandler(this, &StudentManagement::btnAddStudent_Click);
			// 
			// btnDeleteStudent
			// 
			this->btnDeleteStudent->Location = System::Drawing::Point(36, 27);
			this->btnDeleteStudent->Name = L"btnDeleteStudent";
			this->btnDeleteStudent->Size = System::Drawing::Size(156, 31);
			this->btnDeleteStudent->TabIndex = 0;
			this->btnDeleteStudent->Text = L"Delete Student";
			this->btnDeleteStudent->UseVisualStyleBackColor = true;
			this->btnDeleteStudent->Click += gcnew System::EventHandler(this, &StudentManagement::btnDeleteStudent_Click);
			// 
			// btnUpdateStudent
			// 
			this->btnUpdateStudent->Location = System::Drawing::Point(217, 27);
			this->btnUpdateStudent->Name = L"btnUpdateStudent";
			this->btnUpdateStudent->Size = System::Drawing::Size(156, 31);
			this->btnUpdateStudent->TabIndex = 1;
			this->btnUpdateStudent->Text = L"Update Student";
			this->btnUpdateStudent->UseVisualStyleBackColor = true;
			// 
			// StudentManagement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(777, 485);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->dgvStudentDetails);
			this->Controls->Add(this->dgvStudents);
			this->Name = L"StudentManagement";
			this->Text = L"StudentManagement";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStudents))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStudentDetails))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnDeleteStudent_Click(System::Object^ sender, System::EventArgs^ e) {
		DeleteStudent^ deleteStudent = gcnew DeleteStudent();
		deleteStudent->Show();
	}
private: System::Void btnAddStudent_Click(System::Object^ sender, System::EventArgs^ e) {
	AddStudent^ addStudent = gcnew AddStudent();
	addStudent->Show();
}
};
}
