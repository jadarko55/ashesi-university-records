#pragma once

namespace ashesi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Modules
	/// </summary>
	public ref class Modules : public System::Windows::Forms::Form
	{
	public:
		Modules(void)
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
		~Modules()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button5;
	protected:
	private: System::Windows::Forms::Button^ button3;




	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Button^ button8;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Modules::typeid));
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button5
			// 
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button5->Location = System::Drawing::Point(418, 446);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(88, 35);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Delete";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button3->Location = System::Drawing::Point(91, 446);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 35);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Add";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(20, 346);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(664, 57);
			this->dataGridView1->TabIndex = 10;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Module Code";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Module Name";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Department";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 150;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Instructor";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 150;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(133, 58);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(171, 26);
			this->textBox1->TabIndex = 7;
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button4->Location = System::Drawing::Point(247, 446);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(91, 35);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Update";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Location = System::Drawing::Point(9, 119);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 32);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(27, 64);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Search: ";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"All Modules", L"Completed Modules", L"Active Modules" });
			this->comboBox1->Location = System::Drawing::Point(133, 6);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(171, 28);
			this->comboBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(280, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(138, 29);
			this->label2->TabIndex = 9;
			this->label2->Text = L"MODULES";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(27, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Filter By: ";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkRed;
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(285, 133);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(343, 160);
			this->panel1->TabIndex = 8;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Modules::panel1_Paint);
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
			this->button7->Click += gcnew System::EventHandler(this, &Modules::button7_Click);
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
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->Location = System::Drawing::Point(252, 119);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 32);
			this->button2->TabIndex = 5;
			this->button2->Text = L"View";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(124, 133);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(164, 160);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button8->Location = System::Drawing::Point(578, 446);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 35);
			this->button8->TabIndex = 14;
			this->button8->Text = L"View";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// Modules
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Maroon;
			this->ClientSize = System::Drawing::Size(704, 537);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Modules";
			this->Text = L"Modules";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
