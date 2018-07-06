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
	/// Summary for updateAttendance
	/// </summary>
	public ref class updateAttendance : public System::Windows::Forms::Form
	{
	public:
		updateAttendance(void)
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
		~updateAttendance()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  DAY1;
	private: System::Windows::Forms::TextBox^  DAY2;
	protected:


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  DAY3;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  DAY4;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  DAY5;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  DAY6;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  DAY7;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  DAY8;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  DAY9;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  DAY10;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  DAY20;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  DAY19;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  DAY18;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  DAY17;

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  DAY16;

	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  DAY15;

	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  DAY14;

	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  DAY13;

	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  DAY12;

	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TextBox^  DAY11;

	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::TextBox^  DAY30;

	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::TextBox^  DAY29;

	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::TextBox^  DAY28;


	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  DAY27;


	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::TextBox^  DAY26;

	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::TextBox^  DAY25;

	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::TextBox^  DAY24;

	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::TextBox^  DAY23;

	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::TextBox^  DAY22;

	private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::TextBox^  DAY21;

	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  year_txt;
	private: System::Windows::Forms::TextBox^  month_txt;


	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::TextBox^  DAY31;
private: System::Windows::Forms::Button^  insert_btn;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->DAY1 = (gcnew System::Windows::Forms::TextBox());
			this->DAY2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->DAY3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->DAY4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->DAY5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->DAY6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->DAY7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->DAY8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->DAY9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->DAY10 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->DAY20 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->DAY19 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->DAY18 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->DAY17 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->DAY16 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->DAY15 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->DAY14 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->DAY13 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->DAY12 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->DAY11 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->DAY30 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->DAY29 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->DAY28 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->DAY27 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->DAY26 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->DAY25 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->DAY24 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->DAY23 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->DAY22 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->DAY21 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->year_txt = (gcnew System::Windows::Forms::TextBox());
			this->month_txt = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->DAY31 = (gcnew System::Windows::Forms::TextBox());
			this->insert_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(255, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 61;
			this->label1->Text = L"Day 1";
			// 
			// DAY1
			// 
			this->DAY1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DAY1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DAY1->Location = System::Drawing::Point(324, 21);
			this->DAY1->Name = L"DAY1";
			this->DAY1->Size = System::Drawing::Size(100, 20);
			this->DAY1->TabIndex = 62;
			this->DAY1->TextChanged += gcnew System::EventHandler(this, &updateAttendance::textBox1_TextChanged);
			// 
			// DAY2
			// 
			this->DAY2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DAY2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DAY2->Location = System::Drawing::Point(324, 47);
			this->DAY2->Name = L"DAY2";
			this->DAY2->Size = System::Drawing::Size(100, 20);
			this->DAY2->TabIndex = 64;
			this->DAY2->TextChanged += gcnew System::EventHandler(this, &updateAttendance::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(255, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 63;
			this->label2->Text = L"Day 2";
			// 
			// DAY3
			// 
			this->DAY3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DAY3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DAY3->Location = System::Drawing::Point(324, 73);
			this->DAY3->Name = L"DAY3";
			this->DAY3->Size = System::Drawing::Size(100, 20);
			this->DAY3->TabIndex = 66;
			this->DAY3->TextChanged += gcnew System::EventHandler(this, &updateAttendance::textBox3_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(255, 73);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 65;
			this->label3->Text = L"Day 3";
			// 
			// DAY4
			// 
			this->DAY4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DAY4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DAY4->Location = System::Drawing::Point(324, 99);
			this->DAY4->Name = L"DAY4";
			this->DAY4->Size = System::Drawing::Size(100, 20);
			this->DAY4->TabIndex = 68;
			this->DAY4->TextChanged += gcnew System::EventHandler(this, &updateAttendance::textBox4_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(255, 99);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 67;
			this->label4->Text = L"Day 4";
			// 
			// DAY5
			// 
			this->DAY5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DAY5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DAY5->Location = System::Drawing::Point(324, 125);
			this->DAY5->Name = L"DAY5";
			this->DAY5->Size = System::Drawing::Size(100, 20);
			this->DAY5->TabIndex = 70;
			this->DAY5->TextChanged += gcnew System::EventHandler(this, &updateAttendance::DAY5_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(255, 125);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 69;
			this->label5->Text = L"Day 5";
			// 
			// DAY6
			// 
			this->DAY6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DAY6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DAY6->Location = System::Drawing::Point(324, 151);
			this->DAY6->Name = L"DAY6";
			this->DAY6->Size = System::Drawing::Size(100, 20);
			this->DAY6->TabIndex = 72;
			this->DAY6->TextChanged += gcnew System::EventHandler(this, &updateAttendance::DAY6_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(255, 151);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 71;
			this->label6->Text = L"Day 6";
			// 
			// DAY7
			// 
			this->DAY7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DAY7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DAY7->Location = System::Drawing::Point(324, 177);
			this->DAY7->Name = L"DAY7";
			this->DAY7->Size = System::Drawing::Size(100, 20);
			this->DAY7->TabIndex = 74;
			this->DAY7->TextChanged += gcnew System::EventHandler(this, &updateAttendance::DAY7_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(255, 177);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 73;
			this->label7->Text = L"Day 7";
			// 
			// DAY8
			// 
			this->DAY8->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DAY8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DAY8->Location = System::Drawing::Point(324, 203);
			this->DAY8->Name = L"DAY8";
			this->DAY8->Size = System::Drawing::Size(100, 20);
			this->DAY8->TabIndex = 76;
			this->DAY8->TextChanged += gcnew System::EventHandler(this, &updateAttendance::DAY8_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(255, 203);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 75;
			this->label8->Text = L"Day 8";
			// 
			// DAY9
			// 
			this->DAY9->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DAY9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DAY9->Location = System::Drawing::Point(324, 229);
			this->DAY9->Name = L"DAY9";
			this->DAY9->Size = System::Drawing::Size(100, 20);
			this->DAY9->TabIndex = 78;
			this->DAY9->TextChanged += gcnew System::EventHandler(this, &updateAttendance::DAY9_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Location = System::Drawing::Point(255, 229);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 13);
			this->label9->TabIndex = 77;
			this->label9->Text = L"Day 9";
			// 
			// DAY10
			// 
			this->DAY10->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DAY10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DAY10->Location = System::Drawing::Point(324, 255);
			this->DAY10->Name = L"DAY10";
			this->DAY10->Size = System::Drawing::Size(100, 20);
			this->DAY10->TabIndex = 80;
			this->DAY10->TextChanged += gcnew System::EventHandler(this, &updateAttendance::DAY10_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Location = System::Drawing::Point(255, 255);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 13);
			this->label10->TabIndex = 79;
			this->label10->Text = L"Day 10";
			// 
			// DAY20
			// 
			this->DAY20->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DAY20->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DAY20->Location = System::Drawing::Point(573, 255);
			this->DAY20->Name = L"DAY20";
			this->DAY20->Size = System::Drawing::Size(100, 20);
			this->DAY20->TabIndex = 100;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label11->Location = System::Drawing::Point(504, 255);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 13);
			this->label11->TabIndex = 99;
			this->label11->Text = L"Day 20";
			// 
			// DAY19
			// 
			this->DAY19->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DAY19->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DAY19->Location = System::Drawing::Point(573, 229);
			this->DAY19->Name = L"DAY19";
			this->DAY19->Size = System::Drawing::Size(100, 20);
			this->DAY19->TabIndex = 98;
			this->DAY19->TextChanged += gcnew System::EventHandler(this, &updateAttendance::textBox12_TextChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label12->Location = System::Drawing::Point(504, 229);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 13);
			this->label12->TabIndex = 97;
			this->label12->Text = L"Day 19";
			// 
			// DAY18
			// 
			this->DAY18->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DAY18->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DAY18->Location = System::Drawing::Point(573, 203);
			this->DAY18->Name = L"DAY18";
			this->DAY18->Size = System::Drawing::Size(100, 20);
			this->DAY18->TabIndex = 96;
			this->DAY18->TextChanged += gcnew System::EventHandler(this, &updateAttendance::textBox13_TextChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label13->Location = System::Drawing::Point(504, 203);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(41, 13);
			this->label13->TabIndex = 95;
			this->label13->Text = L"Day 18";
			// 
			// DAY17
			// 
			this->DAY17->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DAY17->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DAY17->Location = System::Drawing::Point(573, 177);
			this->DAY17->Name = L"DAY17";
			this->DAY17->Size = System::Drawing::Size(100, 20);
			this->DAY17->TabIndex = 94;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label14->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label14->Location = System::Drawing::Point(504, 177);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(41, 13);
			this->label14->TabIndex = 93;
			this->label14->Text = L"Day 17";
			this->label14->Click += gcnew System::EventHandler(this, &updateAttendance::label14_Click);
			// 
			// DAY16
			// 
			this->DAY16->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DAY16->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DAY16->Location = System::Drawing::Point(573, 151);
			this->DAY16->Name = L"DAY16";
			this->DAY16->Size = System::Drawing::Size(100, 20);
			this->DAY16->TabIndex = 92;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label15->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label15->Location = System::Drawing::Point(504, 151);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(41, 13);
			this->label15->TabIndex = 91;
			this->label15->Text = L"Day 16";
			// 
			// DAY15
			// 
			this->DAY15->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DAY15->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DAY15->Location = System::Drawing::Point(573, 125);
			this->DAY15->Name = L"DAY15";
			this->DAY15->Size = System::Drawing::Size(100, 20);
			this->DAY15->TabIndex = 90;
			this->DAY15->TextChanged += gcnew System::EventHandler(this, &updateAttendance::textBox16_TextChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label16->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label16->Location = System::Drawing::Point(504, 125);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(41, 13);
			this->label16->TabIndex = 89;
			this->label16->Text = L"Day 15";
			// 
			// DAY14
			// 
			this->DAY14->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DAY14->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DAY14->Location = System::Drawing::Point(573, 99);
			this->DAY14->Name = L"DAY14";
			this->DAY14->Size = System::Drawing::Size(100, 20);
			this->DAY14->TabIndex = 88;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label17->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label17->Location = System::Drawing::Point(504, 99);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(41, 13);
			this->label17->TabIndex = 87;
			this->label17->Text = L"Day 14";
			// 
			// DAY13
			// 
			this->DAY13->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DAY13->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DAY13->Location = System::Drawing::Point(573, 73);
			this->DAY13->Name = L"DAY13";
			this->DAY13->Size = System::Drawing::Size(100, 20);
			this->DAY13->TabIndex = 86;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label18->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label18->Location = System::Drawing::Point(504, 73);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(41, 13);
			this->label18->TabIndex = 85;
			this->label18->Text = L"Day 13";
			// 
			// DAY12
			// 
			this->DAY12->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DAY12->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DAY12->Location = System::Drawing::Point(573, 47);
			this->DAY12->Name = L"DAY12";
			this->DAY12->Size = System::Drawing::Size(100, 20);
			this->DAY12->TabIndex = 84;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label19->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label19->Location = System::Drawing::Point(504, 47);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(41, 13);
			this->label19->TabIndex = 83;
			this->label19->Text = L"Day 12";
			// 
			// DAY11
			// 
			this->DAY11->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DAY11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DAY11->Location = System::Drawing::Point(573, 21);
			this->DAY11->Name = L"DAY11";
			this->DAY11->Size = System::Drawing::Size(100, 20);
			this->DAY11->TabIndex = 82;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label20->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label20->Location = System::Drawing::Point(504, 21);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(41, 13);
			this->label20->TabIndex = 81;
			this->label20->Text = L"Day 11";
			// 
			// DAY30
			// 
			this->DAY30->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DAY30->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DAY30->Location = System::Drawing::Point(805, 255);
			this->DAY30->Name = L"DAY30";
			this->DAY30->Size = System::Drawing::Size(100, 20);
			this->DAY30->TabIndex = 120;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label21->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label21->Location = System::Drawing::Point(736, 255);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(41, 13);
			this->label21->TabIndex = 119;
			this->label21->Text = L"Day 30";
			// 
			// DAY29
			// 
			this->DAY29->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DAY29->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DAY29->Location = System::Drawing::Point(805, 229);
			this->DAY29->Name = L"DAY29";
			this->DAY29->Size = System::Drawing::Size(100, 20);
			this->DAY29->TabIndex = 118;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label22->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label22->Location = System::Drawing::Point(736, 229);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(41, 13);
			this->label22->TabIndex = 117;
			this->label22->Text = L"Day 29";
			// 
			// DAY28
			// 
			this->DAY28->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DAY28->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DAY28->Location = System::Drawing::Point(805, 203);
			this->DAY28->Name = L"DAY28";
			this->DAY28->Size = System::Drawing::Size(100, 20);
			this->DAY28->TabIndex = 116;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label23->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label23->Location = System::Drawing::Point(736, 203);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(41, 13);
			this->label23->TabIndex = 115;
			this->label23->Text = L"Day 28";
			// 
			// DAY27
			// 
			this->DAY27->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DAY27->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DAY27->Location = System::Drawing::Point(805, 177);
			this->DAY27->Name = L"DAY27";
			this->DAY27->Size = System::Drawing::Size(100, 20);
			this->DAY27->TabIndex = 114;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label24->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label24->Location = System::Drawing::Point(736, 177);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(41, 13);
			this->label24->TabIndex = 113;
			this->label24->Text = L"Day 27";
			// 
			// DAY26
			// 
			this->DAY26->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DAY26->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DAY26->Location = System::Drawing::Point(805, 151);
			this->DAY26->Name = L"DAY26";
			this->DAY26->Size = System::Drawing::Size(100, 20);
			this->DAY26->TabIndex = 112;
			this->DAY26->TextChanged += gcnew System::EventHandler(this, &updateAttendance::textBox25_TextChanged);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label25->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label25->Location = System::Drawing::Point(736, 151);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(41, 13);
			this->label25->TabIndex = 111;
			this->label25->Text = L"Day 26";
			// 
			// DAY25
			// 
			this->DAY25->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DAY25->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DAY25->Location = System::Drawing::Point(805, 125);
			this->DAY25->Name = L"DAY25";
			this->DAY25->Size = System::Drawing::Size(100, 20);
			this->DAY25->TabIndex = 110;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label26->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label26->Location = System::Drawing::Point(736, 125);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(41, 13);
			this->label26->TabIndex = 109;
			this->label26->Text = L"Day 25";
			// 
			// DAY24
			// 
			this->DAY24->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DAY24->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DAY24->Location = System::Drawing::Point(805, 99);
			this->DAY24->Name = L"DAY24";
			this->DAY24->Size = System::Drawing::Size(100, 20);
			this->DAY24->TabIndex = 108;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label27->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label27->Location = System::Drawing::Point(736, 99);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(41, 13);
			this->label27->TabIndex = 107;
			this->label27->Text = L"Day 24";
			// 
			// DAY23
			// 
			this->DAY23->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DAY23->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DAY23->Location = System::Drawing::Point(805, 73);
			this->DAY23->Name = L"DAY23";
			this->DAY23->Size = System::Drawing::Size(100, 20);
			this->DAY23->TabIndex = 106;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label28->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label28->Location = System::Drawing::Point(736, 73);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(41, 13);
			this->label28->TabIndex = 105;
			this->label28->Text = L"Day 23";
			// 
			// DAY22
			// 
			this->DAY22->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DAY22->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DAY22->Location = System::Drawing::Point(805, 47);
			this->DAY22->Name = L"DAY22";
			this->DAY22->Size = System::Drawing::Size(100, 20);
			this->DAY22->TabIndex = 104;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label29->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label29->Location = System::Drawing::Point(736, 47);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(41, 13);
			this->label29->TabIndex = 103;
			this->label29->Text = L"Day 22";
			// 
			// DAY21
			// 
			this->DAY21->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DAY21->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DAY21->Location = System::Drawing::Point(805, 21);
			this->DAY21->Name = L"DAY21";
			this->DAY21->Size = System::Drawing::Size(100, 20);
			this->DAY21->TabIndex = 102;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label30->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label30->Location = System::Drawing::Point(736, 21);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(41, 13);
			this->label30->TabIndex = 101;
			this->label30->Text = L"Day 21";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label31->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label31->Location = System::Drawing::Point(15, 249);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(105, 13);
			this->label31->TabIndex = 121;
			this->label31->Text = L"* Write P for present ";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label32->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label32->Location = System::Drawing::Point(25, 262);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(85, 13);
			this->label32->TabIndex = 122;
			this->label32->Text = L"and A for absent";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->comboBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(78, 44);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 123;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &updateAttendance::comboBox1_SelectedIndexChanged);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label33->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label33->Location = System::Drawing::Point(12, 47);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(51, 13);
			this->label33->TabIndex = 124;
			this->label33->Text = L"Select ID";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(115, 219);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 125;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &updateAttendance::button1_Click);
			// 
			// year_txt
			// 
			this->year_txt->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->year_txt->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->year_txt->Location = System::Drawing::Point(78, 138);
			this->year_txt->Name = L"year_txt";
			this->year_txt->Size = System::Drawing::Size(100, 20);
			this->year_txt->TabIndex = 126;
			this->year_txt->TextChanged += gcnew System::EventHandler(this, &updateAttendance::textBox31_TextChanged);
			// 
			// month_txt
			// 
			this->month_txt->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->month_txt->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->month_txt->Location = System::Drawing::Point(78, 169);
			this->month_txt->Name = L"month_txt";
			this->month_txt->Size = System::Drawing::Size(100, 20);
			this->month_txt->TabIndex = 127;
			this->month_txt->TextChanged += gcnew System::EventHandler(this, &updateAttendance::textBox32_TextChanged);
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label34->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label34->Location = System::Drawing::Point(12, 145);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(29, 13);
			this->label34->TabIndex = 128;
			this->label34->Text = L"Year";
			this->label34->Click += gcnew System::EventHandler(this, &updateAttendance::label34_Click);
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label35->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label35->Location = System::Drawing::Point(13, 177);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(37, 13);
			this->label35->TabIndex = 129;
			this->label35->Text = L"Month";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label36->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label36->Location = System::Drawing::Point(927, 21);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(44, 13);
			this->label36->TabIndex = 130;
			this->label36->Text = L"DAY 31";
			// 
			// DAY31
			// 
			this->DAY31->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DAY31->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DAY31->Location = System::Drawing::Point(998, 20);
			this->DAY31->Name = L"DAY31";
			this->DAY31->Size = System::Drawing::Size(100, 20);
			this->DAY31->TabIndex = 131;
			// 
			// insert_btn
			// 
			this->insert_btn->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->insert_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->insert_btn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->insert_btn->Location = System::Drawing::Point(28, 218);
			this->insert_btn->Name = L"insert_btn";
			this->insert_btn->Size = System::Drawing::Size(75, 23);
			this->insert_btn->TabIndex = 132;
			this->insert_btn->Text = L"Insert";
			this->insert_btn->UseVisualStyleBackColor = false;
			this->insert_btn->Click += gcnew System::EventHandler(this, &updateAttendance::insert_btn_Click);
			// 
			// updateAttendance
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1121, 289);
			this->Controls->Add(this->insert_btn);
			this->Controls->Add(this->DAY31);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->month_txt);
			this->Controls->Add(this->year_txt);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->DAY30);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->DAY29);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->DAY28);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->DAY27);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->DAY26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->DAY25);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->DAY24);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->DAY23);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->DAY22);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->DAY21);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->DAY20);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->DAY19);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->DAY18);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->DAY17);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->DAY16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->DAY15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->DAY14);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->DAY13);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->DAY12);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->DAY11);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->DAY10);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->DAY9);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->DAY8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->DAY7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->DAY6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->DAY5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->DAY4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->DAY3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->DAY2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->DAY1);
			this->Controls->Add(this->label1);
			this->Name = L"updateAttendance";
			this->Text = L"updateAttendance";
			this->Load += gcnew System::EventHandler(this, &updateAttendance::updateAttendance_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

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



	private: System::Void updateAttendance_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

		String^ comboval = comboBox1->Text;

		String^ constring = L"datasource=localhost;port=3306;username=root;password=1965";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from adminlog.attendance where idStudent='" + comboval + "';", conDataBase);
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
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {


		String^ comboval = comboBox1->Text;
		String^ constring = L"datasource=localhost;port=3306;username=root;password=1965";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand ^ cmdDataBase = gcnew MySqlCommand("update adminlog.attendance set idStudent='" + comboval + "',year='" + this->year_txt->Text + "',month='"+this->month_txt->Text+"',Day1='"+this->DAY1->Text+"',Day2='"+this->DAY2->Text+"',Day3='"+this->DAY3->Text+"',Day4='"+this->DAY4->Text+"',Day5='"+this->DAY5->Text+"',Day6='"+this->DAY6->Text+"',Day7='"+this->DAY7->Text+"',Day8='"+this->DAY8->Text+"',Day9='"+this->DAY9->Text+"',Day10='"+this->DAY10->Text+"',Day11='"+this->DAY11->Text+"',Day12='"+this->DAY12->Text+"',Day13='"+this->DAY13->Text+"',Day14='"+this->DAY14->Text+"',Day15='"+this->DAY15->Text+"',Day16='"+this->DAY16->Text+"',Day17='"+this->DAY17->Text+"',Day18='"+this->DAY18->Text+"',Day19='"+this->DAY19->Text+"',Day20='"+this->DAY20->Text+"',Day21='"+this->DAY21->Text+"',Day22='"+this->DAY22->Text+"',Day23='"+this->DAY23->Text+"',Day24='"+this->DAY24->Text+"',Day25='"+this->DAY25->Text+"',Day26='"+this->DAY26->Text+"',Day27='"+this->DAY27->Text+"',Day28='"+this->DAY28->Text+"',Day29='"+this->DAY29->Text+"',Day30='"+this->DAY30->Text+"',DAY31='"+this->DAY31->Text+"';", conDataBase);


		MySqlDataReader^ myReader;
		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show("Successfully updated");

			while (myReader->Read()) {

			}


		}
		catch (Exception^ex) {

			MessageBox::Show(ex->Message);
		}



	}
	private: System::Void label14_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox13_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox12_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox31_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label34_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox32_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox25_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox16_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void insert_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ comboval = comboBox1->Text;
	String^ constring = L"datasource=localhost;port=3306;username=root;password=1965";// this will connect to database
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into adminlog.attendance (idStudent,year,month,Day1,Day2,Day3,Day4,Day5,Day6,Day7,Day8,Day9,Day10,Day11,Day12,Day13,Day14,Day15,Day16,Day17,Day18,Day19,Day20,Day21,Day22,Day23,Day24,Day25,Day26,Day27,Day28,Day29,Day30,Day31) values('"+comboval+"','"+this->year_txt->Text+"','"+this->month_txt->Text+"','"+this->DAY1->Text+"','"+this->DAY2->Text+"','"+this->DAY3->Text+"','"+this->DAY4->Text+"','"+this->DAY5->Text+"','"+this->DAY6->Text+"','"+this->DAY7->Text+"','"+this->DAY8->Text+"','"+this->DAY9->Text+"','"+this->DAY10->Text+"','"+this->DAY11->Text+"','"+this->DAY12->Text+"','"+this->DAY13->Text+"','"+this->DAY14->Text+"','"+this->DAY15->Text+"','"+this->DAY16->Text+"','"+this->DAY17->Text+"','"+this->DAY18->Text+"','"+this->DAY19->Text+"','"+this->DAY20->Text+"','"+this->DAY21->Text+"','"+this->DAY22->Text+"','"+this->DAY23->Text+"','"+this->DAY24->Text+"','"+this->DAY25->Text+"','"+this->DAY26->Text+"','"+this->DAY27->Text+"','"+this->DAY28->Text+"','"+this->DAY29->Text+"','"+this->DAY30->Text+"','"+this->DAY31->Text+"') ;",conDataBase);// semi colomn is used to close querry
	//MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from adminlog.attendance where idStudent='" + comboval + "';", conDataBase);// semi colomn is used to close querry


	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Successfully inserted");

		while (myReader->Read()) {

		}


	}
	catch (Exception^ex) {

		MessageBox::Show(ex->Message);
	}

}
private: System::Void DAY10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void DAY9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void DAY8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void DAY7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void DAY6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void DAY5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
