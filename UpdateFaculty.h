#pragma once
#include "UpdateFacultyDetails.h"

namespace ashesi {

	using namespace MySql::Data::MySqlClient;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UpdateFaculty
	/// </summary>
	public ref class UpdateFaculty : public System::Windows::Forms::Form
	{
	public:
		UpdateFaculty(void)
		{
			InitializeComponent();
			LoadFaculty();
			SetPlaceholderText();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UpdateFaculty()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^ dgvFaculty;
	private: System::Windows::Forms::TextBox^ txtFacultyID;
	private: System::Windows::Forms::Button^ btnSubmit;
	private: System::Windows::Forms::Label^ lblFacultyID;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgvFaculty = (gcnew System::Windows::Forms::DataGridView());
			this->txtFacultyID = (gcnew System::Windows::Forms::TextBox());
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			this->lblFacultyID = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvFaculty))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvFaculty
			// 
			this->dgvFaculty->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvFaculty->Location = System::Drawing::Point(12, 12);
			this->dgvFaculty->Name = L"dgvFaculty";
			this->dgvFaculty->RowHeadersWidth = 51;
			this->dgvFaculty->RowTemplate->Height = 24;
			this->dgvFaculty->Size = System::Drawing::Size(776, 300);
			this->dgvFaculty->TabIndex = 0;
			// 
			// txtFacultyID
			// 
			this->txtFacultyID->Location = System::Drawing::Point(12, 330);
			this->txtFacultyID->Name = L"txtFacultyID";
			this->txtFacultyID->Size = System::Drawing::Size(200, 22);
			this->txtFacultyID->TabIndex = 1;
			this->txtFacultyID->Enter += gcnew System::EventHandler(this, &UpdateFaculty::txtFacultyID_Enter);
			this->txtFacultyID->Leave += gcnew System::EventHandler(this, &UpdateFaculty::txtFacultyID_Leave);
			// 
			// btnSubmit
			// 
			this->btnSubmit->Location = System::Drawing::Point(230, 330);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(75, 23);
			this->btnSubmit->TabIndex = 2;
			this->btnSubmit->Text = L"Submit";
			this->btnSubmit->UseVisualStyleBackColor = true;
			this->btnSubmit->Click += gcnew System::EventHandler(this, &UpdateFaculty::btnSubmit_Click);
			// 
			// lblFacultyID
			// 
			this->lblFacultyID->AutoSize = true;
			this->lblFacultyID->Location = System::Drawing::Point(12, 310);
			this->lblFacultyID->Name = L"lblFacultyID";
			this->lblFacultyID->Size = System::Drawing::Size(70, 17);
			this->lblFacultyID->TabIndex = 3;
			this->lblFacultyID->Text = L"Faculty ID";
			// 
			// UpdateFaculty
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(800, 450);
			this->Controls->Add(this->lblFacultyID);
			this->Controls->Add(this->btnSubmit);
			this->Controls->Add(this->txtFacultyID);
			this->Controls->Add(this->dgvFaculty);
			this->Name = L"UpdateFaculty";
			this->Text = L"UpdateFaculty";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvFaculty))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

	private: System::Void LoadFaculty(void)
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

	private: System::Void SetPlaceholderText(void)
	{
		txtFacultyID->Text = "Enter Faculty ID";
		txtFacultyID->ForeColor = System::Drawing::Color::Gray;
	}

	private: System::Void txtFacultyID_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (txtFacultyID->Text == "Enter Faculty ID") {
			txtFacultyID->Text = "";
			txtFacultyID->ForeColor = System::Drawing::Color::Black;
		}
	}

	private: System::Void txtFacultyID_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(txtFacultyID->Text)) {
			txtFacultyID->Text = "Enter Faculty ID";
			txtFacultyID->ForeColor = System::Drawing::Color::Gray;
		}
	}

	private: System::Void btnSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ facultyID = txtFacultyID->Text;

		// Check if Faculty ID is entered
		if (String::IsNullOrEmpty(facultyID) || facultyID == "Enter Faculty ID") {
			MessageBox::Show("Please enter a Faculty ID.");
			return;
		}

		// Open the UpdateFacultyDetails form with the entered faculty ID
		UpdateFacultyDetails^ updateForm = gcnew UpdateFacultyDetails(facultyID);
		updateForm->Show();
	}
	};
}
