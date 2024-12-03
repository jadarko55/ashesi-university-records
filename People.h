#pragma once

namespace ashesi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for People
	/// </summary>
	public ref class People : public System::Windows::Forms::Form
	{
	public:
		People(void)
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
		~People()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:





	private: System::Windows::Forms::DataGridView^ dataGridView1;











	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox2;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Department;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(People::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Department = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Department
			});
			this->dataGridView1->Location = System::Drawing::Point(44, 354);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(962, 55);
			this->dataGridView1->TabIndex = 10;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &People::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Name";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Role";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"ID";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 150;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Email";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 150;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Phone";
			this->Column5->MinimumWidth = 8;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 150;
			// 
			// Department
			// 
			this->Department->HeaderText = L"Department";
			this->Department->MinimumWidth = 8;
			this->Department->Name = L"Department";
			this->Department->Width = 150;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(271, 127);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(164, 160);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button8->Location = System::Drawing::Point(692, 469);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 35);
			this->button8->TabIndex = 22;
			this->button8->Text = L"View";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(133, 58);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(171, 26);
			this->textBox2->TabIndex = 7;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::Control;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button7->Location = System::Drawing::Point(171, 119);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 32);
			this->button7->TabIndex = 9;
			this->button7->Text = L"Delete";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Control;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button6->Location = System::Drawing::Point(90, 119);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 32);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Update";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::Control;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button9->Location = System::Drawing::Point(9, 119);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 32);
			this->button9->TabIndex = 4;
			this->button9->Text = L"Add";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(27, 64);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Search: ";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Faculty", L"Student" });
			this->comboBox2->Location = System::Drawing::Point(133, 6);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(171, 28);
			this->comboBox2->TabIndex = 1;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::Control;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button10->Location = System::Drawing::Point(252, 119);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 32);
			this->button10->TabIndex = 5;
			this->button10->Text = L"View";
			this->button10->UseVisualStyleBackColor = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::Control;
			this->label5->Location = System::Drawing::Point(27, 14);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(74, 20);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Filter By: ";
			// 
			// button11
			// 
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button11->Location = System::Drawing::Point(532, 469);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(88, 35);
			this->button11->TabIndex = 21;
			this->button11->Text = L"Delete";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button12->Location = System::Drawing::Point(181, 469);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(90, 35);
			this->button12->TabIndex = 19;
			this->button12->Text = L"Add";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button13->Location = System::Drawing::Point(361, 469);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(91, 35);
			this->button13->TabIndex = 20;
			this->button13->Text = L"Update";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Control;
			this->label6->Location = System::Drawing::Point(467, 37);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(115, 29);
			this->label6->TabIndex = 17;
			this->label6->Text = L"PEOPLE";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DarkRed;
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->button10);
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->comboBox2);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Location = System::Drawing::Point(432, 127);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(343, 160);
			this->panel2->TabIndex = 16;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &People::panel2_Paint);
			// 
			// People
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Maroon;
			this->ClientSize = System::Drawing::Size(1024, 566);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"People";
			this->Text = L"People";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
