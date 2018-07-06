#pragma once

namespace Project21 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Web;
	using namespace System::Net::Mail;

	/// <summary>
	/// Summary for Email
	/// </summary>
	public ref class Email : public System::Windows::Forms::Form
	{
	public:
		Email(void)
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
		~Email()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox_USERNAME;
	private: System::Windows::Forms::TextBox^  textBox_FROM;
	private: System::Windows::Forms::TextBox^  textBox_TO;
	private: System::Windows::Forms::TextBox^  textBox_PASSWORD;
	private: System::Windows::Forms::TextBox^  textBox_SMTP;

	private: System::Windows::Forms::TextBox^  textBox_SUBJECT;
	private: System::Windows::Forms::RichTextBox^  richTextBox_BODY;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox_USERNAME = (gcnew System::Windows::Forms::TextBox());
			this->textBox_FROM = (gcnew System::Windows::Forms::TextBox());
			this->textBox_TO = (gcnew System::Windows::Forms::TextBox());
			this->textBox_PASSWORD = (gcnew System::Windows::Forms::TextBox());
			this->textBox_SMTP = (gcnew System::Windows::Forms::TextBox());
			this->textBox_SUBJECT = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox_BODY = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(15, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(15, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"From";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Black;
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(15, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Black;
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(15, 144);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"To";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Black;
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(15, 172);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Subject";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Black;
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(15, 201);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"SMTP";
			// 
			// textBox_USERNAME
			// 
			this->textBox_USERNAME->Location = System::Drawing::Point(99, 62);
			this->textBox_USERNAME->Name = L"textBox_USERNAME";
			this->textBox_USERNAME->Size = System::Drawing::Size(157, 20);
			this->textBox_USERNAME->TabIndex = 12;
			// 
			// textBox_FROM
			// 
			this->textBox_FROM->Location = System::Drawing::Point(99, 88);
			this->textBox_FROM->Name = L"textBox_FROM";
			this->textBox_FROM->Size = System::Drawing::Size(157, 20);
			this->textBox_FROM->TabIndex = 13;
			// 
			// textBox_TO
			// 
			this->textBox_TO->Location = System::Drawing::Point(99, 144);
			this->textBox_TO->Name = L"textBox_TO";
			this->textBox_TO->Size = System::Drawing::Size(157, 20);
			this->textBox_TO->TabIndex = 15;
			// 
			// textBox_PASSWORD
			// 
			this->textBox_PASSWORD->Location = System::Drawing::Point(99, 118);
			this->textBox_PASSWORD->Name = L"textBox_PASSWORD";
			this->textBox_PASSWORD->PasswordChar = '*';
			this->textBox_PASSWORD->Size = System::Drawing::Size(157, 20);
			this->textBox_PASSWORD->TabIndex = 14;
			// 
			// textBox_SMTP
			// 
			this->textBox_SMTP->Location = System::Drawing::Point(99, 198);
			this->textBox_SMTP->Name = L"textBox_SMTP";
			this->textBox_SMTP->ReadOnly = true;
			this->textBox_SMTP->Size = System::Drawing::Size(157, 20);
			this->textBox_SMTP->TabIndex = 17;
			this->textBox_SMTP->Text = L"smtp.gmail.com";
			this->textBox_SMTP->TextChanged += gcnew System::EventHandler(this, &Email::textBox_SMTP_TextChanged);
			// 
			// textBox_SUBJECT
			// 
			this->textBox_SUBJECT->Location = System::Drawing::Point(99, 172);
			this->textBox_SUBJECT->Name = L"textBox_SUBJECT";
			this->textBox_SUBJECT->Size = System::Drawing::Size(157, 20);
			this->textBox_SUBJECT->TabIndex = 16;
			// 
			// richTextBox_BODY
			// 
			this->richTextBox_BODY->Location = System::Drawing::Point(320, 59);
			this->richTextBox_BODY->Name = L"richTextBox_BODY";
			this->richTextBox_BODY->Size = System::Drawing::Size(543, 155);
			this->richTextBox_BODY->TabIndex = 18;
			this->richTextBox_BODY->Text = L"";
			this->richTextBox_BODY->TextChanged += gcnew System::EventHandler(this, &Email::richTextBox_BODY_TextChanged);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(320, 235);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Send Email";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Email::button1_Click);
			// 
			// Email
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(914, 286);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox_BODY);
			this->Controls->Add(this->textBox_SMTP);
			this->Controls->Add(this->textBox_SUBJECT);
			this->Controls->Add(this->textBox_TO);
			this->Controls->Add(this->textBox_PASSWORD);
			this->Controls->Add(this->textBox_FROM);
			this->Controls->Add(this->textBox_USERNAME);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Name = L"Email";
			this->Text = L"Email";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		MailMessage^ mail = gcnew MailMessage(textBox_FROM->Text, textBox_TO->Text, textBox_SUBJECT->Text, richTextBox_BODY->Text);

		SmtpClient^ client = gcnew SmtpClient(textBox_SMTP->Text);
		//port 587 is the preferred port for mail
		try
		{
			client->Port = 587;
			client->UseDefaultCredentials = false;
			client->Credentials = gcnew System::Net::NetworkCredential(textBox_USERNAME->Text, textBox_PASSWORD->Text);
			client->EnableSsl = true;
			client->Send(mail);
			MessageBox::Show("Mail Successfully Sent", "Success", MessageBoxButtons::OK);
			this->Hide();
		}
		catch (Exception ^ex)
		{
			MessageBox::Show(ex->Message);
		}
		


	}
	private: System::Void textBox_SMTP_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void richTextBox_BODY_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
