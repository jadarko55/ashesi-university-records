#pragma once
#include "UpdateEnrollment.h"

namespace ashesi {

	using namespace MySql::Data::MySqlClient;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EnrollmentManagement
	/// </summary>
	public ref class EnrollmentManagement : public System::Windows::Forms::Form
	{
	public:
		EnrollmentManagement(void)
		{
			InitializeComponent();
			LoadEnrollmentData();
			SetPlaceholderText();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EnrollmentManagement()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^ dgvEnrollment;
	private: System::Windows::Forms::TextBox^ txtStudentID;
	private: System::Windows::Forms::Button^ btnSubmit;
	private: System::Windows::Forms::Label^ lblStudentID;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->dgvEnrollment = (gcnew System::Windows::Forms::DataGridView());
			   this->txtStudentID = (gcnew System::Windows::Forms::TextBox());
			   this->btnSubmit = (gcnew System::Windows::Forms::Button());
			   this->lblStudentID = (gcnew System::Windows::Forms::Label());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEnrollment))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // dgvEnrollment
			   // 
			   this->dgvEnrollment->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dgvEnrollment->Location = System::Drawing::Point(12, 12);
			   this->dgvEnrollment->Name = L"dgvEnrollment";
			   this->dgvEnrollment->RowHeadersWidth = 51;
			   this->dgvEnrollment->RowTemplate->Height = 24;
			   this->dgvEnrollment->Size = System::Drawing::Size(776, 300);
			   this->dgvEnrollment->TabIndex = 0;
			   // 
			   // txtStudentID
			   // 
			   this->txtStudentID->Location = System::Drawing::Point(12, 330);
			   this->txtStudentID->Name = L"txtStudentID";
			   this->txtStudentID->Size = System::Drawing::Size(200, 22);
			   this->txtStudentID->TabIndex = 1;
			   this->txtStudentID->Enter += gcnew System::EventHandler(this, &EnrollmentManagement::txtStudentID_Enter);
			   this->txtStudentID->Leave += gcnew System::EventHandler(this, &EnrollmentManagement::txtStudentID_Leave);
			   // 
			   // btnSubmit
			   // 
			   this->btnSubmit->Location = System::Drawing::Point(230, 330);
			   this->btnSubmit->Name = L"btnSubmit";
			   this->btnSubmit->Size = System::Drawing::Size(75, 23);
			   this->btnSubmit->TabIndex = 2;
			   this->btnSubmit->Text = L"Submit";
			   this->btnSubmit->UseVisualStyleBackColor = true;
			   this->btnSubmit->Click += gcnew System::EventHandler(this, &EnrollmentManagement::btnSubmit_Click);
			   // 
			   // lblStudentID
			   // 
			   this->lblStudentID->AutoSize = true;
			   this->lblStudentID->Location = System::Drawing::Point(12, 310);
			   this->lblStudentID->Name = L"lblStudentID";
			   this->lblStudentID->Size = System::Drawing::Size(70, 17);
			   this->lblStudentID->TabIndex = 3;
			   this->lblStudentID->Text = L"Student ID";
			   // 
			   // EnrollmentManagement
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(800, 450);
			   this->Controls->Add(this->lblStudentID);
			   this->Controls->Add(this->btnSubmit);
			   this->Controls->Add(this->txtStudentID);
			   this->Controls->Add(this->dgvEnrollment);
			   this->Name = L"EnrollmentManagement";
			   this->Text = L"EnrollmentManagement";
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEnrollment))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();
		   }
#pragma endregion

	private: System::Void LoadEnrollmentData(void)
	{
		try {
			MySqlConnection^ conn = gcnew MySqlConnection("server=localhost;userid=root;password='';database=ashesi");
			MySqlDataAdapter^ da = gcnew MySqlDataAdapter("SELECT * FROM enrollment", conn);
			DataTable^ dt = gcnew DataTable();
			da->Fill(dt);
			dgvEnrollment->DataSource = dt;
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
	}

	private: System::Void SetPlaceholderText(void)
	{
		txtStudentID->Text = "Enter Student ID";
		txtStudentID->ForeColor = System::Drawing::Color::Gray;
	}

	private: System::Void txtStudentID_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (txtStudentID->Text == "Enter Student ID") {
			txtStudentID->Text = "";
			txtStudentID->ForeColor = System::Drawing::Color::Black;
		}
	}

	private: System::Void txtStudentID_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(txtStudentID->Text)) {
			txtStudentID->Text = "Enter Student ID";
			txtStudentID->ForeColor = System::Drawing::Color::Gray;
		}
	}

	private: System::Void btnSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ studentID = txtStudentID->Text;

		// Check if Student ID is entered
		if (String::IsNullOrEmpty(studentID) || studentID == "Enter Student ID") {
			MessageBox::Show("Please enter a Student ID.");
			return;
		}

		// Open the UpdateEnrollment form with the entered student ID
		UpdateEnrollment^ updateForm = gcnew UpdateEnrollment(studentID);
		updateForm->Show();
	}
	};
}


