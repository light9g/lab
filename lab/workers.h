#pragma once
#include "graphic.h"
#include "sells.h"
#include "calculate.h"

namespace lab {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Ñâîäêà äëÿ workers
	/// </summary>
	public ref class workers : public System::Windows::Forms::Form
	{
	public:
		workers(void)
		{
			InitializeComponent();
		
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~workers()
		{
			if (components)
			{
				delete components;
			}
		}
	public: graphic^ grp2;
	private: sells^ sel2;
	private: calculate^ calc2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ óäàëèòüToolStripMenuItem;
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
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;






	private: System::Windows::Forms::Panel^ panel7;

	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Button^ button15;

	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Description;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ bankacc;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

















	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(workers::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->óäàëèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->CName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Description = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->bankacc = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->menuStrip1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel7->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel9->SuspendLayout();
			this->panel8->SuspendLayout();
			this->SuspendLayout();
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
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ñîõğàíèòüToolStripMenuItem,
					this->óäàëèòüToolStripMenuItem
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
			// èíñòğóìåíòûToolStripMenuItem
			// 
			this->èíñòğóìåíòûToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->èíñòğóìåíò1ToolStripMenuItem,
					this->èíñòğóìåíò2ToolStripMenuItem
			});
			this->èíñòğóìåíòûToolStripMenuItem->Name = L"èíñòğóìåíòûToolStripMenuItem";
			this->èíñòğóìåíòûToolStripMenuItem->Size = System::Drawing::Size(117, 24);
			this->èíñòğóìåíòûToolStripMenuItem->Text = L"Èíñòğóìåíòû";
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
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->pictureBox8);
			this->panel2->Controls->Add(this->pictureBox6);
			this->panel2->Controls->Add(this->pictureBox5);
			this->panel2->Controls->Add(this->pictureBox4);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 28);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1262, 43);
			this->panel2->TabIndex = 2;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button6->Location = System::Drawing::Point(906, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(101, 34);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Ïîèñê";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button5->Location = System::Drawing::Point(768, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(101, 34);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Ïîìîùü";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button4->Location = System::Drawing::Point(630, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(101, 34);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Îòìåíà";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button3->Location = System::Drawing::Point(492, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 34);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Âïåğåä";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button2->Location = System::Drawing::Point(354, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 34);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Íàçàä";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(875, 6);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(25, 28);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 6;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(737, 6);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(25, 28);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 4;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(599, 6);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(25, 28);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 3;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(461, 6);
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
			this->button1->Text = L"Ñîõğàíèòü ";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(323, 6);
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
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(150, 6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(25, 28);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &workers::pictureBox1_Click);
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
			this->panel7->TabIndex = 3;
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
			this->button11->Click += gcnew System::EventHandler(this, &workers::button11_Click);
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
			this->button10->Click += gcnew System::EventHandler(this, &workers::button10_Click);
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
			this->button9->Click += gcnew System::EventHandler(this, &workers::button9_Click);
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
			this->button8->Click += gcnew System::EventHandler(this, &workers::button8_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::Control;
			this->panel3->Controls->Add(this->label4);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel3->Location = System::Drawing::Point(0, 944);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1262, 33);
			this->panel3->TabIndex = 4;
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
			this->panel5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->button7);
			this->panel5->Controls->Add(this->comboBox1);
			this->panel5->Controls->Add(this->label1);
			this->panel5->Location = System::Drawing::Point(298, 77);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(948, 61);
			this->panel5->TabIndex = 5;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button7->Location = System::Drawing::Point(404, 10);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(101, 34);
			this->button7->TabIndex = 12;
			this->button7->Text = L"Íàéòè";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(137, 16);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(261, 24);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L"Âûáåğèòå ñîòğóäíèêà";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ïîèñê ñîòğóäíèêà";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->button13);
			this->panel6->Controls->Add(this->dataGridView1);
			this->panel6->Controls->Add(this->panel9);
			this->panel6->Location = System::Drawing::Point(298, 144);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(948, 662);
			this->panel6->TabIndex = 6;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button13->Location = System::Drawing::Point(672, 601);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(271, 56);
			this->button13->TabIndex = 5;
			this->button13->Text = L"Ğàñ÷åò çàğïëàòû";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &workers::button13_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->CName,
					this->Date, this->Description, this->bankacc
			});
			this->dataGridView1->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->Location = System::Drawing::Point(3, 71);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(942, 524);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &workers::dataGridView1_CellContentClick);
			// 
			// CName
			// 
			this->CName->Frozen = true;
			this->CName->HeaderText = L"ÔÈÎ ñîòğóäíèêà";
			this->CName->MinimumWidth = 6;
			this->CName->Name = L"CName";
			this->CName->Width = 175;
			// 
			// Date
			// 
			this->Date->Frozen = true;
			this->Date->HeaderText = L"Ğàáîòàåò ñ";
			this->Date->MinimumWidth = 6;
			this->Date->Name = L"Date";
			this->Date->Width = 125;
			// 
			// Description
			// 
			this->Description->Frozen = true;
			this->Description->HeaderText = L"Íîìåğ òåëåôîíà";
			this->Description->MinimumWidth = 6;
			this->Description->Name = L"Description";
			this->Description->ReadOnly = true;
			this->Description->Width = 200;
			// 
			// bankacc
			// 
			this->bankacc->HeaderText = L"Áàíêîâñêèé àêêàóíò";
			this->bankacc->MinimumWidth = 6;
			this->bankacc->Name = L"bankacc";
			this->bankacc->Width = 187;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panel9->Controls->Add(this->label3);
			this->panel9->Location = System::Drawing::Point(3, 3);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(942, 62);
			this->panel9->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(3, 11);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(258, 38);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Âñå ñîòğóäíèêè";
			// 
			// panel8
			// 
			this->panel8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel8->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Controls->Add(this->button15);
			this->panel8->Controls->Add(this->button12);
			this->panel8->Controls->Add(this->button16);
			this->panel8->Controls->Add(this->label5);
			this->panel8->Controls->Add(this->label2);
			this->panel8->Controls->Add(this->radioButton5);
			this->panel8->Controls->Add(this->radioButton4);
			this->panel8->Controls->Add(this->radioButton3);
			this->panel8->Controls->Add(this->radioButton2);
			this->panel8->Controls->Add(this->radioButton1);
			this->panel8->Location = System::Drawing::Point(13, 331);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(280, 475);
			this->panel8->TabIndex = 6;
			this->panel8->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &workers::panel8_Paint);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button15->Location = System::Drawing::Point(4, 188);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(271, 56);
			this->button15->TabIndex = 10;
			this->button15->Text = L"Óâîëèòü ñîòğóäíèêà";
			this->button15->UseVisualStyleBackColor = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button12->Location = System::Drawing::Point(4, 126);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(271, 56);
			this->button12->TabIndex = 8;
			this->button12->Text = L"Ğåäàêòèğîâàòü ñîòğíóäíèêà";
			this->button12->UseVisualStyleBackColor = false;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button16->Location = System::Drawing::Point(4, 64);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(271, 56);
			this->button16->TabIndex = 7;
			this->button16->Text = L"Äîáàâèòü ñîòğóäíèêà";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &workers::button16_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(3, 11);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(206, 50);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Àäìèíèñòğèğîâàíèå\r\nñîòğóäíèêîâ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(3, 247);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(174, 50);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ôèëüòğû ïîèñêà \r\nñîòğóäíèêà";
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton5->Location = System::Drawing::Point(8, 420);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(110, 24);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Ôèëüòğ 5";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton4->Location = System::Drawing::Point(8, 390);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(110, 24);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Ôèëüòğ 4";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->Location = System::Drawing::Point(8, 360);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(110, 24);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Ôèëüòğ 3";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(8, 330);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(110, 24);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Ôèëüòğ 2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(8, 300);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(110, 24);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Ôèëüòğ 1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// workers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(1262, 977);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"workers";
			this->Text = L"workers";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &workers::workers_FormClosed);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel8_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	this->Owner->Show();
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	this->Owner->OwnedForms[1]->Show();
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	this->Owner->OwnedForms[2]->Show();
	//sel2->Show();
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	this->Owner->OwnedForms[3]->Show();
	//calc2->Show();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void workers_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	Application::Exit();
}
};
}
