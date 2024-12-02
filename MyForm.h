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
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	public:
		static System::String^ LoggedInEmail;

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
	private: System::Windows::Forms::TextBox^ txtEmail;



	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->passwd = (gcnew System::Windows::Forms::Label());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->btn1Cancel = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(298, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Email:";
			// 
			// passwd
			// 
			this->passwd->AutoSize = true;
			this->passwd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwd->ForeColor = System::Drawing::SystemColors::Control;
			this->passwd->Location = System::Drawing::Point(264, 145);
			this->passwd->Name = L"passwd";
			this->passwd->Size = System::Drawing::Size(88, 20);
			this->passwd->TabIndex = 1;
			this->passwd->Text = L"Password:";
			this->passwd->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// btnLogin
			// 
			this->btnLogin->BackColor = System::Drawing::Color::LightCoral;
			this->btnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogin->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnLogin->Location = System::Drawing::Point(362, 211);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(81, 30);
			this->btnLogin->TabIndex = 7;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &MyForm::btnLogin_Click);
			// 
			// txtEmail
			// 
			this->txtEmail->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->txtEmail->Location = System::Drawing::Point(362, 78);
			this->txtEmail->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(188, 22);
			this->txtEmail->TabIndex = 8;
			this->txtEmail->TextChanged += gcnew System::EventHandler(this, &MyForm::txtFName_TextChanged);
			// 
			// txtPassword
			// 
			this->txtPassword->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->txtPassword->Location = System::Drawing::Point(362, 144);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(188, 22);
			this->txtPassword->TabIndex = 9;
			// 
			// btn1Cancel
			// 
			this->btn1Cancel->BackColor = System::Drawing::Color::Red;
			this->btn1Cancel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn1Cancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn1Cancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1Cancel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn1Cancel->Location = System::Drawing::Point(468, 211);
			this->btn1Cancel->Name = L"btn1Cancel";
			this->btn1Cancel->Size = System::Drawing::Size(81, 30);
			this->btn1Cancel->TabIndex = 10;
			this->btn1Cancel->Text = L"Cancel";
			this->btn1Cancel->UseVisualStyleBackColor = false;
			this->btn1Cancel->Click += gcnew System::EventHandler(this, &MyForm::btn1Cancel_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(29, 54);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(217, 208);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Maroon;
			this->ClientSize = System::Drawing::Size(603, 324);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btn1Cancel);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->passwd);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Login Page";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		sqlConn->ConnectionString = "datasource = localhost; port=3306;"
			"username=root; password=""; database=ashesi";
		sqlConn->Open();
		sqlCmd->Connection = sqlConn;
		sqlCmd->CommandText = "Select * from users";
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
	// Get user input
	System::String^ email = txtEmail->Text;
	System::String^ password = txtPassword->Text;

	// Prepare database connection and command
	MySqlConnection^ sqlConn = gcnew MySqlConnection("datasource=localhost;port=3306;username=root;password='';database=ashesi");
	MySqlCommand^ sqlCmd = gcnew MySqlCommand();
	sqlCmd->Connection = sqlConn;
	sqlCmd->CommandText = "SELECT * FROM users WHERE Email=@Email AND UserPassword=@Password";

	// Add parameters to prevent SQL injection
	sqlCmd->Parameters->AddWithValue("@Email", email);
	sqlCmd->Parameters->AddWithValue("@Password", password);

	try {
		sqlConn->Open();

		// Execute the query
		MySqlDataReader^ sqlRd = sqlCmd->ExecuteReader();

		if (sqlRd->Read()) {
			// Retrieve the RoleID from the query result
			int roleID = Convert::ToInt32(sqlRd["RoleID"]);

			// Retrieve other user details if necessary
			System::String^ userName = sqlRd["Name"]->ToString();
			System::String^ userEmail = sqlRd["Email"]->ToString();

			// Store the logged-in user's email globally
			LoggedInEmail = userEmail;

			// Open the MDIForm and pass the role
			MDIForm^ mdiForm = gcnew MDIForm(LoggedInEmail);
			mdiForm->RoleID = roleID; // Pass the role to the MDI form
			mdiForm->Show();
			this->Hide();
		}
		else {
			// No matching user found
			MessageBox::Show("Invalid email or password.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		sqlConn->Close();
	}
	catch (Exception^ ex) {
		// Handle any errors
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
