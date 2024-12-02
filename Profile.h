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
        }

        // Method to fetch student details based on the logged-in user's email
        void LoadStudentDetails(String^ loggedInEmail)
        {
            try
            {
                // Connection string to your MySQL server
                String^ connStr = "Server=localhost;Database=ashesi;Uid=root;Pwd=;''";


                // Create connection and command
                MySqlConnection^ conn = gcnew MySqlConnection(connStr);
                conn->Open();

                // Prepare SQL query to fetch student details
                String^ query = "SELECT s.StudentID, sd.dob, sd.MajorID, sd.Biography, sd.Contact, sd.Links "
                    "FROM Users u "
                    "JOIN Student s ON u.UserID = s.UserID "
                    "JOIN StudentDetails sd ON s.StudentID = sd.StudentID "
                    "WHERE u.Email = @loggedInEmail";

                MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
                cmd->Parameters->AddWithValue("@Email", loggedInEmail);

                // Execute the query and retrieve results
                MySqlDataReader^ reader = cmd->ExecuteReader();

                if (reader->Read())
                {
                    // Retrieve data from the reader
                    String^ sID = reader->GetString("StudentID");
                    String^ dob = reader->GetString("dob");
                    String^ majorID = reader->GetString("MajorID");
                    String^ biography = reader->GetString("Biography");
                    String^ contact = reader->GetString("Contact");
                    String^ links = reader->GetString("Links");

                    // Populate profile page fields with student data
                    this->textBox1->Text = sID;
                    this->textBox2->Text = dob;
                    this->textBox3->Text = majorID;
                    this->textBox4->Text = biography;
                    this->textBox5->Text = contact;
                    this->textBox6->Text = links;
                }
                reader->Close();
                conn->Close();
            }
            catch (Exception^ e)
            {
                MessageBox::Show("Error: " + e->Message);
            }
        }

    protected:
        // Form fields to display student details
        System::Windows::Forms::TextBox^ txtStudentID;
        System::Windows::Forms::TextBox^ txtDOB;
        System::Windows::Forms::TextBox^ txtMajorID;
        System::Windows::Forms::TextBox^ txtBiography;
        System::Windows::Forms::TextBox^ txtContact;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::TextBox^ textBox6;
    protected:

    protected:
        System::Windows::Forms::TextBox^ txtLinks;

        // Method to initialize form components (TextBoxes, etc.)
        void InitializeComponent(void)
        {
            this->txtStudentID = (gcnew System::Windows::Forms::TextBox());
            this->txtDOB = (gcnew System::Windows::Forms::TextBox());
            this->txtMajorID = (gcnew System::Windows::Forms::TextBox());
            this->txtBiography = (gcnew System::Windows::Forms::TextBox());
            this->txtContact = (gcnew System::Windows::Forms::TextBox());
            this->txtLinks = (gcnew System::Windows::Forms::TextBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->SuspendLayout();
            // 
            // txtStudentID
            // 
            this->txtStudentID->Location = System::Drawing::Point(120, 50);
            this->txtStudentID->Name = L"txtStudentID";
            this->txtStudentID->Size = System::Drawing::Size(100, 22);
            this->txtStudentID->TabIndex = 0;
            // 
            // txtDOB
            // 
            this->txtDOB->Location = System::Drawing::Point(120, 100);
            this->txtDOB->Name = L"txtDOB";
            this->txtDOB->Size = System::Drawing::Size(100, 22);
            this->txtDOB->TabIndex = 0;
            // 
            // txtMajorID
            // 
            this->txtMajorID->Location = System::Drawing::Point(120, 150);
            this->txtMajorID->Name = L"txtMajorID";
            this->txtMajorID->Size = System::Drawing::Size(100, 22);
            this->txtMajorID->TabIndex = 0;
            // 
            // txtBiography
            // 
            this->txtBiography->Location = System::Drawing::Point(120, 200);
            this->txtBiography->Name = L"txtBiography";
            this->txtBiography->Size = System::Drawing::Size(100, 22);
            this->txtBiography->TabIndex = 0;
            // 
            // txtContact
            // 
            this->txtContact->Location = System::Drawing::Point(120, 250);
            this->txtContact->Name = L"txtContact";
            this->txtContact->Size = System::Drawing::Size(100, 22);
            this->txtContact->TabIndex = 0;
            // 
            // txtLinks
            // 
            this->txtLinks->Location = System::Drawing::Point(120, 300);
            this->txtLinks->Name = L"txtLinks";
            this->txtLinks->Size = System::Drawing::Size(100, 22);
            this->txtLinks->TabIndex = 0;
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(128, 53);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(163, 22);
            this->textBox1->TabIndex = 0;
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(128, 107);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(163, 22);
            this->textBox2->TabIndex = 1;
            // 
            // textBox3
            // 
            this->textBox3->Location = System::Drawing::Point(128, 167);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(163, 22);
            this->textBox3->TabIndex = 2;
            // 
            // textBox4
            // 
            this->textBox4->Location = System::Drawing::Point(128, 235);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(163, 22);
            this->textBox4->TabIndex = 3;
            // 
            // textBox5
            // 
            this->textBox5->Location = System::Drawing::Point(128, 285);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(163, 22);
            this->textBox5->TabIndex = 4;
            // 
            // textBox6
            // 
            this->textBox6->Location = System::Drawing::Point(128, 351);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(163, 22);
            this->textBox6->TabIndex = 5;
            // 
            // Profile
            // 
            this->ClientSize = System::Drawing::Size(480, 474);
            this->Controls->Add(this->textBox6);
            this->Controls->Add(this->textBox5);
            this->Controls->Add(this->textBox4);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->textBox1);
            this->Name = L"Profile";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
    };
}