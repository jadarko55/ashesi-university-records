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
	/// Summary for DeleteStudent
	/// </summary>
	public ref class DeleteStudent : public System::Windows::Forms::Form
	{
	public:
		DeleteStudent(void)
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
		~DeleteStudent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ txtsID;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnDelete;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtsID = (gcnew System::Windows::Forms::TextBox());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(217, 140);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter StudentID";
			// 
			// txtsID
			// 
			this->txtsID->Location = System::Drawing::Point(183, 170);
			this->txtsID->Name = L"txtsID";
			this->txtsID->Size = System::Drawing::Size(164, 22);
			this->txtsID->TabIndex = 1;
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(149, 260);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 2;
			this->btnCancel->Text = L"Go back";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &DeleteStudent::btnCancel_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(301, 260);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(75, 23);
			this->btnDelete->TabIndex = 3;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &DeleteStudent::btnDelete_Click);
			// 
			// DeleteStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(531, 412);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->txtsID);
			this->Controls->Add(this->label1);
			this->Name = L"DeleteStudent";
			this->Text = L"DeleteStudent";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ studentID = txtsID->Text;

		// Check if Student ID is entered
		if (String::IsNullOrEmpty(studentID)) {
			MessageBox::Show("Please enter a Student ID.");
			return;
		}

		try {
			// MySQL connection setup
			MySqlConnection^ conn = gcnew MySqlConnection("server=localhost;userid=root;password='';database=ashesi");
			conn->Open();

			// SQL Query to delete the student
			String^ query = "DELETE FROM Student WHERE StudentID = @StudentID";
			MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
			cmd->Parameters->AddWithValue("@StudentID", studentID);

			// Execute the query and check if any row was affected
			int rowsAffected = cmd->ExecuteNonQuery();

			if (rowsAffected > 0) {
				MessageBox::Show("Student deleted successfully.");
			}
			else {
				MessageBox::Show("No student found with the provided Student ID.");
			}

			conn->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
	
	}
	};
}
