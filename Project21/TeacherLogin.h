#pragma once
#include "teacherWindow.h"
namespace Project21 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;//included data base

											 /// <summary>
											 /// Summary for TeacherLogin
											 /// </summary>
	public ref class TeacherLogin : public System::Windows::Forms::Form
	{
	public:
		TeacherLogin(void)
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
		~TeacherLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:

	private: System::Windows::Forms::TextBox^  username_txt;
	private: System::Windows::Forms::TextBox^  password_txt;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  login_btn;
	private: System::Windows::Forms::Button^  button1;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->username_txt = (gcnew System::Windows::Forms::TextBox());
			this->password_txt = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->login_btn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox1->Controls->Add(this->username_txt);
			this->groupBox1->Controls->Add(this->password_txt);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->login_btn);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox1->Location = System::Drawing::Point(39, 62);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(420, 178);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Sign In";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &TeacherLogin::groupBox1_Enter);
			// 
			// username_txt
			// 
			this->username_txt->Location = System::Drawing::Point(126, 30);
			this->username_txt->Name = L"username_txt";
			this->username_txt->Size = System::Drawing::Size(243, 20);
			this->username_txt->TabIndex = 5;
			// 
			// password_txt
			// 
			this->password_txt->Location = System::Drawing::Point(126, 73);
			this->password_txt->Name = L"password_txt";
			this->password_txt->PasswordChar = '*';
			this->password_txt->Size = System::Drawing::Size(243, 20);
			this->password_txt->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(12, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 15);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(12, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 15);
			this->label1->TabIndex = 2;
			this->label1->Text = L"User Name";
			// 
			// login_btn
			// 
			this->login_btn->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->login_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->login_btn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->login_btn->Location = System::Drawing::Point(126, 113);
			this->login_btn->Name = L"login_btn";
			this->login_btn->Size = System::Drawing::Size(123, 23);
			this->login_btn->TabIndex = 1;
			this->login_btn->Text = L"Login";
			this->login_btn->UseVisualStyleBackColor = false;
			this->login_btn->Click += gcnew System::EventHandler(this, &TeacherLogin::login_btn_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(255, 113);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Cancel";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &TeacherLogin::button1_Click);
			// 
			// TeacherLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(534, 336);
			this->Controls->Add(this->groupBox1);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Name = L"TeacherLogin";
			this->Text = L"TeacherLogin";
			this->Load += gcnew System::EventHandler(this, &TeacherLogin::TeacherLogin_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void login_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=1965";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from AdminLog.teacherdata where idTeacher='" + this->username_txt->Text + "' and passwordTeacher='" + this->password_txt->Text + "' ;", conDataBase);
		MySqlDataReader^ myReader;
		try {// exception handling
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			int count = 0;
			while (myReader->Read()) {
				count = count + 1;

			}
			if (count == 1) {
				//this->Hide();
				//AdminWindow^ AW = gcnew AdminWindow();
				//AW->ShowDialog();

				teacherWindow^ TW = gcnew teacherWindow();
				this->Hide();
				TW->ShowDialog();
			}
			else if (count>1) {
				MessageBox::Show("Duplicate Username and password... Access denied");
			}

			else {
				MessageBox::Show("Username and password is incorrect");
			}

		}
		catch (Exception^ex) {

			MessageBox::Show(ex->Message);
		}

	}
	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void TeacherLogin_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
