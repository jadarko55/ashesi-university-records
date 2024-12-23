#pragma once
#include "AddFaculty.h"
#include "UpdateFaculty.h"
#include "DeleteFaculty.h"

namespace ashesi {

	using namespace MySql::Data::MySqlClient;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FacultyManagement
	/// </summary>
	public ref class FacultyManagement : public System::Windows::Forms::Form
	{
	public:
		FacultyManagement(void)
		{
			InitializeComponent();
			LoadFacultyData();
			LoadFacultyDetailsData();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FacultyManagement()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvFaculty;
	protected:
	private: System::Windows::Forms::DataGridView^ dgvFacultyDetails;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnAddFaculty;
	private: System::Windows::Forms::Button^ btnUpdateFaculty;
	private: System::Windows::Forms::Button^ btnDeleteFaculty;

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
			this->dgvFaculty = (gcnew System::Windows::Forms::DataGridView());
			this->dgvFacultyDetails = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnAddFaculty = (gcnew System::Windows::Forms::Button());
			this->btnDeleteFaculty = (gcnew System::Windows::Forms::Button());
			this->btnUpdateFaculty = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvFaculty))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvFacultyDetails))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgvFaculty
			// 
			this->dgvFaculty->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvFaculty->Location = System::Drawing::Point(55, 183);
			this->dgvFaculty->Name = L"dgvFaculty";
			this->dgvFaculty->RowHeadersWidth = 51;
			this->dgvFaculty->RowTemplate->Height = 24;
			this->dgvFaculty->Size = System::Drawing::Size(240, 290);
			this->dgvFaculty->TabIndex = 0;
			// 
			// dgvFacultyDetails
			// 
			this->dgvFacultyDetails->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvFacultyDetails->Location = System::Drawing::Point(321, 183);
			this->dgvFacultyDetails->Name = L"dgvFacultyDetails";
			this->dgvFacultyDetails->RowHeadersWidth = 51;
			this->dgvFacultyDetails->RowTemplate->Height = 24;
			this->dgvFacultyDetails->Size = System::Drawing::Size(444, 290);
			this->dgvFacultyDetails->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btnAddFaculty);
			this->panel1->Controls->Add(this->btnDeleteFaculty);
			this->panel1->Controls->Add(this->btnUpdateFaculty);
			this->panel1->Location = System::Drawing::Point(182, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(582, 76);
			this->panel1->TabIndex = 2;
			// 
			// btnAddFaculty
			// 
			this->btnAddFaculty->Location = System::Drawing::Point(408, 27);
			this->btnAddFaculty->Name = L"btnAddFaculty";
			this->btnAddFaculty->Size = System::Drawing::Size(154, 31);
			this->btnAddFaculty->TabIndex = 2;
			this->btnAddFaculty->Text = L"Add Faculty";
			this->btnAddFaculty->UseVisualStyleBackColor = true;
			this->btnAddFaculty->Click += gcnew System::EventHandler(this, &FacultyManagement::btnAddFaculty_Click);
			// 
			// btnDeleteFaculty
			// 
			this->btnDeleteFaculty->Location = System::Drawing::Point(36, 27);
			this->btnDeleteFaculty->Name = L"btnDeleteFaculty";
			this->btnDeleteFaculty->Size = System::Drawing::Size(156, 31);
			this->btnDeleteFaculty->TabIndex = 0;
			this->btnDeleteFaculty->Text = L"Delete Faculty";
			this->btnDeleteFaculty->UseVisualStyleBackColor = true;
			this->btnDeleteFaculty->Click += gcnew System::EventHandler(this, &FacultyManagement::btnDeleteFaculty_Click);
			// 
			// btnUpdateFaculty
			// 
			this->btnUpdateFaculty->Location = System::Drawing::Point(217, 27);
			this->btnUpdateFaculty->Name = L"btnUpdateFaculty";
			this->btnUpdateFaculty->Size = System::Drawing::Size(156, 31);
			this->btnUpdateFaculty->TabIndex = 1;
			this->btnUpdateFaculty->Text = L"Update Faculty";
			this->btnUpdateFaculty->UseVisualStyleBackColor = true;
			this->btnUpdateFaculty->Click += gcnew System::EventHandler(this, &FacultyManagement::btnUpdateFaculty_Click);
			// 
			// FacultyManagement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(777, 485);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->dgvFacultyDetails);
			this->Controls->Add(this->dgvFaculty);
			this->Name = L"FacultyManagement";
			this->Text = L"FacultyManagement";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvFaculty))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvFacultyDetails))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnDeleteFaculty_Click(System::Object^ sender, System::EventArgs^ e) {
		DeleteFaculty^ deleteFaculty = gcnew DeleteFaculty();
		deleteFaculty->Show();
	}
	private: System::Void btnAddFaculty_Click(System::Object^ sender, System::EventArgs^ e) {
		AddFaculty^ addFaculty = gcnew AddFaculty();
		addFaculty->Show();
	}
	private: System::Void btnUpdateFaculty_Click(System::Object^ sender, System::EventArgs^ e) {
		UpdateFaculty^ updateFaculty = gcnew UpdateFaculty();
		updateFaculty->Show();
	}

	private: System::Void LoadFacultyData(void)
	{
		try {
			MySqlConnection^ conn = gcnew MySqlConnection("server=localhost;userid=root;password='';database=ashesi");
			MySqlDataAdapter^ da = gcnew MySqlDataAdapter("SELECT * FROM faculty", conn);
			DataTable^ dt = gcnew DataTable();
			da->Fill(dt);
			dgvFaculty->DataSource = dt;
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
	}

	private: System::Void LoadFacultyDetailsData(void)
	{
		try {
			MySqlConnection^ conn = gcnew MySqlConnection("server=localhost;userid=root;password='';database=ashesi");
			MySqlDataAdapter^ da = gcnew MySqlDataAdapter("SELECT u.UserID, u.Name, u.Email, u.UserPassword FROM users u INNER JOIN faculty f ON u.UserID = f.UserID", conn);
			DataTable^ dt = gcnew DataTable();
			da->Fill(dt);
			dgvFacultyDetails->DataSource = dt;
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
	}
	};
}

