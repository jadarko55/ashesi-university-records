#pragma once

namespace ashesi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Summary for AddStudent
	/// </summary>
	public ref class AddStudent : public System::Windows::Forms::Form
	{
	public:
		AddStudent(void)
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
		~AddStudent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ lbladdName;
	private: System::Windows::Forms::Label^ lbladdEmail;
	private: System::Windows::Forms::Label^ lbl;

	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnAdd;



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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->lbladdName = (gcnew System::Windows::Forms::Label());
			this->lbladdEmail = (gcnew System::Windows::Forms::Label());
			this->lbl = (gcnew System::Windows::Forms::Label());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(200, 114);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &AddStudent::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(200, 155);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 1;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(200, 193);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 3;
			// 
			// lbladdName
			// 
			this->lbladdName->AutoSize = true;
			this->lbladdName->Location = System::Drawing::Point(131, 117);
			this->lbladdName->Name = L"lbladdName";
			this->lbladdName->Size = System::Drawing::Size(44, 16);
			this->lbladdName->TabIndex = 4;
			this->lbladdName->Text = L"Name";
			// 
			// lbladdEmail
			// 
			this->lbladdEmail->AutoSize = true;
			this->lbladdEmail->Location = System::Drawing::Point(131, 161);
			this->lbladdEmail->Name = L"lbladdEmail";
			this->lbladdEmail->Size = System::Drawing::Size(41, 16);
			this->lbladdEmail->TabIndex = 5;
			this->lbladdEmail->Text = L"Email";
			// 
			// lbl
			// 
			this->lbl->AutoSize = true;
			this->lbl->Location = System::Drawing::Point(127, 199);
			this->lbl->Name = L"lbl";
			this->lbl->Size = System::Drawing::Size(67, 16);
			this->lbl->TabIndex = 6;
			this->lbl->Text = L"Password";
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(347, 320);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 8;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &AddStudent::btnCancel_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(174, 320);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(110, 23);
			this->btnAdd->TabIndex = 9;
			this->btnAdd->Text = L"Add Student";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &AddStudent::btnAdd_Click);
			// 
			// AddStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(701, 484);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->lbl);
			this->Controls->Add(this->lbladdEmail);
			this->Controls->Add(this->lbladdName);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"AddStudent";
			this->Text = L"AddStudent";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = textBox1->Text;
	String^ email = textBox2->Text;
	String^ password = textBox4->Text;

	// Basic validation to check if all fields are filled
	if (String::IsNullOrEmpty(name) || String::IsNullOrEmpty(email) || String::IsNullOrEmpty(password)) {
		MessageBox::Show("Please fill in all fields.");
		return;
	}

	try {
		// MySQL connection setup
		MySqlConnection^ conn = gcnew MySqlConnection("server=localhost;userid=root;password='';database=ashesi");
		conn->Open();

		// SQL Query to insert into Users table
		String^ userQuery = "INSERT INTO Users (Name, Email, UserPassword, RoleID) VALUES (@Name, @Email, @Password, 3)";
		MySqlCommand^ userCmd = gcnew MySqlCommand(userQuery, conn);
		userCmd->Parameters->AddWithValue("@Name", name);
		userCmd->Parameters->AddWithValue("@Email", email);
		userCmd->Parameters->AddWithValue("@Password", password);

		// Execute the insert into Users table
		userCmd->ExecuteNonQuery();

		// Get the UserID of the newly inserted user
		String^ getUserIDQuery = "SELECT LAST_INSERT_ID()";
		MySqlCommand^ getUserIDCmd = gcnew MySqlCommand(getUserIDQuery, conn);
		int userID = Convert::ToInt32(getUserIDCmd->ExecuteScalar());

		// SQL Query to insert into Student table
		String^ studentQuery = "INSERT INTO Student (UserID) VALUES (@UserID)";
		MySqlCommand^ studentCmd = gcnew MySqlCommand(studentQuery, conn);
		studentCmd->Parameters->AddWithValue("@UserID", userID);

		// Execute the insert into Student table
		studentCmd->ExecuteNonQuery();

		// Close the connection
		conn->Close();

		MessageBox::Show("Student added successfully.");
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message);
	}
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
