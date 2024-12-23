#pragma once

namespace ashesi {

    using namespace MySql::Data::MySqlClient;
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class Profile : public System::Windows::Forms::Form
    {
    public:
        String^ loggedInEmail;

    public:
        Profile(String^ userEmail)
        {
            InitializeComponent();
            loggedInEmail = userEmail;
            LoadProfileDetails();
        }

    private:
        // Method to fetch profile details based on the logged-in user's email
        void LoadProfileDetails()
        {
            String^ connStr = "Server=localhost;Database=ashesi;Uid=root;Pwd=;";
            MySqlConnection^ conn = gcnew MySqlConnection(connStr);
            MySqlCommand^ cmd = gcnew MySqlCommand("SELECT p.ProfileID, p.dob, p.Biography, p.Contact, p.Links FROM users u JOIN profile p ON u.UserID = p.UserID WHERE u.Email = @Email", conn);
            cmd->Parameters->AddWithValue("@Email", loggedInEmail);

            try
            {
                conn->Open();
                MySqlDataReader^ reader = cmd->ExecuteReader();

                if (reader->Read())
                {
                    this->txtDOB->Text = reader->GetString("dob");
                    this->txtBiography->Text = reader->GetString("Biography");
                    this->txtContact->Text = reader->GetString("Contact");
                    this->txtLinks->Text = reader->GetString("Links");
                }
                reader->Close();
            }
            catch (Exception^ e)
            {
                MessageBox::Show("Error: " + e->Message);
            }
            finally
            {
                conn->Close();
            }
        }

        // Method to save profile details
        void SaveProfileDetails()
        {
            String^ connStr = "Server=localhost;Database=ashesi;Uid=root;Pwd=;";
            MySqlConnection^ conn = gcnew MySqlConnection(connStr);
            MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE profile p JOIN users u ON u.UserID = p.UserID SET p.dob = @dob, p.Biography = @Biography, p.Contact = @Contact, p.Links = @Links WHERE u.Email = @Email", conn);
            cmd->Parameters->AddWithValue("@dob", this->txtDOB->Text);
            cmd->Parameters->AddWithValue("@Biography", this->txtBiography->Text);
            cmd->Parameters->AddWithValue("@Contact", this->txtContact->Text);
            cmd->Parameters->AddWithValue("@Links", this->txtLinks->Text);
            cmd->Parameters->AddWithValue("@Email", loggedInEmail);

            try
            {
                conn->Open();
                cmd->ExecuteNonQuery();
                MessageBox::Show("Profile updated successfully.");
            }
            catch (Exception^ e)
            {
                MessageBox::Show("Error: " + e->Message);
            }
            finally
            {
                conn->Close();
            }
        }

    protected:
        // Form fields to display profile details
        System::Windows::Forms::TextBox^ txtDOB;
        System::Windows::Forms::TextBox^ txtBiography;
        System::Windows::Forms::TextBox^ txtContact;
        System::Windows::Forms::TextBox^ txtLinks;
        System::Windows::Forms::Button^ btnSave;
        System::Windows::Forms::Label^ lblTitle;

        // Method to initialize form components (TextBoxes, etc.)
        void InitializeComponent(void)
        {
            this->txtDOB = (gcnew System::Windows::Forms::TextBox());
            this->txtBiography = (gcnew System::Windows::Forms::TextBox());
            this->txtContact = (gcnew System::Windows::Forms::TextBox());
            this->txtLinks = (gcnew System::Windows::Forms::TextBox());
            this->btnSave = (gcnew System::Windows::Forms::Button());
            this->lblTitle = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // txtDOB
            // 
            this->txtDOB->Location = System::Drawing::Point(120, 80);
            this->txtDOB->Name = L"txtDOB";
            this->txtDOB->Size = System::Drawing::Size(200, 22);
            this->txtDOB->TabIndex = 0;
            // 
            // txtBiography
            // 
            this->txtBiography->Location = System::Drawing::Point(120, 120);
            this->txtBiography->Name = L"txtBiography";
            this->txtBiography->Size = System::Drawing::Size(200, 22);
            this->txtBiography->TabIndex = 1;
            // 
            // txtContact
            // 
            this->txtContact->Location = System::Drawing::Point(120, 160);
            this->txtContact->Name = L"txtContact";
            this->txtContact->Size = System::Drawing::Size(200, 22);
            this->txtContact->TabIndex = 2;
            // 
            // txtLinks
            // 
            this->txtLinks->Location = System::Drawing::Point(120, 200);
            this->txtLinks->Name = L"txtLinks";
            this->txtLinks->Size = System::Drawing::Size(200, 22);
            this->txtLinks->TabIndex = 3;
            // 
            // btnSave
            // 
            this->btnSave->Location = System::Drawing::Point(120, 240);
            this->btnSave->Name = L"btnSave";
            this->btnSave->Size = System::Drawing::Size(75, 23);
            this->btnSave->TabIndex = 4;
            this->btnSave->Text = L"Save";
            this->btnSave->UseVisualStyleBackColor = true;
            this->btnSave->Click += gcnew System::EventHandler(this, &Profile::btnSave_Click);
            // 
            // lblTitle
            // 
            this->lblTitle->AutoSize = true;
            this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->lblTitle->Location = System::Drawing::Point(120, 20);
            this->lblTitle->Name = L"lblTitle";
            this->lblTitle->Size = System::Drawing::Size(75, 29);
            this->lblTitle->TabIndex = 5;
            this->lblTitle->Text = L"Profile";
            // 
            // Profile
            // 
            this->ClientSize = System::Drawing::Size(400, 300);
            this->Controls->Add(this->lblTitle);
            this->Controls->Add(this->btnSave);
            this->Controls->Add(this->txtLinks);
            this->Controls->Add(this->txtContact);
            this->Controls->Add(this->txtBiography);
            this->Controls->Add(this->txtDOB);
            this->Name = L"Profile";
            this->Text = L"Profile";
            this->ResumeLayout(false);
            this->PerformLayout();
        }

    private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
        SaveProfileDetails();
    }
    };
}


