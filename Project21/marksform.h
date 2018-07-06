#pragma once

namespace Project21 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for marksform
	/// </summary>
	public ref class marksform : public System::Windows::Forms::Form
	{
	public:
		marksform(void)
		{
			InitializeComponent();
			FillComboBox();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~marksform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button2;
	protected:
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  year_lbl;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  semester_lbl;

	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label7;


	protected:

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->year_lbl = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->semester_lbl = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(79, 142);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 128;
			this->button2->Text = L"Update";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &marksform::button2_Click);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(13, 116);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(51, 13);
			this->label33->TabIndex = 127;
			this->label33->Text = L"Select ID";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(79, 113);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 126;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &marksform::comboBox1_SelectedIndexChanged);
			// 
			// year_lbl
			// 
			this->year_lbl->AutoSize = true;
			this->year_lbl->Location = System::Drawing::Point(265, 69);
			this->year_lbl->Name = L"year_lbl";
			this->year_lbl->Size = System::Drawing::Size(36, 13);
			this->year_lbl->TabIndex = 129;
			this->year_lbl->Text = L"YEAR";
			this->year_lbl->Click += gcnew System::EventHandler(this, &marksform::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(391, 66);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(166, 20);
			this->textBox1->TabIndex = 130;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &marksform::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(391, 92);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(166, 20);
			this->textBox2->TabIndex = 132;
			// 
			// semester_lbl
			// 
			this->semester_lbl->AutoSize = true;
			this->semester_lbl->Location = System::Drawing::Point(265, 95);
			this->semester_lbl->Name = L"semester_lbl";
			this->semester_lbl->Size = System::Drawing::Size(66, 13);
			this->semester_lbl->TabIndex = 131;
			this->semester_lbl->Text = L"SEMESTER";
			this->semester_lbl->Click += gcnew System::EventHandler(this, &marksform::label2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(391, 118);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(166, 20);
			this->textBox3->TabIndex = 134;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(265, 121);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 133;
			this->label3->Text = L"Calculus I";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(391, 144);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(166, 20);
			this->textBox4->TabIndex = 136;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &marksform::textBox4_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(265, 147);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 13);
			this->label4->TabIndex = 135;
			this->label4->Text = L"Islamiat";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(391, 170);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(166, 20);
			this->textBox5->TabIndex = 138;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(265, 173);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(95, 13);
			this->label5->TabIndex = 137;
			this->label5->Text = L"English Language ";
			this->label5->Click += gcnew System::EventHandler(this, &marksform::label5_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(391, 196);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(166, 20);
			this->textBox6->TabIndex = 140;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(265, 199);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(113, 13);
			this->label6->TabIndex = 139;
			this->label6->Text = L"English Language Lab";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(391, 222);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(166, 20);
			this->textBox7->TabIndex = 142;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(265, 225);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(88, 13);
			this->label7->TabIndex = 141;
			this->label7->Text = L"Basic Electronics";
			// 
			// marksform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ClientSize = System::Drawing::Size(749, 316);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->semester_lbl);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->year_lbl);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->comboBox1);
			this->Name = L"marksform";
			this->Text = L"marksform";
			this->Load += gcnew System::EventHandler(this, &marksform::marksform_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

		String^ comboval = comboBox1->Text;

		String^ constring = L"datasource=localhost;port=3306;username=root;password=1965";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from adminlog.marks1 where idStudent='" + comboval + "';", conDataBase);
		MySqlDataReader^ myReader;
		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();

			if (myReader->Read()) {
				//String^ EidVal= myReader->GetInt32("idEmployeeInfo").ToString();	
				//Eid_txt->Text=EidVal;
				//String^ NameVal= myReader->GetString("name");
				//Name_txt->Text= NameVal;
				//String^ SurnameVal= myReader->GetString("surname");
				//Surname_txt->Text=SurnameVal;
				//String^ AgeVal= myReader->GetInt32("age").ToString();
				//Age_txt->Text = AgeVal;

			}


		}
		catch (Exception^ex) {

			MessageBox::Show(ex->Message);
		}



	}


	private: void FillComboBox(void) {

		String^ constring = L"datasource=localhost;port=3306;username=root;password=1965";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from adminlog.studentdata ;", conDataBase);
		MySqlDataReader^ myReader;
		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();

			while (myReader->Read()) {
				String^ vid;
				vid = myReader->GetString("idstudent");
				comboBox1->Items->Add(vid);
			}


		}
		catch (Exception^ex) {

			MessageBox::Show(ex->Message);
		}


	}


	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {


		String^ comboval = comboBox1->Text;
		String^ constring = L"datasource=localhost;port=3306;username=root;password=1965";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from adminlog.marks1 where idstudent='" + comboval + "';", conDataBase);
		MySqlDataReader^ myReader;
		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show("Successfully saved");

			while (myReader->Read()) {

			}


		}
		catch (Exception^ex) {

			MessageBox::Show(ex->Message);
		}


	}
	private: System::Void marksform_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
