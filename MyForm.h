#pragma once
#include "MDIForm.h"

namespace ashesi {

	using namespace MySql::Data::MySqlClient;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		DataTable^ sqlDt =  gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
	private: System::Windows::Forms::Button^ btn1Cancel;





	public:
		MySqlDataReader^ sqlRd;

		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ passwd;
	protected:

	private: System::Windows::Forms::Button^ btnLogin;






	private: System::Windows::Forms::TextBox^ txtFName;
	private: System::Windows::Forms::TextBox^ txtPassword;











		    



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->passwd = (gcnew System::Windows::Forms::Label());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->txtFName = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->btn1Cancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(200, 218);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"First Name:";
			// 
			// passwd
			// 
			this->passwd->AutoSize = true;
			this->passwd->Location = System::Drawing::Point(200, 312);
			this->passwd->Name = L"passwd";
			this->passwd->Size = System::Drawing::Size(82, 20);
			this->passwd->TabIndex = 1;
			this->passwd->Text = L"Password:";
			this->passwd->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// btnLogin
			// 
			this->btnLogin->Location = System::Drawing::Point(353, 388);
			this->btnLogin->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(106, 59);
			this->btnLogin->TabIndex = 7;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &MyForm::btnLogin_Click);
			// 
			// txtFName
			// 
			this->txtFName->Location = System::Drawing::Point(353, 210);
			this->txtFName->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtFName->Name = L"txtFName";
			this->txtFName->Size = System::Drawing::Size(281, 26);
			this->txtFName->TabIndex = 8;
			this->txtFName->TextChanged += gcnew System::EventHandler(this, &MyForm::txtFName_TextChanged);
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(353, 305);
			this->txtPassword->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(281, 26);
			this->txtPassword->TabIndex = 9;
			// 
			// btn1Cancel
			// 
			this->btn1Cancel->Location = System::Drawing::Point(529, 424);
			this->btn1Cancel->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn1Cancel->Name = L"btn1Cancel";
			this->btn1Cancel->Size = System::Drawing::Size(106, 59);
			this->btn1Cancel->TabIndex = 10;
			this->btn1Cancel->Text = L"Cancel";
			this->btn1Cancel->UseVisualStyleBackColor = true;
			this->btn1Cancel->Click += gcnew System::EventHandler(this, &MyForm::btn1Cancel_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(788, 656);
			this->Controls->Add(this->btn1Cancel);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtFName);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->passwd);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		sqlConn->ConnectionString = "datasource = localhost; port=3306;"
			"username=root; password=""; database=ashesi";
		sqlConn->Open();
		sqlCmd->Connection = sqlConn;
		sqlCmd->CommandText = "Select * from employees";
		sqlRd = sqlCmd->ExecuteReader();
		sqlDt->Load(sqlRd);
		sqlRd->Close();
		sqlConn->Close();
	}	
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	// Collect user input (e.g., from textboxes)
	String^ FName = txtFName->Text;
	String^ password = txtPassword->Text; 

	// Prepare database connection and command
	MySqlConnection^ sqlConn = gcnew MySqlConnection("datasource=localhost;port=3306;username=root;password='';database=ashesi");
	MySqlCommand^ sqlCmd = gcnew MySqlCommand();
	sqlCmd->Connection = sqlConn;
	sqlCmd->CommandText = "SELECT COUNT(*) FROM employees WHERE FName=@FName";

	// Add parameters to prevent SQL injection
	sqlCmd->Parameters->AddWithValue("@FName", FName);
	sqlCmd->Parameters->AddWithValue("@password", password);

	try {
		// Open the connection
		sqlConn->Open();

		// Execute the query to check if the user exists
		int userCount = Convert::ToInt32(sqlCmd->ExecuteScalar());

		if (userCount > 0) {
			// User exists, show the MDI form
			MDIForm^ MDIParent = gcnew MDIForm();
			MDIParent->Show();
			this->Hide();  // Hide the current form (login form)
		}
		else {
			// User doesn't exist, show an error message
			MessageBox::Show("Invalid username or password.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// Close the connection
		sqlConn->Close();
	}
	catch (Exception^ ex) {
		// Handle connection errors
		MessageBox::Show("Error: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void txtFName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn1Cancel_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
