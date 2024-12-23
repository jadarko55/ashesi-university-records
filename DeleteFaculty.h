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
	/// Summary for DeleteFaculty
	/// </summary>
	public ref class DeleteFaculty : public System::Windows::Forms::Form
	{
	public:
		DeleteFaculty(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DeleteFaculty()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ txtFacultyID;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Label^ lblFacultyID;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtFacultyID = (gcnew System::Windows::Forms::TextBox());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->lblFacultyID = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtFacultyID
			// 
			this->txtFacultyID->Location = System::Drawing::Point(12, 29);
			this->txtFacultyID->Name = L"txtFacultyID";
			this->txtFacultyID->Size = System::Drawing::Size(200, 22);
			this->txtFacultyID->TabIndex = 0;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(12, 57);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(75, 23);
			this->btnDelete->TabIndex = 1;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &DeleteFaculty::btnDelete_Click);
			// 
			// lblFacultyID
			// 
			this->lblFacultyID->AutoSize = true;
			this->lblFacultyID->Location = System::Drawing::Point(12, 9);
			this->lblFacultyID->Name = L"lblFacultyID";
			this->lblFacultyID->Size = System::Drawing::Size(70, 17);
			this->lblFacultyID->TabIndex = 2;
			this->lblFacultyID->Text = L"Faculty ID";
			// 
			// DeleteFaculty
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 91);
			this->Controls->Add(this->lblFacultyID);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->txtFacultyID);
			this->Name = L"DeleteFaculty";
			this->Text = L"DeleteFaculty";
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ facultyID = txtFacultyID->Text;

		try {
			MySqlConnection^ conn = gcnew MySqlConnection("server=localhost;userid=root;password='';database=ashesi");
			conn->Open();

			// Check if the faculty ID exists
			MySqlCommand^ checkCmd = gcnew MySqlCommand("SELECT COUNT(*) FROM faculty WHERE FacultyID = @FacultyID", conn);
			checkCmd->Parameters->AddWithValue("@FacultyID", facultyID);
			int count = Convert::ToInt32(checkCmd->ExecuteScalar());

			if (count == 0) {
				MessageBox::Show("Faculty ID does not exist.");
				conn->Close();
				return;
			}

			// Get the UserID associated with the FacultyID
			MySqlCommand^ getUserIDCmd = gcnew MySqlCommand("SELECT UserID FROM faculty WHERE FacultyID = @FacultyID", conn);
			getUserIDCmd->Parameters->AddWithValue("@FacultyID", facultyID);
			int userID = Convert::ToInt32(getUserIDCmd->ExecuteScalar());

			// Delete from faculty table
			MySqlCommand^ deleteFacultyCmd = gcnew MySqlCommand("DELETE FROM faculty WHERE FacultyID = @FacultyID", conn);
			deleteFacultyCmd->Parameters->AddWithValue("@FacultyID", facultyID);
			deleteFacultyCmd->ExecuteNonQuery();

			// Delete from users table
			MySqlCommand^ deleteUserCmd = gcnew MySqlCommand("DELETE FROM users WHERE UserID = @UserID", conn);
			deleteUserCmd->Parameters->AddWithValue("@UserID", userID);
			deleteUserCmd->ExecuteNonQuery();

			conn->Close();

			MessageBox::Show("Faculty member deleted successfully.");
			this->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
	}
	};
}
