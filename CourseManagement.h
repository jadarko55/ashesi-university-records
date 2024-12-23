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
	/// Summary for CourseManagement
	/// </summary>
	public ref class CourseManagement : public System::Windows::Forms::Form
	{
	public:
		CourseManagement(void)
		{
			InitializeComponent();
			LoadCourseData();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CourseManagement()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^ dgvCourses;
	private: System::Windows::Forms::TextBox^ txtCourseName;
	private: System::Windows::Forms::TextBox^ txtCredit;
	private: System::Windows::Forms::TextBox^ txtFacultyID;
	private: System::Windows::Forms::Button^ btnAddCourse;
	private: System::Windows::Forms::Button^ btnDeleteCourse;
	private: System::Windows::Forms::Label^ lblCourseName;
	private: System::Windows::Forms::Label^ lblCredit;
	private: System::Windows::Forms::Label^ lblFacultyID;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgvCourses = (gcnew System::Windows::Forms::DataGridView());
			this->txtCourseName = (gcnew System::Windows::Forms::TextBox());
			this->txtCredit = (gcnew System::Windows::Forms::TextBox());
			this->txtFacultyID = (gcnew System::Windows::Forms::TextBox());
			this->btnAddCourse = (gcnew System::Windows::Forms::Button());
			this->btnDeleteCourse = (gcnew System::Windows::Forms::Button());
			this->lblCourseName = (gcnew System::Windows::Forms::Label());
			this->lblCredit = (gcnew System::Windows::Forms::Label());
			this->lblFacultyID = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCourses))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvCourses
			// 
			this->dgvCourses->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCourses->Location = System::Drawing::Point(12, 12);
			this->dgvCourses->Name = L"dgvCourses";
			this->dgvCourses->RowHeadersWidth = 51;
			this->dgvCourses->RowTemplate->Height = 24;
			this->dgvCourses->Size = System::Drawing::Size(776, 300);
			this->dgvCourses->TabIndex = 0;
			// 
			// txtCourseName
			// 
			this->txtCourseName->Location = System::Drawing::Point(12, 330);
			this->txtCourseName->Name = L"txtCourseName";
			this->txtCourseName->Size = System::Drawing::Size(200, 22);
			this->txtCourseName->TabIndex = 1;
			// 
			// txtCredit
			// 
			this->txtCredit->Location = System::Drawing::Point(12, 375);
			this->txtCredit->Name = L"txtCredit";
			this->txtCredit->Size = System::Drawing::Size(200, 22);
			this->txtCredit->TabIndex = 2;
			// 
			// txtFacultyID
			// 
			this->txtFacultyID->Location = System::Drawing::Point(12, 420);
			this->txtFacultyID->Name = L"txtFacultyID";
			this->txtFacultyID->Size = System::Drawing::Size(200, 22);
			this->txtFacultyID->TabIndex = 3;
			// 
			// btnAddCourse
			// 
			this->btnAddCourse->Location = System::Drawing::Point(230, 330);
			this->btnAddCourse->Name = L"btnAddCourse";
			this->btnAddCourse->Size = System::Drawing::Size(75, 23);
			this->btnAddCourse->TabIndex = 4;
			this->btnAddCourse->Text = L"Add";
			this->btnAddCourse->UseVisualStyleBackColor = true;
			this->btnAddCourse->Click += gcnew System::EventHandler(this, &CourseManagement::btnAddCourse_Click);
			// 
			// btnDeleteCourse
			// 
			this->btnDeleteCourse->Location = System::Drawing::Point(230, 375);
			this->btnDeleteCourse->Name = L"btnDeleteCourse";
			this->btnDeleteCourse->Size = System::Drawing::Size(75, 23);
			this->btnDeleteCourse->TabIndex = 5;
			this->btnDeleteCourse->Text = L"Delete";
			this->btnDeleteCourse->UseVisualStyleBackColor = true;
			this->btnDeleteCourse->Click += gcnew System::EventHandler(this, &CourseManagement::btnDeleteCourse_Click);
			// 
			// lblCourseName
			// 
			this->lblCourseName->AutoSize = true;
			this->lblCourseName->Location = System::Drawing::Point(12, 310);
			this->lblCourseName->Name = L"lblCourseName";
			this->lblCourseName->Size = System::Drawing::Size(93, 17);
			this->lblCourseName->TabIndex = 6;
			this->lblCourseName->Text = L"Course Name";
			// 
			// lblCredit
			// 
			this->lblCredit->AutoSize = true;
			this->lblCredit->Location = System::Drawing::Point(12, 355);
			this->lblCredit->Name = L"lblCredit";
			this->lblCredit->Size = System::Drawing::Size(43, 17);
			this->lblCredit->TabIndex = 7;
			this->lblCredit->Text = L"Credit";
			// 
			// lblFacultyID
			// 
			this->lblFacultyID->AutoSize = true;
			this->lblFacultyID->Location = System::Drawing::Point(12, 400);
			this->lblFacultyID->Name = L"lblFacultyID";
			this->lblFacultyID->Size = System::Drawing::Size(68, 17);
			this->lblFacultyID->TabIndex = 8;
			this->lblFacultyID->Text = L"Faculty ID";
			// 
			// CourseManagement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(800, 450);
			this->Controls->Add(this->lblFacultyID);
			this->Controls->Add(this->lblCredit);
			this->Controls->Add(this->lblCourseName);
			this->Controls->Add(this->btnDeleteCourse);
			this->Controls->Add(this->btnAddCourse);
			this->Controls->Add(this->txtFacultyID);
			this->Controls->Add(this->txtCredit);
			this->Controls->Add(this->txtCourseName);
			this->Controls->Add(this->dgvCourses);
			this->Name = L"CourseManagement";
			this->Text = L"CourseManagement";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCourses))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

	private: System::Void LoadCourseData(void)
	{
		try {
			MySqlConnection^ conn = gcnew MySqlConnection("server=localhost;userid=root;password='';database=ashesi");
			MySqlDataAdapter^ da = gcnew MySqlDataAdapter("SELECT * FROM course", conn);
			DataTable^ dt = gcnew DataTable();
			da->Fill(dt);
			dgvCourses->DataSource = dt;
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
	}

	private: System::Void btnAddCourse_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ courseName = txtCourseName->Text;
		int credit = Convert::ToInt32(txtCredit->Text);
		int facultyID = Convert::ToInt32(txtFacultyID->Text);

		try {
			MySqlConnection^ conn = gcnew MySqlConnection("server=localhost;userid=root;password='';database=ashesi");
			conn->Open();
			MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO course (CourseName, Credit, FacultyID) VALUES (@CourseName, @Credit, @FacultyID)", conn);
			cmd->Parameters->AddWithValue("@CourseName", courseName);
			cmd->Parameters->AddWithValue("@Credit", credit);
			cmd->Parameters->AddWithValue("@FacultyID", facultyID);
			cmd->ExecuteNonQuery();
			conn->Close();

			MessageBox::Show("Course added successfully.");
			LoadCourseData();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
	}

	private: System::Void btnDeleteCourse_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dgvCourses->SelectedRows->Count > 0) {
			int courseID = Convert::ToInt32(dgvCourses->SelectedRows[0]->Cells["CourseID"]->Value);

			try {
				MySqlConnection^ conn = gcnew MySqlConnection("server=localhost;userid=root;password='';database=ashesi");
				conn->Open();

				// Delete from enrollment table
				MySqlCommand^ deleteEnrollmentCmd = gcnew MySqlCommand("DELETE FROM enrollment WHERE CourseID = @CourseID", conn);
				deleteEnrollmentCmd->Parameters->AddWithValue("@CourseID", courseID);
				deleteEnrollmentCmd->ExecuteNonQuery();

				// Delete from course table
				MySqlCommand^ deleteCourseCmd = gcnew MySqlCommand("DELETE FROM course WHERE CourseID = @CourseID", conn);
				deleteCourseCmd->Parameters->AddWithValue("@CourseID", courseID);
				deleteCourseCmd->ExecuteNonQuery();

				conn->Close();

				MessageBox::Show("Course and related enrollments deleted successfully.");
				LoadCourseData();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message);
			}
		}
		else {
			MessageBox::Show("Please select a course to delete.");
		}
	}
	};
}
