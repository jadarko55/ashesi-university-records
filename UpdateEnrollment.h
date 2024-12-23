#pragma once

#pragma once

namespace ashesi {

	using namespace MySql::Data::MySqlClient;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UpdateEnrollment
	/// </summary>
	public ref class UpdateEnrollment : public System::Windows::Forms::Form
	{
	public:
		UpdateEnrollment(String^ studentID)
		{
			InitializeComponent();
			this->studentID = studentID;
			if (!CheckStudentIDExists()) {
				MessageBox::Show("Student ID does not exist in the enrollment table.");
				this->Close();
			} else {
				LoadEnrollmentDetails();
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UpdateEnrollment()
		{
			if (components)
			{
				delete components;
			}
		}

	private: String^ studentID;
	private: System::Windows::Forms::TextBox^ txtCourseID;
	private: System::Windows::Forms::TextBox^ txtStatus;
	private: System::Windows::Forms::DateTimePicker^ dtpEnrollmentDate;
	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::Label^ lblCourseID;
	private: System::Windows::Forms::Label^ lblStatus;
	private: System::Windows::Forms::Label^ lblEnrollmentDate;
	private: System::Windows::Forms::Label^ lblUpdateEnrollment;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtCourseID = (gcnew System::Windows::Forms::TextBox());
			this->txtStatus = (gcnew System::Windows::Forms::TextBox());
			this->dtpEnrollmentDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->lblCourseID = (gcnew System::Windows::Forms::Label());
			this->lblStatus = (gcnew System::Windows::Forms::Label());
			this->lblEnrollmentDate = (gcnew System::Windows::Forms::Label());
			this->lblUpdateEnrollment = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtCourseID
			// 
			this->txtCourseID->Location = System::Drawing::Point(12, 70);
			this->txtCourseID->Name = L"txtCourseID";
			this->txtCourseID->Size = System::Drawing::Size(200, 22);
			this->txtCourseID->TabIndex = 0;
			// 
			// txtStatus
			// 
			this->txtStatus->Location = System::Drawing::Point(12, 115);
			this->txtStatus->Name = L"txtStatus";
			this->txtStatus->Size = System::Drawing::Size(200, 22);
			this->txtStatus->TabIndex = 1;
			// 
			// dtpEnrollmentDate
			// 
			this->dtpEnrollmentDate->Location = System::Drawing::Point(12, 160);
			this->dtpEnrollmentDate->Name = L"dtpEnrollmentDate";
			this->dtpEnrollmentDate->Size = System::Drawing::Size(200, 22);
			this->dtpEnrollmentDate->TabIndex = 2;
			// 
			// btnSave
			// 
			this->btnSave->Location = System::Drawing::Point(12, 205);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(75, 23);
			this->btnSave->TabIndex = 3;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &UpdateEnrollment::btnSave_Click);
			// 
			// lblCourseID
			// 
			this->lblCourseID->AutoSize = true;
			this->lblCourseID->Location = System::Drawing::Point(12, 50);
			this->lblCourseID->Name = L"lblCourseID";
			this->lblCourseID->Size = System::Drawing::Size(70, 17);
			this->lblCourseID->TabIndex = 4;
			this->lblCourseID->Text = L"Course ID";
			// 
			// lblStatus
			// 
			this->lblStatus->AutoSize = true;
			this->lblStatus->Location = System::Drawing::Point(12, 95);
			this->lblStatus->Name = L"lblStatus";
			this->lblStatus->Size = System::Drawing::Size(48, 17);
			this->lblStatus->TabIndex = 5;
			this->lblStatus->Text = L"Status";
			// 
			// lblEnrollmentDate
			// 
			this->lblEnrollmentDate->AutoSize = true;
			this->lblEnrollmentDate->Location = System::Drawing::Point(12, 140);
			this->lblEnrollmentDate->Name = L"lblEnrollmentDate";
			this->lblEnrollmentDate->Size = System::Drawing::Size(108, 17);
			this->lblEnrollmentDate->TabIndex = 6;
			this->lblEnrollmentDate->Text = L"Enrollment Date";
			// 
			// lblUpdateEnrollment
			// 
			this->lblUpdateEnrollment->AutoSize = true;
			this->lblUpdateEnrollment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblUpdateEnrollment->Location = System::Drawing::Point(12, 9);
			this->lblUpdateEnrollment->Name = L"lblUpdateEnrollment";
			this->lblUpdateEnrollment->Size = System::Drawing::Size(185, 25);
			this->lblUpdateEnrollment->TabIndex = 7;
			this->lblUpdateEnrollment->Text = L"Update Enrollment";
			// 
			// UpdateEnrollment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 241);
			this->Controls->Add(this->lblUpdateEnrollment);
			this->Controls->Add(this->lblEnrollmentDate);
			this->Controls->Add(this->lblStatus);
			this->Controls->Add(this->lblCourseID);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->dtpEnrollmentDate);
			this->Controls->Add(this->txtStatus);
			this->Controls->Add(this->txtCourseID);
			this->Name = L"UpdateEnrollment";
			this->Text = L"UpdateEnrollment";
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

	private: System::Boolean CheckStudentIDExists(void)
	{
		try {
			MySqlConnection^ conn = gcnew MySqlConnection("server=localhost;userid=root;password='';database=ashesi");
			conn->Open();
			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT COUNT(*) FROM enrollment WHERE StudentID = @StudentID", conn);
			cmd->Parameters->AddWithValue("@StudentID", studentID);
			int count = Convert::ToInt32(cmd->ExecuteScalar());
			conn->Close();
			return count > 0;
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
			return false;
		}
	}

	private: System::Void LoadEnrollmentDetails(void)
	{
		try {
			MySqlConnection^ conn = gcnew MySqlConnection("server=localhost;userid=root;password='';database=ashesi");
			conn->Open();
			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT CourseID, EnrollmentDate, Status FROM enrollment WHERE StudentID = @StudentID", conn);
			cmd->Parameters->AddWithValue("@StudentID", studentID);
			MySqlDataReader^ reader = cmd->ExecuteReader();

			if (reader->Read()) {
				txtCourseID->Text = reader["CourseID"]->ToString();
				dtpEnrollmentDate->Value = Convert::ToDateTime(reader["EnrollmentDate"]);
				txtStatus->Text = reader["Status"]->ToString();
			}

			conn->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
	}

	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ courseID = txtCourseID->Text;
		String^ status = txtStatus->Text;
		DateTime enrollmentDate = dtpEnrollmentDate->Value;

		try {
			MySqlConnection^ conn = gcnew MySqlConnection("server=localhost;userid=root;password='';database=ashesi");
			conn->Open();
			MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE enrollment SET CourseID = @CourseID, EnrollmentDate = @EnrollmentDate, Status = @Status WHERE StudentID = @StudentID", conn);
			cmd->Parameters->AddWithValue("@CourseID", courseID);
			cmd->Parameters->AddWithValue("@EnrollmentDate", enrollmentDate);
			cmd->Parameters->AddWithValue("@Status", status);
			cmd->Parameters->AddWithValue("@StudentID", studentID);
			cmd->ExecuteNonQuery();
			conn->Close();

			MessageBox::Show("Enrollment details updated successfully.");
			this->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
	}
	};
}
