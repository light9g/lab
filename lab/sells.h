#pragma once

namespace lab {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� sells
	/// </summary>
	public ref class sells : public System::Windows::Forms::Form
	{
	public:
		sells(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~sells()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ f1ToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;




	private: System::Windows::Forms::Button^ button1;








	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ button7;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;





	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Description;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ all;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fio;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private: System::Windows::Forms::PictureBox^ pictureBox3;









	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(sells::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->f1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->CName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Description = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->all = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel7->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel9->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->����ToolStripMenuItem,
					this->�����������ToolStripMenuItem, this->���ToolStripMenuItem, this->����ToolStripMenuItem, this->�������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1262, 28);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->���������ToolStripMenuItem,
					this->�������ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(166, 26);
			this->���������ToolStripMenuItem->Text = L"���������";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(166, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����������1ToolStripMenuItem,
					this->����������2ToolStripMenuItem
			});
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(117, 24);
			this->�����������ToolStripMenuItem->Text = L"�����������";
			// 
			// ����������1ToolStripMenuItem
			// 
			this->����������1ToolStripMenuItem->Name = L"����������1ToolStripMenuItem";
			this->����������1ToolStripMenuItem->Size = System::Drawing::Size(183, 26);
			this->����������1ToolStripMenuItem->Text = L"����������1";
			// 
			// ����������2ToolStripMenuItem
			// 
			this->����������2ToolStripMenuItem->Name = L"����������2ToolStripMenuItem";
			this->����������2ToolStripMenuItem->Size = System::Drawing::Size(183, 26);
			this->����������2ToolStripMenuItem->Text = L"����������2";
			// 
			// ���ToolStripMenuItem
			// 
			this->���ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�������ToolStripMenuItem,
					this->����������������ToolStripMenuItem
			});
			this->���ToolStripMenuItem->Name = L"���ToolStripMenuItem";
			this->���ToolStripMenuItem->Size = System::Drawing::Size(49, 24);
			this->���ToolStripMenuItem->Text = L"���";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(244, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// ����������������ToolStripMenuItem
			// 
			this->����������������ToolStripMenuItem->Name = L"����������������ToolStripMenuItem";
			this->����������������ToolStripMenuItem->Size = System::Drawing::Size(244, 26);
			this->����������������ToolStripMenuItem->Text = L"�������� � �������";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->��������ToolStripMenuItem,
					this->���������ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(58, 24);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(166, 26);
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(166, 26);
			this->���������ToolStripMenuItem->Text = L"���������";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->������ToolStripMenuItem,
					this->f1ToolStripMenuItem
			});
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(81, 24);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->������ToolStripMenuItem->Text = L"������ ";
			// 
			// f1ToolStripMenuItem
			// 
			this->f1ToolStripMenuItem->Name = L"f1ToolStripMenuItem";
			this->f1ToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->f1ToolStripMenuItem->Text = L"F1";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 28);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1262, 43);
			this->panel2->TabIndex = 4;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(288, 4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(25, 34);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 14;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(150, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(25, 34);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(11, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(25, 34);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 12;
			this->pictureBox2->TabStop = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button6->Location = System::Drawing::Point(1041, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(101, 34);
			this->button6->TabIndex = 11;
			this->button6->Text = L"�����";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button5->Location = System::Drawing::Point(1148, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(101, 34);
			this->button5->TabIndex = 10;
			this->button5->Text = L"������";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button3->Location = System::Drawing::Point(319, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 34);
			this->button3->TabIndex = 8;
			this->button3->Text = L"������";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button2->Location = System::Drawing::Point(181, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 34);
			this->button2->TabIndex = 7;
			this->button2->Text = L"�����";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button1->Location = System::Drawing::Point(43, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 34);
			this->button1->TabIndex = 3;
			this->button1->Text = L"��������� ";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->button11);
			this->panel7->Controls->Add(this->button10);
			this->panel7->Controls->Add(this->button9);
			this->panel7->Controls->Add(this->button8);
			this->panel7->Location = System::Drawing::Point(12, 77);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(280, 248);
			this->panel7->TabIndex = 5;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button11->Location = System::Drawing::Point(3, 187);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(271, 56);
			this->button11->TabIndex = 3;
			this->button11->Text = L"�������";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &sells::button11_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button10->Location = System::Drawing::Point(3, 125);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(271, 56);
			this->button10->TabIndex = 2;
			this->button10->Text = L"������ ������";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &sells::button10_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button9->Location = System::Drawing::Point(4, 63);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(271, 56);
			this->button9->TabIndex = 1;
			this->button9->Text = L"���������";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &sells::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button8->Location = System::Drawing::Point(4, 4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(271, 56);
			this->button8->TabIndex = 0;
			this->button8->Text = L"������";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &sells::button8_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::Control;
			this->panel3->Controls->Add(this->label4);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel3->Location = System::Drawing::Point(0, 944);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1262, 33);
			this->panel3->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(16, 7);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(160, 20);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Press F1 to get help";
			// 
			// panel5
			// 
			this->panel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->textBox1);
			this->panel5->Controls->Add(this->button7);
			this->panel5->Controls->Add(this->label1);
			this->panel5->Location = System::Drawing::Point(298, 77);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(948, 61);
			this->panel5->TabIndex = 9;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(150, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(258, 22);
			this->textBox1->TabIndex = 13;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button7->Location = System::Drawing::Point(414, 14);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(101, 34);
			this->button7->TabIndex = 12;
			this->button7->Text = L"�����";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"����� �� ��������";
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Location = System::Drawing::Point(298, 144);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(948, 668);
			this->panel1->TabIndex = 10;
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->CName,
					this->Date, this->Description, this->all, this->fio
			});
			this->dataGridView1->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->Location = System::Drawing::Point(3, 71);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(942, 592);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &sells::dataGridView1_CellContentClick);
			// 
			// CName
			// 
			this->CName->Frozen = true;
			this->CName->HeaderText = L"����� �������";
			this->CName->MinimumWidth = 6;
			this->CName->Name = L"CName";
			this->CName->Width = 120;
			// 
			// Date
			// 
			this->Date->Frozen = true;
			this->Date->HeaderText = L"�������� ������";
			this->Date->MinimumWidth = 6;
			this->Date->Name = L"Date";
			this->Date->Width = 165;
			// 
			// Description
			// 
			this->Description->Frozen = true;
			this->Description->HeaderText = L"��������� �� �������";
			this->Description->MinimumWidth = 6;
			this->Description->Name = L"Description";
			this->Description->ReadOnly = true;
			this->Description->Width = 110;
			// 
			// all
			// 
			this->all->HeaderText = L"����� ���������";
			this->all->MinimumWidth = 6;
			this->all->Name = L"all";
			this->all->Width = 120;
			// 
			// fio
			// 
			this->fio->HeaderText = L"��� ���������";
			this->fio->MinimumWidth = 6;
			this->fio->Name = L"fio";
			this->fio->Width = 125;
			// 
			// panel4
			// 
			this->panel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel4->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panel4->Controls->Add(this->label2);
			this->panel4->Location = System::Drawing::Point(3, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(942, 62);
			this->panel4->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(3, 11);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(215, 38);
			this->label2->TabIndex = 0;
			this->label2->Text = L"��� �������";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->button12);
			this->panel6->Controls->Add(this->monthCalendar1);
			this->panel6->Controls->Add(this->panel9);
			this->panel6->Location = System::Drawing::Point(13, 331);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(279, 413);
			this->panel6->TabIndex = 11;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button12->Location = System::Drawing::Point(6, 337);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(191, 64);
			this->button12->TabIndex = 8;
			this->button12->Text = L"���������";
			this->button12->UseVisualStyleBackColor = false;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(5, 77);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 1;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panel9->Controls->Add(this->label3);
			this->panel9->Location = System::Drawing::Point(3, 3);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(270, 62);
			this->panel9->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(3, 11);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 38);
			this->label3->TabIndex = 0;
			this->label3->Text = L"����";
			// 
			// sells
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(1262, 977);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"sells";
			this->Text = L"sells";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &sells::sells_FormClosed);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	this->Owner->OwnedForms[2]->Show();
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	this->Owner->Show();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	this->Owner->OwnedForms[0]->Show();
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	this->Owner->OwnedForms[1]->Show();
}
private: System::Void sells_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	Application::Exit();
}
};
}
