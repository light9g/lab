#pragma once

namespace lab {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для calculate
	/// </summary>
	public ref class calculate : public System::Windows::Forms::Form
	{
	public:
		calculate(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			for (int i = 0; i < 4; i++) { dataGridView1->Rows->Add(); }
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~calculate()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ удалитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ инструментыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ инструмент1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ инструмент2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ видToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ масштабToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ отркрытьСПомощьюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ окнаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ продуктыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ работникиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ помощьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ f1ToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;




	private: System::Windows::Forms::Button^ button1;








	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Description;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ all;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fio;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Label^ label10;










	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->инструментыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->инструмент1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->инструмент2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->видToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->масштабToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->отркрытьСПомощьюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->окнаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->продуктыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->работникиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->помощьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->f1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->CName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Description = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->all = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel6->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel11->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->файлToolStripMenuItem,
					this->инструментыToolStripMenuItem, this->видToolStripMenuItem, this->окнаToolStripMenuItem, this->справкаToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1262, 28);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->сохранитьToolStripMenuItem,
					this->удалитьToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(166, 26);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			// 
			// удалитьToolStripMenuItem
			// 
			this->удалитьToolStripMenuItem->Name = L"удалитьToolStripMenuItem";
			this->удалитьToolStripMenuItem->Size = System::Drawing::Size(166, 26);
			this->удалитьToolStripMenuItem->Text = L"Удалить";
			// 
			// инструментыToolStripMenuItem
			// 
			this->инструментыToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->инструмент1ToolStripMenuItem,
					this->инструмент2ToolStripMenuItem
			});
			this->инструментыToolStripMenuItem->Name = L"инструментыToolStripMenuItem";
			this->инструментыToolStripMenuItem->Size = System::Drawing::Size(117, 24);
			this->инструментыToolStripMenuItem->Text = L"Инструменты";
			// 
			// инструмент1ToolStripMenuItem
			// 
			this->инструмент1ToolStripMenuItem->Name = L"инструмент1ToolStripMenuItem";
			this->инструмент1ToolStripMenuItem->Size = System::Drawing::Size(183, 26);
			this->инструмент1ToolStripMenuItem->Text = L"Инструмент1";
			// 
			// инструмент2ToolStripMenuItem
			// 
			this->инструмент2ToolStripMenuItem->Name = L"инструмент2ToolStripMenuItem";
			this->инструмент2ToolStripMenuItem->Size = System::Drawing::Size(183, 26);
			this->инструмент2ToolStripMenuItem->Text = L"Инструмент2";
			// 
			// видToolStripMenuItem
			// 
			this->видToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->масштабToolStripMenuItem,
					this->отркрытьСПомощьюToolStripMenuItem
			});
			this->видToolStripMenuItem->Name = L"видToolStripMenuItem";
			this->видToolStripMenuItem->Size = System::Drawing::Size(49, 24);
			this->видToolStripMenuItem->Text = L"Вид";
			// 
			// масштабToolStripMenuItem
			// 
			this->масштабToolStripMenuItem->Name = L"масштабToolStripMenuItem";
			this->масштабToolStripMenuItem->Size = System::Drawing::Size(244, 26);
			this->масштабToolStripMenuItem->Text = L"Масштаб";
			// 
			// отркрытьСПомощьюToolStripMenuItem
			// 
			this->отркрытьСПомощьюToolStripMenuItem->Name = L"отркрытьСПомощьюToolStripMenuItem";
			this->отркрытьСПомощьюToolStripMenuItem->Size = System::Drawing::Size(244, 26);
			this->отркрытьСПомощьюToolStripMenuItem->Text = L"Отркрыть с помощью";
			// 
			// окнаToolStripMenuItem
			// 
			this->окнаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->продуктыToolStripMenuItem,
					this->работникиToolStripMenuItem
			});
			this->окнаToolStripMenuItem->Name = L"окнаToolStripMenuItem";
			this->окнаToolStripMenuItem->Size = System::Drawing::Size(58, 24);
			this->окнаToolStripMenuItem->Text = L"Окна";
			// 
			// продуктыToolStripMenuItem
			// 
			this->продуктыToolStripMenuItem->Name = L"продуктыToolStripMenuItem";
			this->продуктыToolStripMenuItem->Size = System::Drawing::Size(166, 26);
			this->продуктыToolStripMenuItem->Text = L"Продукты";
			// 
			// работникиToolStripMenuItem
			// 
			this->работникиToolStripMenuItem->Name = L"работникиToolStripMenuItem";
			this->работникиToolStripMenuItem->Size = System::Drawing::Size(166, 26);
			this->работникиToolStripMenuItem->Text = L"Работники";
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->помощьToolStripMenuItem,
					this->f1ToolStripMenuItem
			});
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(81, 24);
			this->справкаToolStripMenuItem->Text = L"Справка";
			// 
			// помощьToolStripMenuItem
			// 
			this->помощьToolStripMenuItem->Name = L"помощьToolStripMenuItem";
			this->помощьToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->помощьToolStripMenuItem->Text = L"Помощь ";
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
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 28);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1262, 43);
			this->panel2->TabIndex = 5;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button6->Location = System::Drawing::Point(1041, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(101, 34);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Поиск";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button5->Location = System::Drawing::Point(1148, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(101, 34);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Помощь";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button3->Location = System::Drawing::Point(319, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 34);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Вперед";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button2->Location = System::Drawing::Point(181, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 34);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Назад";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button1->Location = System::Drawing::Point(43, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 34);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Сохранить ";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::Control;
			this->panel3->Controls->Add(this->label4);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel3->Location = System::Drawing::Point(0, 944);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1262, 33);
			this->panel3->TabIndex = 9;
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
			this->panel7->TabIndex = 10;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button11->Location = System::Drawing::Point(3, 187);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(271, 56);
			this->button11->TabIndex = 3;
			this->button11->Text = L"Продажи";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &calculate::button11_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button10->Location = System::Drawing::Point(3, 125);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(271, 56);
			this->button10->TabIndex = 2;
			this->button10->Text = L"График работы";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &calculate::button10_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button9->Location = System::Drawing::Point(4, 63);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(271, 56);
			this->button9->TabIndex = 1;
			this->button9->Text = L"Работники";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &calculate::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button8->Location = System::Drawing::Point(4, 4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(271, 56);
			this->button8->TabIndex = 0;
			this->button8->Text = L"Товары";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &calculate::button8_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Location = System::Drawing::Point(298, 77);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(948, 248);
			this->panel1->TabIndex = 11;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button7->Location = System::Drawing::Point(13, 187);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(420, 56);
			this->button7->TabIndex = 9;
			this->button7->Text = L"Подтвердить корректность данных";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &calculate::button7_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(240, 83);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(193, 24);
			this->comboBox1->TabIndex = 8;
			this->comboBox1->Text = L"Грачов Р.О.";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(240, 125);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(193, 22);
			this->textBox3->TabIndex = 7;
			this->textBox3->Text = L"8444 9999 2222 3333";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(660, 125);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(193, 22);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"150";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(660, 83);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(193, 22);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"100";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(467, 125);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(149, 17);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Ставка за доп. время";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(467, 83);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(114, 17);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Дневная ставка";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 125);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(200, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Номер банковского аккаунта";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ФИО работника";
			this->label1->Click += gcnew System::EventHandler(this, &calculate::label1_Click);
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
			this->label2->Size = System::Drawing::Size(181, 38);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Сотрудник";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Controls->Add(this->label9);
			this->panel8->Controls->Add(this->button12);
			this->panel8->Controls->Add(this->monthCalendar1);
			this->panel8->Controls->Add(this->panel9);
			this->panel8->Location = System::Drawing::Point(13, 331);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(279, 419);
			this->panel8->TabIndex = 13;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 77);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(193, 34);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Выберите дней за который \r\nхотите отчетность";
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button12->Location = System::Drawing::Point(6, 337);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(191, 64);
			this->button12->TabIndex = 8;
			this->button12->Text = L"Применить";
			this->button12->UseVisualStyleBackColor = false;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(9, 118);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 1;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panel9->Controls->Add(this->label8);
			this->panel9->Location = System::Drawing::Point(3, 3);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(270, 62);
			this->panel9->TabIndex = 0;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(3, 11);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(116, 38);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Месяц";
			// 
			// panel5
			// 
			this->panel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->dataGridView1);
			this->panel5->Controls->Add(this->panel6);
			this->panel5->Location = System::Drawing::Point(298, 335);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(948, 196);
			this->panel5->TabIndex = 14;
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
			this->dataGridView1->Size = System::Drawing::Size(942, 120);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &calculate::dataGridView1_CellContentClick);
			// 
			// CName
			// 
			this->CName->Frozen = true;
			this->CName->HeaderText = L"Дата";
			this->CName->MinimumWidth = 6;
			this->CName->Name = L"CName";
			this->CName->Width = 120;
			// 
			// Date
			// 
			this->Date->Frozen = true;
			this->Date->HeaderText = L"Количество рабочих часов";
			this->Date->MinimumWidth = 6;
			this->Date->Name = L"Date";
			this->Date->Width = 165;
			// 
			// Description
			// 
			this->Description->Frozen = true;
			this->Description->HeaderText = L"Количество доп.часов";
			this->Description->MinimumWidth = 6;
			this->Description->Name = L"Description";
			this->Description->ReadOnly = true;
			this->Description->Width = 110;
			// 
			// all
			// 
			this->all->HeaderText = L"Должность";
			this->all->MinimumWidth = 6;
			this->all->Name = L"all";
			this->all->Width = 120;
			// 
			// fio
			// 
			this->fio->HeaderText = L"Выполненная работа";
			this->fio->MinimumWidth = 6;
			this->fio->Name = L"fio";
			this->fio->Width = 125;
			// 
			// panel6
			// 
			this->panel6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel6->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panel6->Controls->Add(this->label7);
			this->panel6->Location = System::Drawing::Point(3, 3);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(942, 62);
			this->panel6->TabIndex = 0;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(3, 11);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(326, 38);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Рабочая отчетность";
			// 
			// panel10
			// 
			this->panel10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel10->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel10->Controls->Add(this->textBox5);
			this->panel10->Controls->Add(this->button13);
			this->panel10->Controls->Add(this->label12);
			this->panel10->Controls->Add(this->textBox4);
			this->panel10->Controls->Add(this->label11);
			this->panel10->Controls->Add(this->panel11);
			this->panel10->Location = System::Drawing::Point(298, 537);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(948, 213);
			this->panel10->TabIndex = 15;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(6, 181);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(249, 22);
			this->textBox5->TabIndex = 10;
			this->textBox5->Text = L"11400";
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button13->Location = System::Drawing::Point(6, 116);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(271, 42);
			this->button13->TabIndex = 9;
			this->button13->Text = L"Расчитать";
			this->button13->UseVisualStyleBackColor = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(10, 161);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(42, 17);
			this->label12->TabIndex = 8;
			this->label12->Text = L"Итог:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(3, 88);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(249, 22);
			this->textBox4->TabIndex = 7;
			this->textBox4->Text = L"DAY((Hours * Bid)+(AddHours*AddBid))";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(3, 68);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(192, 17);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Формула рачета зарплаты:";
			// 
			// panel11
			// 
			this->panel11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel11->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panel11->Controls->Add(this->label10);
			this->panel11->Location = System::Drawing::Point(3, 3);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(942, 62);
			this->panel11->TabIndex = 0;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(3, 11);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(324, 38);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Расчитать зарплату";
			// 
			// calculate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(1262, 977);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"calculate";
			this->Text = L"calculate";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &calculate::calculate_FormClosed);
			this->Load += gcnew System::EventHandler(this, &calculate::calculate_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	this->Owner->OwnedForms[0]->Show();
}
private: System::Void calculate_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	this->Owner->Show();
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	this->Owner->OwnedForms[1]->Show();
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	this->Owner->OwnedForms[2]->Show();
}
private: System::Void calculate_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	Application::Exit();
}
};
}
