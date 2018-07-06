#pragma once
#include "showmarks.h"
#include "Email.h"
//#include "readbooks.h"
namespace Project21 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;//included data base
	using namespace System::IO;

	/// <summary>
	/// Summary for studentWindow
	/// </summary>
	public ref class studentWindow : public System::Windows::Forms::Form
	{
	public:
		studentWindow(void)
		{
			InitializeComponent();
			//FillComboBox();

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~studentWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ProgressBar^  progressBar1;


	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  button5;



	private: System::ComponentModel::IContainer^  components;

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
			this->components = (gcnew System::ComponentModel::Container());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(586, 593);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 39);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Email";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Black;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(372, 593);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 38);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Attendance";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &studentWindow::button3_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->label1->Location = System::Drawing::Point(292, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(632, 68);
			this->label1->TabIndex = 4;
			this->label1->Text = L"WELCOME TO STUDENT PORTAL";
			// 
			// progressBar1
			// 
			this->progressBar1->BackColor = System::Drawing::Color::Black;
			this->progressBar1->ForeColor = System::Drawing::Color::Transparent;
			this->progressBar1->Location = System::Drawing::Point(0, 51);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(1318, 10);
			this->progressBar1->TabIndex = 5;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView1->Location = System::Drawing::Point(298, 286);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(684, 293);
			this->dataGridView1->TabIndex = 8;
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Black;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Location = System::Drawing::Point(833, 593);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(149, 38);
			this->button5->TabIndex = 15;
			this->button5->Text = L"Exit";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &studentWindow::button5_Click);
			// 
			// studentWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1366, 745);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"studentWindow";
			this->Text = L"studentWindow";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	/**private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {
	}


	private: void FillComboBox(void) {
		comboBox1->Items->Add("Semester 1");
		comboBox1->Items->Add("Semester 2");
		comboBox1->Items->Add("Semester 3");
		comboBox1->Items->Add("Semester 4");
	}**/


	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

	}
	/**private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		this->timer1->Start();

		if (this->comboBox1->Text == "Semester 1") {
			String^ constring = L"datasource=localhost;port=3306;username=root;password=1965";
			MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from AdminLog.courses ;", conDataBase);
			MySqlDataReader^ myReader;
			try {
				MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
				sda->SelectCommand = cmdDataBase;
				DataTable^ bdataset = gcnew DataTable();
				sda->Fill(bdataset);
				BindingSource^ bSource = gcnew BindingSource();

				bSource->DataSource = bdataset;
				dataGridView1->DataSource = bSource;
				sda->Update(bdataset);



			}
			catch (Exception^ex) {
				MessageBox::Show(ex->Message);


			}

		}

		else if (this->comboBox1->Text == "Semester 2") {
			String^ constring = L"datasource=localhost;port=3306;username=root;password=1965";
			MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from AdminLog.sem2coures ;", conDataBase);
			MySqlDataReader^ myReader;
			try {
				MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
				sda->SelectCommand = cmdDataBase;
				DataTable^ bdataset = gcnew DataTable();
				sda->Fill(bdataset);
				BindingSource^ bSource = gcnew BindingSource();

				bSource->DataSource = bdataset;
				dataGridView1->DataSource = bSource;
				sda->Update(bdataset);



			}
			catch (Exception^ex) {
				MessageBox::Show(ex->Message);


			}

		}

		else if (this->comboBox1->Text == "Semester 3") {
			String^ constring = L"datasource=localhost;port=3306;username=root;password=1965";
			MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from AdminLog.sem3courses ;", conDataBase);
			MySqlDataReader^ myReader;
			try {
				MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
				sda->SelectCommand = cmdDataBase;
				DataTable^ bdataset = gcnew DataTable();
				sda->Fill(bdataset);
				BindingSource^ bSource = gcnew BindingSource();

				bSource->DataSource = bdataset;
				dataGridView1->DataSource = bSource;
				sda->Update(bdataset);



			}
			catch (Exception^ex) {
				MessageBox::Show(ex->Message);


			}

		}

		else if (this->comboBox1->Text == "Semester 4") {
			String^ constring = L"datasource=localhost;port=3306;username=root;password=1965";
			MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from AdminLog.sem4courses ;", conDataBase);
			MySqlDataReader^ myReader;
			try {
				MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
				sda->SelectCommand = cmdDataBase;
				DataTable^ bdataset = gcnew DataTable();
				sda->Fill(bdataset);
				BindingSource^ bSource = gcnew BindingSource();

				bSource->DataSource = bdataset;
				dataGridView1->DataSource = bSource;
				sda->Update(bdataset);



			}
			catch (Exception^ex) {
				MessageBox::Show(ex->Message);


			}

		}

	}**/
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		this->progressBar1->Increment(8);
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
	/**private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		showmarks^ SMarks = gcnew showmarks();
		SMarks->ShowDialog();


	}**/
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

		//int bar = System::Convert::ToInt32(this->txt_username);


		String^ constring = L"datasource=localhost;port=3306;username=root;password=1965";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from AdminLog.attendance ;", conDataBase);
		MySqlDataReader^ myReader;
		try {
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase;
			DataTable^ bdataset = gcnew DataTable();
			sda->Fill(bdataset);
			BindingSource^ bSource = gcnew BindingSource();

			bSource->DataSource = bdataset;
			dataGridView1->DataSource = bSource;
			sda->Update(bdataset);



		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);


		}



	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

		Email^ em = gcnew Email();
		em->ShowDialog();

	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		StreamWriter^ outFile = gcnew StreamWriter("FeeVoucher.txt");
		outFile->Write("=                  FEE VOUCHER                  =\r\n");
		outFile->Write("=                                                                 =\r\n");
		outFile->Write("   ===========================\r\n");
		outFile->Write("Total credit hours                                   17\r\n");
		outFile->Write("\r\n");
		outFile->Write("Fee/Credit hour                             Rs 6800\r\n");
		outFile->Write("\r\n");
		outFile->Write("Bank fee                                             Rs 60\r\n");
		outFile->Write("\r\n");
		outFile->Write("Security Fee                                   Rs 1000\r\n");
		outFile->Write("\r\n");
		outFile->Write("Examination Fee                             Rs 500\r\n");
		outFile->Write("\r\n");
		outFile->Write("Transport                                     Rs 14,640\r\n");
		outFile->Write("=============================\r\n");
		outFile->Write("=============================\r\n");
		outFile->Write("TOTAL                                       Rs 131,800\r\n");
		MessageBox::Show("Text file of fee voucher is created");
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		//readbooks^ RB = gcnew readbooks();
		///RB->ShowDialog();


	}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void studentWindow_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
