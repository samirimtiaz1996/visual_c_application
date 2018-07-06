#pragma once
//#include "stdafx.h"
#include "Form1.h"
#include "TeacherLogin.h"
#include "StudentLogin.h"
namespace Project21 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StartingForm
	/// </summary>
	public ref class StartingForm : public System::Windows::Forms::Form
	{
	public:
		StartingForm(void)
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
		~StartingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button4;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->ForeColor = System::Drawing::Color::Cornsilk;
			this->button1->Location = System::Drawing::Point(427, 76);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(286, 72);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ADMIN LOGIN";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &StartingForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->ForeColor = System::Drawing::Color::Cornsilk;
			this->button2->Location = System::Drawing::Point(427, 154);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(286, 72);
			this->button2->TabIndex = 1;
			this->button2->Text = L"TEACHER LOGIN";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &StartingForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Black;
			this->button3->ForeColor = System::Drawing::Color::Cornsilk;
			this->button3->Location = System::Drawing::Point(427, 235);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(286, 72);
			this->button3->TabIndex = 2;
			this->button3->Text = L"STUDENT LOGIN";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &StartingForm::button3_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Ravie", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Underline | System::Drawing::FontStyle::Strikeout)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkCyan;
			this->label1->Location = System::Drawing::Point(0, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(319, 164);
			this->label1->TabIndex = 3;
			this->label1->Click += gcnew System::EventHandler(this, &StartingForm::label1_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(542, 349);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Exit";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &StartingForm::button4_Click);
			// 
			// StartingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1354, 733);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->HelpButton = true;
			this->Name = L"StartingForm";
			this->Text = L"StartingForm";
			this->Load += gcnew System::EventHandler(this, &StartingForm::StartingForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void StartingForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Form1^ F1 = gcnew Form1();
		F1->ShowDialog();
		this->Show();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		TeacherLogin^ TL = gcnew TeacherLogin();
		TL->ShowDialog();
		this->Show();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		StudentLogin^SL1 = gcnew StudentLogin();
		SL1->ShowDialog();
		this->Show();

	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
