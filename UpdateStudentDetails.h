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
	/// Summary for UpdateStudentDetails
	/// </summary>
	public ref class UpdateStudentDetails : public System::Windows::Forms::Form
	{
	public:
		UpdateStudentDetails(String^ studentID)
		{
			InitializeComponent();
			this->studentID = studentID;
			LoadStudentDetails();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UpdateStudentDetails()
		{
			if (components)
			{
				delete components;
			}
		}

	private: String^ studentID;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::Button^ btnSave;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
     /// <summary>
     /// Required method for Designer support - do not modify
     /// the contents of this method with the code editor.
     /// </summary>
     void InitializeComponent(void)
     {
      this->txtName = (gcnew System::Windows::Forms::TextBox());
      this->txtEmail = (gcnew System::Windows::Forms::TextBox());
      this->txtPassword = (gcnew System::Windows::Forms::TextBox());
      this->btnSave = (gcnew System::Windows::Forms::Button());
      this->SuspendLayout();
      // 
      // txtName
      // 
      this->txtName->Location = System::Drawing::Point(12, 12);
      this->txtName->Name = L"txtName";
      this->txtName->Size = System::Drawing::Size(200, 22);
      this->txtName->TabIndex = 0;
      // 
      // txtEmail
      // 
      this->txtEmail->Location = System::Drawing::Point(12, 50);
      this->txtEmail->Name = L"txtEmail";
      this->txtEmail->Size = System::Drawing::Size(200, 22);
      this->txtEmail->TabIndex = 1;
      // 
      // txtPassword
      // 
      this->txtPassword->Location = System::Drawing::Point(12, 88);
      this->txtPassword->Name = L"txtPassword";
      this->txtPassword->Size = System::Drawing::Size(200, 22);
      this->txtPassword->TabIndex = 2;
      // 
      // btnSave
      // 
      this->btnSave->Location = System::Drawing::Point(12, 126);
      this->btnSave->Name = L"btnSave";
      this->btnSave->Size = System::Drawing::Size(75, 23);
      this->btnSave->TabIndex = 3;
      this->btnSave->Text = L"Save";
      this->btnSave->UseVisualStyleBackColor = true;
      this->btnSave->Click += gcnew System::EventHandler(this, &UpdateStudentDetails::btnSave_Click);
      // 
      // UpdateStudentDetails
      // 
      this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
      this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
      this->ClientSize = System::Drawing::Size(284, 161);
      this->Controls->Add(this->btnSave);
      this->Controls->Add(this->txtPassword);
      this->Controls->Add(this->txtEmail);
      this->Controls->Add(this->txtName);
      this->Name = L"UpdateStudentDetails";
      this->Text = L"UpdateStudentDetails";
      this->ResumeLayout(false);
      this->PerformLayout();
     }
#pragma endregion

	private: System::Void LoadStudentDetails(void)
	{
		try {
			MySqlConnection^ conn = gcnew MySqlConnection("server=localhost;userid=root;password='';database=ashesi");
			conn->Open();
			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT u.Name, u.Email, u.UserPassword FROM users u INNER JOIN student s ON u.UserID = s.UserID WHERE s.StudentID = @StudentID", conn);
			cmd->Parameters->AddWithValue("@StudentID", studentID);
			MySqlDataReader^ reader = cmd->ExecuteReader();

			if (reader->Read()) {
				txtName->Text = reader["Name"]->ToString();
				txtEmail->Text = reader["Email"]->ToString();
				txtPassword->Text = reader["UserPassword"]->ToString();
			}

			conn->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
	}

	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = txtName->Text;
		String^ email = txtEmail->Text;
		String^ password = txtPassword->Text;

		try {
			MySqlConnection^ conn = gcnew MySqlConnection("server=localhost;userid=root;password='';database=ashesi");
			conn->Open();
			MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE users u INNER JOIN student s ON u.UserID = s.UserID SET u.Name = @Name, u.Email = @Email, u.UserPassword = @Password WHERE s.StudentID = @StudentID", conn);
			cmd->Parameters->AddWithValue("@Name", name);
			cmd->Parameters->AddWithValue("@Email", email);
			cmd->Parameters->AddWithValue("@Password", password);
			cmd->Parameters->AddWithValue("@StudentID", studentID);
			cmd->ExecuteNonQuery();
			conn->Close();

			MessageBox::Show("Student details updated successfully.");
			this->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
	}
	};
}
