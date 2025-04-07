#pragma once
#include<cmath>
namespace lr3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::ListBox^ listBox1;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������1ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������2ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������1ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������2ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(791, 506);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Linen;
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Controls->Add(this->menuStrip1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(783, 477);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"�������� 1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(233, 307);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 22);
			this->label5->TabIndex = 8;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(237, 192);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 28);
			this->textBox1->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(594, 357);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(160, 50);
			this->button2->TabIndex = 6;
			this->button2->Text = L"��������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(418, 357);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 50);
			this->button1->TabIndex = 5;
			this->button1->Text = L"���������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(57, 422);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(173, 22);
			this->label4->TabIndex = 4;
			this->label4->Text = L"�����: ����� ����";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(163, 28);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(306, 22);
			this->label3->TabIndex = 3;
			this->label3->Text = L"�������� 1. \"������������ �����\"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(96, 307);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 22);
			this->label2->TabIndex = 2;
			this->label2->Text = L"���������:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(96, 193);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 22);
			this->label1->TabIndex = 1;
			this->label1->Text = L"������ n:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(220, 64);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(172, 58);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->���������ToolStripMenuItem,
					this->��������ToolStripMenuItem, this->�����������ToolStripMenuItem, this->���������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(3, 3);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(777, 28);
			this->menuStrip1->TabIndex = 9;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->��������1ToolStripMenuItem,
					this->��������2ToolStripMenuItem
			});
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(99, 24);
			this->���������ToolStripMenuItem->Text = L"���������";
			// 
			// ��������1ToolStripMenuItem
			// 
			this->��������1ToolStripMenuItem->Name = L"��������1ToolStripMenuItem";
			this->��������1ToolStripMenuItem->Size = System::Drawing::Size(170, 26);
			this->��������1ToolStripMenuItem->Text = L"�������� 1";
			this->��������1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// ��������2ToolStripMenuItem
			// 
			this->��������2ToolStripMenuItem->Name = L"��������2ToolStripMenuItem";
			this->��������2ToolStripMenuItem->Size = System::Drawing::Size(170, 26);
			this->��������2ToolStripMenuItem->Text = L"�������� 2";
			this->��������2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->��������1ToolStripMenuItem1,
					this->��������2ToolStripMenuItem1
			});
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(88, 24);
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// ��������1ToolStripMenuItem1
			// 
			this->��������1ToolStripMenuItem1->Name = L"��������1ToolStripMenuItem1";
			this->��������1ToolStripMenuItem1->Size = System::Drawing::Size(170, 26);
			this->��������1ToolStripMenuItem1->Text = L"�������� 1";
			this->��������1ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// ��������2ToolStripMenuItem1
			// 
			this->��������2ToolStripMenuItem1->Name = L"��������2ToolStripMenuItem1";
			this->��������2ToolStripMenuItem1->Size = System::Drawing::Size(170, 26);
			this->��������2ToolStripMenuItem1->Text = L"�������� 2";
			this->��������2ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->�����������ToolStripMenuItem->Text = L"��� ��������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����������ToolStripMenuItem_Click);
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(104, 24);
			this->���������ToolStripMenuItem->Text = L"��� ������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������ToolStripMenuItem_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::Bisque;
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->listBox1);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->pictureBox2);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(783, 477);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"�������� 2";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(32, 186);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(100, 22);
			this->label10->TabIndex = 9;
			this->label10->Text = L"���������:";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(222, 186);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(249, 148);
			this->listBox1->TabIndex = 6;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(32, 112);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(213, 22);
			this->label8->TabIndex = 5;
			this->label8->Text = L"������� �����������:";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(311, 101);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(202, 33);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(46, 406);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(173, 22);
			this->label7->TabIndex = 3;
			this->label7->Text = L"�����: ����� ����";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(536, 383);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(150, 45);
			this->button4->TabIndex = 2;
			this->button4->Text = L"��������";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(274, 383);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(170, 45);
			this->button3->TabIndex = 1;
			this->button3->Text = L"����������";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(135, 31);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(309, 22);
			this->label6->TabIndex = 0;
			this->label6->Text = L"�������� 2. \"����������� �������\"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(791, 506);
			this->Controls->Add(this->tabControl1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int n;
		if (Int32::TryParse(textBox1->Text, n) && n > 0) {
			unsigned long long sum = 0;
			for (int k = 1; k <= n; k++) {
				unsigned long long term = 1;
				for (int i = 0; i < k; i++) term *= k;
				sum += term;
			}
			label5->Text = "���������: " + sum.ToString();
		}
		else {
			MessageBox::Show("���� �����, ������ �������� ������� ����� n", "�������");
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
	label5->Text = "���������: ";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Items->Clear();  // �������� ������ ����� ������������

	double a = 0.3, b = 7.3, h = 0.2;  // �������� ��������
	double x = a;

	// ������ ��������� �������
	listBox1->Items->Add(" x\t| y=cos(x) \t| z=cos(x/2) ");
	listBox1->Items->Add("-------------------------------------");

	// ���� ��� �����������
	while (x <= b) {
		double y = cos(x) / x;
		double z = cos(x / 2);

		// ������ ����� � ListBox
		listBox1->Items->Add(x.ToString("0.00") + "\t| " + y.ToString("0.0000") + "\t| " + z.ToString("0.0000"));

		x += h;  // �������� x �� ���� h
	}
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Items->Clear();
}
private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("�������� ���������� � ���� �������. ����� �������� ���� �� ��������, ����� ������� ������� �� �������.");
}
private: System::Void ���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("����� ��������: ����� ���� ��������. ��������� �� �������� ��� ��������� �������������, 24 ������� 2025 ����.");
}
};
}