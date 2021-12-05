#pragma once
#include "workers.h"
#include "graphic.h"
#include "sells.h"
#include "calculate.h"
#include <vector>
#include <string>


namespace lab {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Ñâîäêà äëÿ form1
	/// </summary>
	
	public ref class form1 : public System::Windows::Forms::Form
	{
	public:
		form1(void)
		{
			InitializeComponent();

			wrk = gcnew workers();
			wrk->Owner = this;
			wrk->Hide();
			

			grp1 = gcnew graphic();
			grp1->Owner = this;
			grp1->Hide();
		
	
			sel = gcnew sells();
			sel->Owner = this;
			sel->Hide();
	
	
			calc = gcnew calculate();
			calc->Owner = this;
			calc->Hide();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
			
		}
	public: workers^ wrk;
	private: graphic^ grp1;
	private: sells^ sel;
	private: calculate^ calc;
	private: System::Windows::Forms::TextBox^ textBox1;
	public:
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button14;
		   int n = 0;

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ óäàëèòüToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ èíñòğóìåíòûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ èíñòğóìåíò1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ èíñòğóìåíò2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âèäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ìàñøòàáToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îòğêğûòüÑÏîìîùüşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îêíàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğîäóêòûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğàáîòíèêèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñïğàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîìîùüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ f1ToolStripMenuItem;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;






	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox8;

	private: System::Windows::Forms::PictureBox^ pictureBox6;

	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label2;




	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Description;

	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button15;

	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ îòêğûòüToolStripMenuItem;




















	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(form1::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->óäàëèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îòêğûòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èíñòğóìåíòûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èíñòğóìåíò1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èíñòğóìåíò2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ìàñøòàáToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îòğêğûòüÑÏîìîùüşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îêíàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğîäóêòûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğàáîòíèêèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîìîùüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->f1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->CName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Description = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->panel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel9->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panel1->Controls->Add(this->menuStrip1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1262, 28);
			this->panel1->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->ôàéëToolStripMenuItem,
					this->èíñòğóìåíòûToolStripMenuItem, this->âèäToolStripMenuItem, this->îêíàToolStripMenuItem, this->ñïğàâêàToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1262, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ñîõğàíèòüToolStripMenuItem,
					this->óäàëèòüToolStripMenuItem, this->îòêğûòüToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// ñîõğàíèòüToolStripMenuItem
			// 
			this->ñîõğàíèòüToolStripMenuItem->Name = L"ñîõğàíèòüToolStripMenuItem";
			this->ñîõğàíèòüToolStripMenuItem->Size = System::Drawing::Size(166, 26);
			this->ñîõğàíèòüToolStripMenuItem->Text = L"Ñîõğàíèòü";
			// 
			// óäàëèòüToolStripMenuItem
			// 
			this->óäàëèòüToolStripMenuItem->Name = L"óäàëèòüToolStripMenuItem";
			this->óäàëèòüToolStripMenuItem->Size = System::Drawing::Size(166, 26);
			this->óäàëèòüToolStripMenuItem->Text = L"Óäàëèòü";
			// 
			// îòêğûòüToolStripMenuItem
			// 
			this->îòêğûòüToolStripMenuItem->Name = L"îòêğûòüToolStripMenuItem";
			this->îòêğûòüToolStripMenuItem->Size = System::Drawing::Size(166, 26);
			this->îòêğûòüToolStripMenuItem->Text = L"Îòêğûòü";
			this->îòêğûòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &form1::îòêğûòüToolStripMenuItem_Click);
			// 
			// èíñòğóìåíòûToolStripMenuItem
			// 
			this->èíñòğóìåíòûToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->èíñòğóìåíò1ToolStripMenuItem,
					this->èíñòğóìåíò2ToolStripMenuItem
			});
			this->èíñòğóìåíòûToolStripMenuItem->Name = L"èíñòğóìåíòûToolStripMenuItem";
			this->èíñòğóìåíòûToolStripMenuItem->Size = System::Drawing::Size(117, 24);
			this->èíñòğóìåíòûToolStripMenuItem->Text = L"Èíñòğóìåíòû";
			this->èíñòğóìåíòûToolStripMenuItem->Click += gcnew System::EventHandler(this, &form1::èíñòğóìåíòûToolStripMenuItem_Click);
			// 
			// èíñòğóìåíò1ToolStripMenuItem
			// 
			this->èíñòğóìåíò1ToolStripMenuItem->Name = L"èíñòğóìåíò1ToolStripMenuItem";
			this->èíñòğóìåíò1ToolStripMenuItem->Size = System::Drawing::Size(183, 26);
			this->èíñòğóìåíò1ToolStripMenuItem->Text = L"Èíñòğóìåíò1";
			// 
			// èíñòğóìåíò2ToolStripMenuItem
			// 
			this->èíñòğóìåíò2ToolStripMenuItem->Name = L"èíñòğóìåíò2ToolStripMenuItem";
			this->èíñòğóìåíò2ToolStripMenuItem->Size = System::Drawing::Size(183, 26);
			this->èíñòğóìåíò2ToolStripMenuItem->Text = L"Èíñòğóìåíò2";
			// 
			// âèäToolStripMenuItem
			// 
			this->âèäToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ìàñøòàáToolStripMenuItem,
					this->îòğêğûòüÑÏîìîùüşToolStripMenuItem
			});
			this->âèäToolStripMenuItem->Name = L"âèäToolStripMenuItem";
			this->âèäToolStripMenuItem->Size = System::Drawing::Size(49, 24);
			this->âèäToolStripMenuItem->Text = L"Âèä";
			// 
			// ìàñøòàáToolStripMenuItem
			// 
			this->ìàñøòàáToolStripMenuItem->Name = L"ìàñøòàáToolStripMenuItem";
			this->ìàñøòàáToolStripMenuItem->Size = System::Drawing::Size(244, 26);
			this->ìàñøòàáToolStripMenuItem->Text = L"Ìàñøòàá";
			// 
			// îòğêğûòüÑÏîìîùüşToolStripMenuItem
			// 
			this->îòğêğûòüÑÏîìîùüşToolStripMenuItem->Name = L"îòğêğûòüÑÏîìîùüşToolStripMenuItem";
			this->îòğêğûòüÑÏîìîùüşToolStripMenuItem->Size = System::Drawing::Size(244, 26);
			this->îòğêğûòüÑÏîìîùüşToolStripMenuItem->Text = L"Îòğêğûòü ñ ïîìîùüş";
			// 
			// îêíàToolStripMenuItem
			// 
			this->îêíàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ïğîäóêòûToolStripMenuItem,
					this->ğàáîòíèêèToolStripMenuItem
			});
			this->îêíàToolStripMenuItem->Name = L"îêíàToolStripMenuItem";
			this->îêíàToolStripMenuItem->Size = System::Drawing::Size(58, 24);
			this->îêíàToolStripMenuItem->Text = L"Îêíà";
			// 
			// ïğîäóêòûToolStripMenuItem
			// 
			this->ïğîäóêòûToolStripMenuItem->Name = L"ïğîäóêòûToolStripMenuItem";
			this->ïğîäóêòûToolStripMenuItem->Size = System::Drawing::Size(166, 26);
			this->ïğîäóêòûToolStripMenuItem->Text = L"Ïğîäóêòû";
			// 
			// ğàáîòíèêèToolStripMenuItem
			// 
			this->ğàáîòíèêèToolStripMenuItem->Name = L"ğàáîòíèêèToolStripMenuItem";
			this->ğàáîòíèêèToolStripMenuItem->Size = System::Drawing::Size(166, 26);
			this->ğàáîòíèêèToolStripMenuItem->Text = L"Ğàáîòíèêè";
			// 
			// ñïğàâêàToolStripMenuItem
			// 
			this->ñïğàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ïîìîùüToolStripMenuItem,
					this->f1ToolStripMenuItem
			});
			this->ñïğàâêàToolStripMenuItem->Name = L"ñïğàâêàToolStripMenuItem";
			this->ñïğàâêàToolStripMenuItem->Size = System::Drawing::Size(81, 24);
			this->ñïğàâêàToolStripMenuItem->Text = L"Ñïğàâêà";
			// 
			// ïîìîùüToolStripMenuItem
			// 
			this->ïîìîùüToolStripMenuItem->Name = L"ïîìîùüToolStripMenuItem";
			this->ïîìîùüToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->ïîìîùüToolStripMenuItem->Text = L"Ïîìîùü ";
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
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->pictureBox8);
			this->panel2->Controls->Add(this->pictureBox6);
			this->panel2->Controls->Add(this->pictureBox4);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 28);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1262, 43);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &form1::panel2_Paint);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button4->Location = System::Drawing::Point(824, 5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(101, 34);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Íàéòè";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &form1::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(595, 10);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(223, 22);
			this->textBox1->TabIndex = 13;
			this->textBox1->Visible = false;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &form1::textBox1_TextChanged);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button6->Location = System::Drawing::Point(595, 5);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(101, 34);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Ïîèñê";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &form1::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button5->Location = System::Drawing::Point(457, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(101, 34);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Ïîìîùü";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &form1::button5_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button3->Location = System::Drawing::Point(319, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 34);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Âïåğåä";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &form1::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button2->Location = System::Drawing::Point(181, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 34);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Íàçàä";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &form1::button2_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(564, 9);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(25, 28);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 6;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(426, 6);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(25, 28);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 4;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(288, 5);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(25, 28);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 4;
			this->pictureBox4->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button1->Location = System::Drawing::Point(43, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 34);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Îòêğûòü";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &form1::button1_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(150, 6);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(25, 28);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(12, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(25, 34);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::Control;
			this->panel3->Controls->Add(this->label4);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel3->Location = System::Drawing::Point(0, 944);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1262, 33);
			this->panel3->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(16, 7);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(200, 20);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Welcome to product page";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->panel8);
			this->panel4->Controls->Add(this->panel7);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel4->Location = System::Drawing::Point(0, 71);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(303, 873);
			this->panel4->TabIndex = 3;
			// 
			// panel8
			// 
			this->panel8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel8->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Controls->Add(this->button14);
			this->panel8->Controls->Add(this->button7);
			this->panel8->Controls->Add(this->label8);
			this->panel8->Controls->Add(this->button15);
			this->panel8->Controls->Add(this->label7);
			this->panel8->Controls->Add(this->button13);
			this->panel8->Controls->Add(this->label6);
			this->panel8->Controls->Add(this->button12);
			this->panel8->Controls->Add(this->textBox4);
			this->panel8->Controls->Add(this->label2);
			this->panel8->Controls->Add(this->radioButton1);
			this->panel8->Controls->Add(this->label5);
			this->panel8->Controls->Add(this->radioButton2);
			this->panel8->Controls->Add(this->textBox3);
			this->panel8->Controls->Add(this->radioButton3);
			this->panel8->Controls->Add(this->textBox2);
			this->panel8->Location = System::Drawing::Point(13, 266);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(280, 601);
			this->panel8->TabIndex = 0;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button14->Location = System::Drawing::Point(8, 312);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(185, 34);
			this->button14->TabIndex = 11;
			this->button14->Text = L"Ğåäàêòèğîâàòü";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Visible = false;
			this->button14->Click += gcnew System::EventHandler(this, &form1::button14_Click_1);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button7->Location = System::Drawing::Point(6, 312);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(185, 34);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Äîáàâèòü";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &form1::button7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(193, 228);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(72, 17);
			this->label8->TabIndex = 5;
			this->label8->Text = L"Íàçâàíèå";
			this->label8->Visible = false;
			this->label8->Click += gcnew System::EventHandler(this, &form1::label8_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button15->Location = System::Drawing::Point(4, 101);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(271, 56);
			this->button15->TabIndex = 10;
			this->button15->Text = L"Óäàëèòü òîâàğ";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &form1::button15_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(193, 258);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(42, 17);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Äàòà";
			this->label7->Visible = false;
			this->label7->Click += gcnew System::EventHandler(this, &form1::label7_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button13->Location = System::Drawing::Point(3, 39);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(271, 56);
			this->button13->TabIndex = 8;
			this->button13->Text = L"Ğåäàêòèğîâàòü òîâàğ";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &form1::button13_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(193, 288);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(74, 17);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Îïèñàíèå";
			this->label6->Visible = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button12->Location = System::Drawing::Point(4, 163);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(271, 56);
			this->button12->TabIndex = 7;
			this->button12->Text = L"Äîáàâèòü òîâàğ";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &form1::button12_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(6, 283);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(185, 22);
			this->textBox4->TabIndex = 2;
			this->textBox4->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(1, 349);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(238, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ôèëüòğû ïîèñêà òîâàğà";
			this->label2->Click += gcnew System::EventHandler(this, &form1::label2_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(8, 377);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(140, 24);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Ïî íàçâàíèş";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &form1::radioButton1_CheckedChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(3, 11);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(234, 25);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Ğåäàêòèğîâàíèå òîâàğà";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(8, 407);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(100, 24);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Ïî äàòå";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(6, 255);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(185, 22);
			this->textBox3->TabIndex = 1;
			this->textBox3->Visible = false;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->Location = System::Drawing::Point(8, 437);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(140, 24);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Ïî îïèñàíèş";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &form1::radioButton3_CheckedChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(6, 225);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(185, 22);
			this->textBox2->TabIndex = 0;
			this->textBox2->Visible = false;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->button11);
			this->panel7->Controls->Add(this->button10);
			this->panel7->Controls->Add(this->button9);
			this->panel7->Controls->Add(this->button8);
			this->panel7->Location = System::Drawing::Point(13, 7);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(280, 253);
			this->panel7->TabIndex = 0;
			this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &form1::panel7_Paint);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button11->Location = System::Drawing::Point(3, 187);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(271, 56);
			this->button11->TabIndex = 3;
			this->button11->Text = L"Ïğîäàæè";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &form1::button11_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button10->Location = System::Drawing::Point(3, 125);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(271, 56);
			this->button10->TabIndex = 2;
			this->button10->Text = L"Ãğàôèê ğàáîòû";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &form1::button10_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button9->Location = System::Drawing::Point(4, 63);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(271, 56);
			this->button9->TabIndex = 1;
			this->button9->Text = L"Ğàáîòíèêè";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &form1::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button8->Location = System::Drawing::Point(4, 4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(271, 56);
			this->button8->TabIndex = 0;
			this->button8->Text = L"Òîâàğû";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &form1::button8_Click);
			// 
			// panel5
			// 
			this->panel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->comboBox1);
			this->panel5->Controls->Add(this->label1);
			this->panel5->Location = System::Drawing::Point(302, 78);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(948, 61);
			this->panel5->TabIndex = 4;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(107, 20);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(397, 24);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L"Âûáåğåòå òîâàğ";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &form1::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ïîèñê òîâàğà";
			this->label1->Click += gcnew System::EventHandler(this, &form1::label1_Click);
			// 
			// panel6
			// 
			this->panel6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel6->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->dataGridView1);
			this->panel6->Controls->Add(this->panel9);
			this->panel6->Location = System::Drawing::Point(302, 145);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(948, 662);
			this->panel6->TabIndex = 5;
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->CName,
					this->Date, this->Description
			});
			this->dataGridView1->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->Location = System::Drawing::Point(3, 71);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(942, 586);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &form1::dataGridView1_CellContentClick);
			// 
			// CName
			// 
			this->CName->Frozen = true;
			this->CName->HeaderText = L"Íàçâàíèå ïğîäóêòà";
			this->CName->MinimumWidth = 6;
			this->CName->Name = L"CName";
			this->CName->Width = 250;
			// 
			// Date
			// 
			this->Date->Frozen = true;
			this->Date->HeaderText = L"Äàòà âûõîäà";
			this->Date->MinimumWidth = 6;
			this->Date->Name = L"Date";
			this->Date->Width = 175;
			// 
			// Description
			// 
			this->Description->Frozen = true;
			this->Description->HeaderText = L"Îïèñàíèå ïğîäóêòà";
			this->Description->MinimumWidth = 6;
			this->Description->Name = L"Description";
			this->Description->ReadOnly = true;
			this->Description->Width = 467;
			// 
			// panel9
			// 
			this->panel9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel9->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panel9->Controls->Add(this->label3);
			this->panel9->Location = System::Drawing::Point(3, 3);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(942, 62);
			this->panel9->TabIndex = 0;
			this->panel9->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &form1::panel9_Paint);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(3, 11);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(194, 38);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Âñå òîâàğû";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"Excel|*.xlsx";
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(61, 4);
			// 
			// form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(1262, 977);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel6);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"form1";
			this->Text = L"shop";
			this->Load += gcnew System::EventHandler(this, &form1::form1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void èíñòğóìåíòûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void íîâûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->Rows->Count != 1) {
		if (n <= 0) {
			n = dataGridView1->Rows->Count - 2;
		}
		else
		{
			n--;
		}
		for (int i = 0; i < dataGridView1->Rows->Count; i++)
			dataGridView1->Rows[i]->Selected = false;
		dataGridView1->Rows[n]->Selected = true;
	}
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	button6->Visible = false;
	textBox1->Visible = true;
	button4->Visible = true;
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
}
private: System::Void panel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	wrk->Show(this);

}
private: System::Void îòêğûòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	openFileDialog1->FilterIndex = 4;
	openFileDialog1->RestoreDirectory = true;
	System::Data::DataTable^ tb = gcnew DataTable;
	String^ FileName = "";
	try
	{
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			array<String^>^ rows = File::ReadAllLines(openFileDialog1->FileName, System::Text::Encoding::Default);
			array<String^>^ columns = rows[0]->Split(',');
			for (int i = 0; i < columns->Length; i++)
			{
				dataGridView1->Columns->Add("Column" + Convert::ToString(i + 1), "Column" + Convert::ToString(i + 1));
			}

			dataGridView1->Rows->Add(rows->Length);

			array<String^>^ cells;
			for (int j = 0; j < rows->Length; j++)
			{
				cells = rows[j]->Split(',');
				for (int i = 0; i < cells->Length; i++)
				{
					dataGridView1->Rows[j]->Cells[i]->Value = cells[i];
				}
			}
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(this, "íå óäàëîñü îòêğûòü ôàéë", "îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void panel9_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	openFileDialog1->FilterIndex = 4;
	openFileDialog1->RestoreDirectory = true;
	System::Data::DataTable^ tb = gcnew DataTable;
	String^ FileName = "";
	try
	{
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			array<String^>^ rows = File::ReadAllLines(openFileDialog1->FileName, System::Text::Encoding::Default);
			array<String^>^ columns = rows[0]->Split(',');

			dataGridView1->Rows->Add(rows->Length);

			array<String^>^ cells;
			for (int j = 0; j < rows->Length; j++)
			{
				cells = rows[j]->Split(',');
				for (int i = 0; i < cells->Length; i++)
				{
					dataGridView1->Rows[j]->Cells[i]->Value = cells[i];
				}
			}
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(this, "íå óäàëîñü îòêğûòü ôàéë", "îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	comboBox1->Items->Add("Âñå");

	for (int i = 0; i < dataGridView1->Rows->Count - 1; i++) {
		comboBox1->Items->Add(dataGridView1->Rows[i]->Cells[0]->Value->ToString());
	}
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < dataGridView1->Rows->Count - 1; i++)
			dataGridView1->Rows[i]->Visible = dataGridView1->Rows[i]->Cells[0]->Value->ToString() == comboBox1->Text;
	if (comboBox1->Text == "Âñå") {
		for (int i = 0; i < dataGridView1->Rows->Count - 1; i++)
			dataGridView1->Rows[i]->Visible = true;
	}

}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < dataGridView1->Rows->Count - 1; i++) {
		comboBox1->Items->Add(dataGridView1->Rows[i]->Cells[0]->Value->ToString());
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->Rows->Count != 1) {
		if (n > dataGridView1->Rows->Count - 2) {
			n = 0;
		}
		else
		{
			n++;
		}
		for (int i = 0; i < dataGridView1->Rows->Count; i++)
			dataGridView1->Rows[i]->Selected = false;
		dataGridView1->Rows[n]->Selected = true;
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Êàêàÿ-òî âàæíàÿ èíôîğìàöèÿ èëè ïîìîùü â ğàáîòå ïğîãğàììû", "Ñïğàâêà", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < dataGridView1->Rows->Count - 1; i++)
		for (int j = 0; j < dataGridView1->Columns->Count; j++) {
			dataGridView1->Rows[i]->Visible = dataGridView1->Rows[i]->Cells[j]->Value->ToString() == textBox1->Text->ToString();
			if (dataGridView1->Rows[i]->Cells[j]->Value->ToString() == textBox1->Text->ToString()) {
				i++;
			}
		}
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->RemoveAt(n);
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Visible == false) {
		textBox2->Visible = true;
		textBox3->Visible = true;
		textBox4->Visible = true;
		label8->Visible = true;
		label6->Visible = true;
		label7->Visible = true;
		button7->Visible = true;
	}
	else {
		textBox2->Visible = false;
		textBox3->Visible = false;
		textBox4->Visible = false;
		label8->Visible = false;
		label6->Visible = false;
		label7->Visible = false;
		button7->Visible = false;
		button14->Visible = false;
	}
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Rows->Add(1);
		dataGridView1->Rows[dataGridView1->Rows->Count - 2]->Cells[0]->Value = textBox2->Text->ToString();
		dataGridView1->Rows[dataGridView1->Rows->Count - 2]->Cells[1]->Value = textBox3->Text->ToString();
		dataGridView1->Rows[dataGridView1->Rows->Count - 2]->Cells[2]->Value = textBox4->Text->ToString();
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Visible == false) {
		textBox2->Visible = true;
		textBox3->Visible = true;
		textBox4->Visible = true;
		label8->Visible = true;
		label6->Visible = true;
		label7->Visible = true;
		button14->Visible = true;
	}
	else {
		textBox2->Visible = false;
		textBox3->Visible = false;
		textBox4->Visible = false;
		label8->Visible = false;
		label6->Visible = false;
		label7->Visible = false;
		button14->Visible = false;
		button7->Visible = false;
	}
}
private: System::Void button14_Click_1(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < dataGridView1->Rows->Count - 1; i++) {
		if (dataGridView1->Rows[i]->Selected == true) {
			dataGridView1->Rows[i]->Cells[0]->Value = textBox2->Text->ToString();
			dataGridView1->Rows[i]->Cells[1]->Value = textBox3->Text->ToString();
			dataGridView1->Rows[i]->Cells[2]->Value = textBox4->Text->ToString();
		}
	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	grp1->Show(this);
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	sel->Show(this);
}
};
}
