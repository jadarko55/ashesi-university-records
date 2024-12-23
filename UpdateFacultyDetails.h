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
	/// Summary for UpdateFacultyDetails
	/// </summary>
	public ref class UpdateFacultyDetails : public System::Windows::Forms::Form
	{
	public:
		UpdateFacultyDetails(String^ facultyID)
		{
			InitializeComponent();
			this->facultyID = facultyID;
			LoadFacultyDetails();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UpdateFacultyDetails()
		{
			if (components)
			{
				delete components;
			}
		}

	private: String^ facultyID;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::TextBox^ txtDepartmentID;
	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::Label^ lblEmail;
	private: System::Windows::Forms::Label^ lblPassword;
	private: System::Windows::Forms::Label^ lblDepartmentID;
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
			this->txtDepartmentID = (gcnew System::Windows::Forms::TextBox());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->lblPassword = (gcnew System::Windows::Forms::Label());
			this->lblDepartmentID = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(12, 29);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(200, 22);
			this->txtName->TabIndex = 0;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(12, 74);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(200, 22);
			this->txtEmail->TabIndex = 1;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(12, 119);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(200, 22);
			this->txtPassword->TabIndex = 2;
			// 
			// txtDepartmentID
			// 
			this->txtDepartmentID->Location = System::Drawing::Point(12, 164);
			this->txtDepartmentID->Name = L"txtDepartmentID";
			this->txtDepartmentID->Size = System::Drawing::Size(200, 22);
			this->txtDepartmentID->TabIndex = 3;
			// 
			// btnSave
			// 
			this->btnSave->Location = System::Drawing::Point(12, 209);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(75, 23);
			this->btnSave->TabIndex = 4;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &UpdateFacultyDetails::btnSave_Click);
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Location = System::Drawing::Point(12, 9);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(45, 17);
			this->lblName->TabIndex = 5;
			this->lblName->Text = L"Name";
			// 
			// lblEmail
			// 
			this->lblEmail->AutoSize = true;
			this->lblEmail->Location = System::Drawing::Point(12, 54);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(42, 17);
			this->lblEmail->TabIndex = 6;
			this->lblEmail->Text = L"Email";
			// 
			// lblPassword
			// 
			this->lblPassword->AutoSize = true;
			this->lblPassword->Location = System::Drawing::Point(12, 99);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(69, 17);
			this->lblPassword->TabIndex = 7;
			this->lblPassword->Text = L"Password";
			// 
			// lblDepartmentID
			// 
			this->lblDepartmentID->AutoSize = true;
			this->lblDepartmentID->Location = System::Drawing::Point(12, 144);
			this->lblDepartmentID->Name = L"lblDepartmentID";
			this->lblDepartmentID->Size = System::Drawing::Size(98, 17);
			this->lblDepartmentID->TabIndex = 8;
			this->lblDepartmentID->Text = L"Department ID";
			// 
			// UpdateFacultyDetails
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 251);
			this->Controls->Add(this->lblDepartmentID);
			this->Controls->Add(this->lblPassword);
			this->Controls->Add(this->lblEmail);
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->txtDepartmentID);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->txtName);
			this->Name = L"UpdateFacultyDetails";
			this->Text = L"UpdateFacultyDetails";
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

	private: System::Void LoadFacultyDetails(void)
	{
		try {
			MySqlConnection^ conn = gcnew MySqlConnection("server=localhost;userid=root;password='';database=ashesi");
			conn->Open();
			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT u.Name, u.Email, u.UserPassword, f.DepartmentID FROM users u INNER JOIN faculty f ON u.UserID = f.UserID WHERE f.FacultyID = @FacultyID", conn);
			cmd->Parameters->AddWithValue("@FacultyID", facultyID);
			MySqlDataReader^ reader = cmd->ExecuteReader();

			if (reader->Read()) {
				txtName->Text = reader["Name"]->ToString();
				txtEmail->Text = reader["Email"]->ToString();
				txtPassword->Text = reader["UserPassword"]->ToString();
				txtDepartmentID->Text = reader["DepartmentID"]->ToString();
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
		int departmentID = Convert::ToInt32(txtDepartmentID->Text);

		try {
			MySqlConnection^ conn = gcnew MySqlConnection("server=localhost;userid=root;password='';database=ashesi");
			conn->Open();
			MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE users u INNER JOIN faculty f ON u.UserID = f.UserID SET u.Name = @Name, u.Email = @Email, u.UserPassword = @Password, f.DepartmentID = @DepartmentID WHERE f.FacultyID = @FacultyID", conn);
			cmd->Parameters->AddWithValue("@Name", name);
			cmd->Parameters->AddWithValue("@Email", email);
			cmd->Parameters->AddWithValue("@Password", password);
			cmd->Parameters->AddWithValue("@DepartmentID", departmentID);
			cmd->Parameters->AddWithValue("@FacultyID", facultyID);
			cmd->ExecuteNonQuery();
			conn->Close();

			MessageBox::Show("Faculty details updated successfully.");
			this->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
	}
	};
}
