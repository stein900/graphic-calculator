﻿#pragma once
#include <cmath>
#include <winsock2.h>
#pragma comment(lib, "ws2_32.lib")
#include <msclr/marshal.h>
#include <string>
#include<vector>
#include <bitset>
//#include <arpa/inet.h>

namespace calculatricegraphique2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		
		float num1 = 0;
		float num2 = 0;
		float spe = 0;
		char op = ' ';
		String^ MyClass = String::Empty;
		

	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::Button^ button41;


	private: System::ComponentModel::IContainer^ components;




		


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		/// 

		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(20, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(248, 40);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(20, 168);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(65, 45);
			this->button1->TabIndex = 1;
			this->button1->Text = L"7";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(20, 219);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(65, 45);
			this->button2->TabIndex = 2;
			this->button2->Text = L"4";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(20, 270);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(65, 45);
			this->button3->TabIndex = 3;
			this->button3->Text = L"1";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(20, 117);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(65, 45);
			this->button4->TabIndex = 4;
			this->button4->Text = L"+";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(112, 270);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(65, 45);
			this->button5->TabIndex = 5;
			this->button5->Text = L"2";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(112, 219);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(65, 45);
			this->button6->TabIndex = 6;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(112, 168);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(65, 45);
			this->button7->TabIndex = 7;
			this->button7->Text = L"8";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(112, 117);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(65, 45);
			this->button8->TabIndex = 8;
			this->button8->Text = L"-";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(203, 270);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(65, 45);
			this->button9->TabIndex = 9;
			this->button9->Text = L"3";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(203, 219);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(65, 45);
			this->button10->TabIndex = 10;
			this->button10->Text = L"6";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(203, 168);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(65, 45);
			this->button11->TabIndex = 11;
			this->button11->Text = L"9";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(203, 117);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(65, 45);
			this->button12->TabIndex = 12;
			this->button12->Text = L"x";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(20, 321);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(65, 45);
			this->button13->TabIndex = 13;
			this->button13->Text = L"/";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(112, 321);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(65, 45);
			this->button14->TabIndex = 14;
			this->button14->Text = L"0";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::GrayText;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(203, 321);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(65, 45);
			this->button15->TabIndex = 15;
			this->button15->Text = L"=";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button16->Location = System::Drawing::Point(191, 372);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(162, 31);
			this->button16->TabIndex = 16;
			this->button16->Text = L"CE";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(20, 66);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(65, 45);
			this->button17->TabIndex = 17;
			this->button17->Text = L"%";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click_1);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(112, 66);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(65, 45);
			this->button18->TabIndex = 18;
			this->button18->Text = L"√x ";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button19->Font = (gcnew System::Drawing::Font(L"SimSun", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(203, 66);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(65, 45);
			this->button19->TabIndex = 19;
			this->button19->Text = L"x²";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(257, 402);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(25, 12);
			this->label1->TabIndex = 21;
			this->label1->Text = L"stein";
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button20->Location = System::Drawing::Point(20, 372);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(117, 31);
			this->button20->TabIndex = 22;
			this->button20->Text = L"Advanced";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button21->Location = System::Drawing::Point(20, 372);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(117, 31);
			this->button21->TabIndex = 23;
			this->button21->Text = L"base";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(288, 117);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(65, 45);
			this->button22->TabIndex = 24;
			this->button22->Text = L"cos";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(288, 168);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(65, 45);
			this->button23->TabIndex = 25;
			this->button23->Text = L"tan";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(288, 66);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(65, 45);
			this->button24->TabIndex = 26;
			this->button24->Text = L"sin";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button25->Location = System::Drawing::Point(5, 19);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(10, 23);
			this->button25->TabIndex = 27;
			this->button25->Text = L"button25";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button26->Location = System::Drawing::Point(5, 19);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(10, 23);
			this->button26->TabIndex = 28;
			this->button26->Text = L"button26";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button27->Location = System::Drawing::Point(53, 66);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(175, 36);
			this->button27->TabIndex = 29;
			this->button27->Text = L"Calculator";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button28->Location = System::Drawing::Point(53, 140);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(175, 36);
			this->button28->TabIndex = 30;
			this->button28->Text = L"scientist";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button29->Location = System::Drawing::Point(53, 219);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(175, 36);
			this->button29->TabIndex = 31;
			this->button29->Text = L"Programmer";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button30->Location = System::Drawing::Point(102, 108);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(75, 23);
			this->button30->TabIndex = 32;
			this->button30->Text = L"convert";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(288, 270);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(65, 45);
			this->button31->TabIndex = 33;
			this->button31->Text = L"+/-";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(288, 219);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(65, 45);
			this->button32->TabIndex = 34;
			this->button32->Text = L"log";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button33.BackgroundImage")));
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->Location = System::Drawing::Point(288, 321);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(65, 45);
			this->button33->TabIndex = 35;
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button34->Location = System::Drawing::Point(53, 290);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(175, 36);
			this->button34->TabIndex = 36;
			this->button34->Text = L"temperature";
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button35->Location = System::Drawing::Point(20, 66);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(117, 45);
			this->button35->TabIndex = 37;
			this->button35->Text = L"convert to celsius";
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button36->Location = System::Drawing::Point(151, 66);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(117, 44);
			this->button36->TabIndex = 38;
			this->button36->Text = L"convert to fahrenheit";
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button37->Location = System::Drawing::Point(20, 58);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(117, 24);
			this->button37->TabIndex = 39;
			this->button37->Text = L"convert to binary";
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button38->Location = System::Drawing::Point(151, 58);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(117, 24);
			this->button38->TabIndex = 40;
			this->button38->Text = L"convert to decimal";
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click);
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button39->Location = System::Drawing::Point(21, 88);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(116, 22);
			this->button39->TabIndex = 41;
			this->button39->Text = L"convert to hexa";
			this->button39->UseVisualStyleBackColor = false;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button39_Click);
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button40->Location = System::Drawing::Point(151, 88);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(117, 22);
			this->button40->TabIndex = 42;
			this->button40->Text = L"convert to octal";
			this->button40->UseVisualStyleBackColor = false;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::button40_Click);
			// 
			// button41
			// 
			this->button41->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button41->Location = System::Drawing::Point(288, 372);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(65, 31);
			this->button41->TabIndex = 43;
			this->button41->Text = L",";
			this->button41->UseVisualStyleBackColor = false;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::button41_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(365, 420);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Location = System::Drawing::Point(0, 500);
			this->Name = L"MyForm";
			this->Text = L"calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion  
		//------------------------------Bouton division-----------------------------
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		num1 = System::Convert::ToDouble(textBox1->Text);

		// Stocker le premier nombre dans une variable
		num2 = num1;

		// Effacer le contenu du TextBox
		textBox1->Text = "";

		// Stocker l'opérateur dans une variable
		op = '/';
	}
		   //------------------------------Bouton 3-----------------------------
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "3";
	spe = System::Convert::ToDouble(textBox1->Text);
}
	   //------------------------------Bouton addition-----------------------------
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	num1 = System::Convert::ToDouble(textBox1->Text);

	// Stocker le premier nombre dans une variable
	num2 = num1;

	// Effacer le contenu du TextBox
	textBox1->Text = "";

	// Stocker l'opérateur dans une variable
	op = '+';
}
	   //------------------------------Bouton égale-----------------------------
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	// Convertir le contenu du TextBox en nombre entier
	float num3 = System::Convert::ToDouble(textBox1->Text);

	//char op = 0;
	//int num2 = 0;

	// Déterminer quelle opération doit être effectuée
	if (op == '+') {
		float result = num2 + num3;
		textBox1->Text = System::Convert::ToString(result);
	}
	if (op == '-') {
		float result = num2 - num3;
		textBox1->Text = System::Convert::ToString(result);
	}
	if (op == '*') {
		float result = num2 * num3;
		textBox1->Text = System::Convert::ToString(result);
	}
	if (op == '/') {
		float result = num2 / num3;
		textBox1->Text = System::Convert::ToString(result);
	}
	if (op == '%') {
		float result = num2 * num3 / 100;
		textBox1->Text = System::Convert::ToString(result);
	}
}
	   //------------------------------Bouton numérique de 1 à 9-----------------------------
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "2";
	spe = float::Parse(textBox1->Text);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "1";
	spe = float::Parse(textBox1->Text);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "4";
	spe = float::Parse(textBox1->Text);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "5";
	spe = float::Parse(textBox1->Text);
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "6";
	spe = float::Parse(textBox1->Text);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "7";
	spe = float::Parse(textBox1->Text);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "8";
	spe = float::Parse(textBox1->Text);
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "9";
	spe = float::Parse(textBox1->Text);
}
	   //------------------------------Bouton soustraction-----------------------------
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	num1 = System::Convert::ToDouble(textBox1->Text);

	// Stocker le premier nombre dans une variable
	num2 = num1;
	
	// Effacer le contenu du TextBox
	textBox1->Text = "";

	// Stocker l'opérateur dans une variable
	op = '-';
}
	   //------------------------------Bouton 0-----------------------------
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "0";
	spe = float::Parse(textBox1->Text);
}
	   //------------------------------Bouton multiplication-----------------------------
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	num1 = System::Convert::ToDouble(textBox1->Text);
	 
	// Stocker le premier nombre dans une variable
	num2 = num1;

	// Effacer le contenu du TextBox
	textBox1->Text = "";

	// Stocker l'opérateur dans une variable
	op = '*';
}
	   //------------------------------Bouton clear entrance-----------------------------
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	int result = 0;
	num2 = 0;
	num1 = 0;
	textBox1->Text = "";
}
	   //------------------------------Bouton pourcentage-----------------------------
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += ".";
}
	   //------------------------------Bouton pourcentage-----------------------------
private: System::Void button17_Click_1(System::Object^ sender, System::EventArgs^ e) {
	num1 = System::Convert::ToDouble(textBox1->Text);

	// Stocker le premier nombre dans une variable
	num2 = num1;

	// Effacer le contenu du TextBox
	textBox1->Text = "";

	// Stocker l'opérateur dans une variable
	op = '%';
}
	   //------------------------------Bouton racine carré-----------------------------
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	double result = sqrt(spe);

	// Afficher le résultat dans le TextBox
	textBox1->Text = result.ToString();
}
	   //------------------------------Bouton x au cube-----------------------------
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	num1 = System::Convert::ToDouble(textBox1->Text);
	num2 = num1;
	float result = num2 * num2;
	textBox1->Text = System::Convert::ToString(result);
}

	   //--------------Loading calculatrice simple-------------
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	button17->Hide();
	button18->Hide();
	button19->Hide();
	button20->Show();
	button21->Hide();
	button22->Hide();
	button23->Hide();
	button24->Hide();
	button26->Hide();
	button37->Hide();
	button27->Hide();
	button28->Hide();
	button29->Hide();
	button30->Hide();
	button34->Hide();
	button35->Hide();
	button36->Hide();
	button39->Hide();
	button38->Hide();
	button40->Hide();
	this->button8->Location = System::Drawing::Point(112, 66);
	this->button4->Location = System::Drawing::Point(20, 66);
	this->button12->Location = System::Drawing::Point(203, 66);
	this->button1->Location = System::Drawing::Point(20, 117);
	this->button7->Location = System::Drawing::Point(112, 117);
	this->button11->Location = System::Drawing::Point(203, 117);
	this->button2->Location = System::Drawing::Point(20, 168);
	this->button6->Location = System::Drawing::Point(112, 168);
	this->button10->Location = System::Drawing::Point(203, 168);
	this->button3->Location = System::Drawing::Point(20, 219);
	this->button5->Location = System::Drawing::Point(112, 219);
	this->button9->Location = System::Drawing::Point(203, 219);
	this->button13->Location = System::Drawing::Point(20, 270);
	this->button14->Location = System::Drawing::Point(112, 270);
	this->button15->Location = System::Drawing::Point(203, 270);
	this->button16->Location = System::Drawing::Point(143, 319);
	this->button20->Location = System::Drawing::Point(20, 319);
	this->MaximumSize = System::Drawing::Size(300, 405);
	this->MinimumSize = System::Drawing::Size(20, 405);
	this->label1->Location = System::Drawing::Point(257, 351);
	this->textBox1->Size = System::Drawing::Size(248, 40);
	this->button16->Size = System::Drawing::Size(125, 31);


}
	   //-------------- calculatrice avancée-------------
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	button17->Show();
	button18->Show();
	button19->Show();
	button20->Hide();
	button21->Show();
	button22->Show();
	button23->Show();
	button24->Show();
	button30->Hide();
	button37->Hide();
	button34->Hide();
	button35->Hide();
	button36->Hide();
	button39->Hide();
	button38->Hide();
	button40->Hide();
	this->Size = System::Drawing::Size(500, 500);
	this->button1->Location = System::Drawing::Point(20, 168);
	this->button2->Location = System::Drawing::Point(20, 219);
	this->button3->Location = System::Drawing::Point(20, 270);
	this->button4->Location = System::Drawing::Point(20, 117);
	this->button5->Location = System::Drawing::Point(112, 270);
	this->button6->Location = System::Drawing::Point(112, 219);
	this->button7->Location = System::Drawing::Point(112, 168);
	this->button8->Location = System::Drawing::Point(112, 117);
	this->button9->Location = System::Drawing::Point(203, 270);
	this->button10->Location = System::Drawing::Point(203, 219);
	this->button11->Location = System::Drawing::Point(203, 168);
	this->button12->Location = System::Drawing::Point(203, 117);
	this->button13->Location = System::Drawing::Point(20, 321);
	this->button14->Location = System::Drawing::Point(112, 321);
	this->button15->Location = System::Drawing::Point(203, 321);
	this->button16->Location = System::Drawing::Point(143, 372);
	this->button21->Location = System::Drawing::Point(20, 372);
	this->button17->Location = System::Drawing::Point(20, 66);
	this->button18->Location = System::Drawing::Point(112, 66);
	this->button19->Location = System::Drawing::Point(203, 66);
	//this->button22->Location = System::Drawing::Point(112, 66);
	//this->button23->Location = System::Drawing::Point(203, 66);
	//this->button24->Location = System::Drawing::Point(20, 66);
	this->MaximumSize = System::Drawing::Size(381, 460);
	this->MinimumSize = System::Drawing::Size(381, 460);
	this->label1->Location = System::Drawing::Point(330, 405);
	this->textBox1->Size = System::Drawing::Size(330, 40);
	this->button16->Size = System::Drawing::Size(68, 31);
	this->button16->Location = System::Drawing::Point(200, 372);
	this->button21->Size = System::Drawing::Size(164, 31);
	this->button14->Size = System::Drawing::Size(65, 45);
	//button17->Show();
	//button18->Show();
	//button19->Show();
	//button20->Hide();
	//button21->Show();
	//button22->Show();
	//button23->Show();
	//button24->Show();
	//button30->Hide();
	//this->Size = System::Drawing::Size(500, 500);
	//this->button1->Location = System::Drawing::Point(20, 219);
	//this->button2->Location = System::Drawing::Point(20, 270);
	//this->button3->Location = System::Drawing::Point(20, 321);
	//this->button4->Location = System::Drawing::Point(20, 168);
	//this->button5->Location = System::Drawing::Point(112, 321);
	//this->button6->Location = System::Drawing::Point(112, 270);
	//this->button7->Location = System::Drawing::Point(112, 219);
	//this->button8->Location = System::Drawing::Point(112, 168);
	//this->button9->Location = System::Drawing::Point(203, 321);
	//this->button10->Location = System::Drawing::Point(203, 270);
	//this->button11->Location = System::Drawing::Point(203, 219);
	//this->button12->Location = System::Drawing::Point(203, 168);
	//this->button13->Location = System::Drawing::Point(20, 372);
	//this->button14->Location = System::Drawing::Point(112, 372);
	//this->button15->Location = System::Drawing::Point(203, 372);
	//this->button16->Location = System::Drawing::Point(143, 423);
	//this->button21->Location = System::Drawing::Point(20, 423);
	//this->button17->Location = System::Drawing::Point(20, 117);
	//this->button18->Location = System::Drawing::Point(112, 117);
	//this->button19->Location = System::Drawing::Point(203, 117);
	//this->button22->Location = System::Drawing::Point(112, 66);
	//this->button23->Location = System::Drawing::Point(203, 66);
	//this->button24->Location = System::Drawing::Point(20, 66);
	//this->MaximumSize = System::Drawing::Size(300, 508);
	//this->MinimumSize = System::Drawing::Size(300, 508);
	//this->label1->Location = System::Drawing::Point(257, 453);
}
	   //-------------- calculatrice base retour-------------
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	button17->Hide();
	button18->Hide();
	button19->Hide();
	button20->Show();
	button21->Hide();
	button22->Hide();
	button23->Hide();
	button24->Hide();
	button30->Hide();
	button34->Hide();
	button35->Hide();
	button36->Hide();
	button37->Hide();
	button38->Hide();
	button39->Hide();
	button40->Hide();
	this->button8->Location = System::Drawing::Point(112, 66);
	this->button4->Location = System::Drawing::Point(20, 66);
	this->button12->Location = System::Drawing::Point(203, 66);
	this->button1->Location = System::Drawing::Point(20, 117);
	this->button7->Location = System::Drawing::Point(112, 117);
	this->button11->Location = System::Drawing::Point(203, 117);
	this->button2->Location = System::Drawing::Point(20, 168);
	this->button6->Location = System::Drawing::Point(112, 168);
	this->button10->Location = System::Drawing::Point(203, 168);
	this->button3->Location = System::Drawing::Point(20, 219);
	this->button5->Location = System::Drawing::Point(112, 219);
	this->button9->Location = System::Drawing::Point(203, 219);
	this->button13->Location = System::Drawing::Point(20, 270);
	this->button14->Location = System::Drawing::Point(112, 270);
	this->button15->Location = System::Drawing::Point(203, 270);
	this->button16->Location = System::Drawing::Point(143, 319);
	this->button20->Location = System::Drawing::Point(20, 319);
	this->MaximumSize = System::Drawing::Size(300, 405);
	this->MinimumSize = System::Drawing::Size(20, 405);
	this->label1->Location = System::Drawing::Point(257, 351);
	this->textBox1->Size = System::Drawing::Size(248, 40);
	this->button16->Size = System::Drawing::Size(125, 31);
	this->button14->Size = System::Drawing::Size(65, 45);

	
}
	   //------------------------------Bouton cosinus-----------------------------
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	
	// Récupérer la valeur du TextBox
	double c = Double::Parse(textBox1->Text);

	// Calculer le cosinus de la valeur
	double result = cos(c);

	// Afficher le résultat dans le TextBox
	textBox1->Text = result.ToString();
}
	   //------------------------------Bouton tangente-----------------------------
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	// Récupérer la valeur du TextBox
	double t = Double::Parse(textBox1->Text);

	// Calculer le cosinus de la valeur
	double result = tan(t);

	// Afficher le résultat dans le TextBox
	textBox1->Text = result.ToString();
}
	   //------------------------------Bouton sinus-----------------------------
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	// Récupérer la valeur du TextBox
	double s = Double::Parse(textBox1->Text);

	// Calculer le cosinus de la valeur
	double result = sin(s);

	// Afficher le résultat dans le TextBox
	textBox1->Text = result.ToString();
}
	   //--------------  menu -------------
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->Hide();
	button2->Hide();
	button3->Hide();
	button4->Hide();
	button5->Hide();
	button6->Hide();
	button7->Hide();
	button8->Hide();
	button9->Hide();
	button10->Hide();
	button11->Hide();
	button12->Hide();
	button13->Hide();
	button14->Hide();
	button15->Hide();
	button16->Hide();
	button17->Hide();
	button18->Hide();
	button19->Hide();
	button20->Hide();
	button21->Hide();
	button22->Hide();
	button23->Hide();
	button24->Hide();
	button25->Hide();
	button26->Hide();
	button27->Show();
	button28->Show();
	button29->Show();
	button30->Hide();
	button37->Hide();
	button34->Show();
	button35->Hide();
	button36->Hide();
	button39->Hide();
	button38->Hide();
	button40->Hide();
	this->MaximumSize = System::Drawing::Size(300, 380);
	this->MinimumSize = System::Drawing::Size(20, 380);
	this->textBox1->Size = System::Drawing::Size(248, 40);
	this->button14->Size = System::Drawing::Size(65, 45);
}
	   //--------------bouton destiné a faire office de bouton retour pour le menu mais idée abandonné-------------
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {

}
	   //--------------chemin menu calculatrice simple-------------
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->Show();
	button2->Show();
	button3->Show();
	button4->Show();
	button5->Show();
	button6->Show();
	button7->Show();
	button8->Show();
	button9->Show();
	button10->Show();
	button11->Show();
	button12->Show();
	button13->Show();
	button14->Show();
	button15->Show();
	button16->Show();
	button17->Hide();
	button18->Hide();
	button19->Hide();
	button20->Show();
	button21->Hide();
	button22->Hide();
	button23->Hide();
	button24->Hide();
	button25->Show();
	button26->Hide();
	button27->Hide();
	button28->Hide();
	button29->Hide();
	button30->Hide();
	button34->Hide();
	button35->Hide();
	button37->Hide();
	button36->Hide();
	button38->Hide();
	button39->Hide();
	button40->Hide();
	this->button8->Location = System::Drawing::Point(112, 66);
	this->button4->Location = System::Drawing::Point(20, 66);
	this->button12->Location = System::Drawing::Point(203, 66);
	this->button1->Location = System::Drawing::Point(20, 117);
	this->button7->Location = System::Drawing::Point(112, 117);
	this->button11->Location = System::Drawing::Point(203, 117);
	this->button2->Location = System::Drawing::Point(20, 168);
	this->button6->Location = System::Drawing::Point(112, 168);
	this->button10->Location = System::Drawing::Point(203, 168);
	this->button3->Location = System::Drawing::Point(20, 219);
	this->button5->Location = System::Drawing::Point(112, 219);
	this->button9->Location = System::Drawing::Point(203, 219);
	this->button13->Location = System::Drawing::Point(20, 270);
	this->button14->Location = System::Drawing::Point(112, 270);
	this->button15->Location = System::Drawing::Point(203, 270);
	this->button16->Location = System::Drawing::Point(143, 319);
	this->button20->Location = System::Drawing::Point(20, 319);
	this->MaximumSize = System::Drawing::Size(300, 405);
	this->MinimumSize = System::Drawing::Size(20, 405);
	this->label1->Location = System::Drawing::Point(257, 351);
	this->button16->Size = System::Drawing::Size(125, 31);
	this->button14->Size = System::Drawing::Size(65, 45);

}
	   //--------------chemin menu calculatrice avancée-------------
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->Show();
	button2->Show();
	button3->Show();
	button4->Show();
	button5->Show();
	button6->Show();
	button7->Show();
	button8->Show();
	button9->Show();
	button10->Show();
	button11->Show();
	button12->Show();
	button13->Show();
	button14->Show();
	button15->Show();
	button16->Show();
	button17->Show();
	button18->Show();
	button19->Show();
	button20->Hide();
	button21->Show();
	button22->Show();
	button23->Show();
	button24->Show();
	button25->Show();
	button26->Hide();
	button27->Hide();
	button28->Hide();
	button29->Hide();
	button30->Hide();
	button17->Show();
	button18->Show();
	button19->Show();
	button20->Hide();
	button21->Show();
	button22->Show();
	button23->Show();
	button24->Show();
	button30->Hide();
	button34->Hide();
	button35->Hide();
	button36->Hide();
	button37->Hide();
	button38->Hide();
	button39->Hide();
	button40->Hide();
	this->Size = System::Drawing::Size(500, 500);
	this->button1->Location = System::Drawing::Point(20, 168);
	this->button2->Location = System::Drawing::Point(20, 219);
	this->button3->Location = System::Drawing::Point(20, 270);
	this->button4->Location = System::Drawing::Point(20, 117);
	this->button5->Location = System::Drawing::Point(112, 270);
	this->button6->Location = System::Drawing::Point(112, 219);
	this->button7->Location = System::Drawing::Point(112, 168);
	this->button8->Location = System::Drawing::Point(112, 117);
	this->button9->Location = System::Drawing::Point(203, 270);
	this->button10->Location = System::Drawing::Point(203, 219);
	this->button11->Location = System::Drawing::Point(203, 168);
	this->button12->Location = System::Drawing::Point(203, 117);
	this->button13->Location = System::Drawing::Point(20, 321);
	this->button14->Location = System::Drawing::Point(112, 321);
	this->button15->Location = System::Drawing::Point(203, 321); 
	this->button16->Location = System::Drawing::Point(143, 372);
	this->button21->Location = System::Drawing::Point(20, 372);
	this->button17->Location = System::Drawing::Point(20, 66);
	this->button18->Location = System::Drawing::Point(112, 66);
	this->button19->Location = System::Drawing::Point(203, 66);
	//this->button22->Location = System::Drawing::Point(112, 66);
	//this->button23->Location = System::Drawing::Point(203, 66);
	//this->button24->Location = System::Drawing::Point(20, 66);
	this->MaximumSize = System::Drawing::Size(381, 460);
	this->MinimumSize = System::Drawing::Size(381, 460);
	this->label1->Location = System::Drawing::Point(257, 402);
	this->textBox1->Size = System::Drawing::Size(330, 40);
	this->button16->Size = System::Drawing::Size(68, 31);
	this->button16->Location = System::Drawing::Point(200, 372);
	this->button21->Size = System::Drawing::Size(164, 31);
	this->label1->Location = System::Drawing::Point(330, 405);
}
	   //--------------chemin menu calculatrice IP-------------
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->Show();
	button2->Show();
	button3->Show();
	button4->Hide();
	button5->Show();
	button6->Show();
	button7->Show();
	button8->Hide();
	button9->Show();
	button10->Show();
	button11->Show();
	button12->Hide();
	button13->Hide();
	button14->Show();
	button15->Hide();
	button16->Show();
	button17->Hide();
	button18->Hide();
	button19->Hide();
	button20->Hide();
	button21->Hide();
	button22->Hide();
	button23->Hide();
	button24->Hide();
	button25->Show();
	button26->Hide();
	button27->Hide();
	button28->Hide();
	button29->Hide();
	button30->Hide();
	button34->Hide();
	button35->Hide();
	button36->Hide();
	button37->Show();
	button38->Show();
	button39->Show();
	button40->Show();
	this->button8->Location = System::Drawing::Point(112, 66);
	this->button4->Location = System::Drawing::Point(20, 66);
	this->button12->Location = System::Drawing::Point(203, 66);
	this->button1->Location = System::Drawing::Point(20, 117);
	this->button7->Location = System::Drawing::Point(112, 117);
	this->button11->Location = System::Drawing::Point(203, 117);
	this->button2->Location = System::Drawing::Point(20, 168);
	this->button6->Location = System::Drawing::Point(112, 168);
	this->button10->Location = System::Drawing::Point(203, 168);
	this->button3->Location = System::Drawing::Point(20, 219);
	this->button5->Location = System::Drawing::Point(112, 219);
	this->button9->Location = System::Drawing::Point(203, 219);
	this->button13->Location = System::Drawing::Point(20, 270);
	this->button14->Location = System::Drawing::Point(20, 270);
	this->button15->Location = System::Drawing::Point(203, 270);
	this->button16->Location = System::Drawing::Point(20, 319);
	this->button20->Location = System::Drawing::Point(20, 319);
	this->button30->Location = System::Drawing::Point(20, 66);
	this->MaximumSize = System::Drawing::Size(300, 405);
	this->MinimumSize = System::Drawing::Size(20, 405);
	this->label1->Location = System::Drawing::Point(257, 351);
	this->button16->Size = System::Drawing::Size(250, 31);
	this->button14->Size = System::Drawing::Size(250, 45);
	this->button30->Size = System::Drawing::Size(250, 31);
}
	   //-------------------------------------Bouton IP conversion, non fonctionnel pour l'instant---------------------------------------------------------------
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ ipAddressStr = textBox1->Text;

	// Convertir la chaîne System::String en unsigned long
	unsigned long ipAddressBin = System::UInt32::Parse(ipAddressStr);

	// Convertir l'adresse IP en décimal pointé
	char* ipAddressDotted = inet_ntoa(*(in_addr*)&ipAddressBin);

	// Convertir la chaîne C en System::String
	String^ ipAddressDottedStr = gcnew String(ipAddressDotted);

	// Afficher le résultat dans le TextBox
	textBox1->Text = ipAddressDottedStr;
}
	   //----------------------------------------Valeur negatif------------------------------------------------------------
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
	// Récupération de la valeur actuelle dans le TextBox
	String^ valeurActuelle = textBox1->Text;

	// Conversion de la valeur actuelle en nombre
	double nombre = Double::Parse(valeurActuelle);

	// Inversion du signe du nombre
	nombre *= -1;

	// Conversion du nombre inversé en chaîne de caractères
	String^ nombreString = Convert::ToString(nombre);

	// Affichage du nombre inversé dans le TextBox
	textBox1->Text = nombreString;
}
	   //----------------------------------------------Bouton PI------------------------------------------------------------------
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
	// Récupérer la valeur du TextBox
	double p = Double::Parse(textBox1->Text);

	// Calculer le cosinus de la valeur
	double result = p * 3.14159265359;

	// Afficher le résultat dans le TextBox
	textBox1->Text = result.ToString();
}
	   //--------------------------------------------------Bouton Log--------------------------------------------------------------
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
	
	double a = 2.0; // la base arbitraire
	
	// Récupération de la valeur actuelle dans le TextBox
	String^ valeurActuelle = textBox1->Text;

	// Conversion de la valeur actuelle en nombre
	double nombre = Double::Parse(valeurActuelle);

	// Calcul du logarithme du nombre
	double resultat = log(nombre) / log(2);

	// Conversion du résultat en chaîne de caractères
	String^ resultatString = Convert::ToString(resultat);

	// Affichage du résultat dans le TextBox
	textBox1->Text = resultatString;
}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {

	button1->Show();
	button2->Show();
	button3->Show();
	button4->Hide();
	button5->Show();
	button6->Show();
	button7->Show();
	button8->Hide();
	button9->Show();
	button10->Show();
	button11->Show();
	button12->Hide();
	button13->Hide();
	button14->Show();
	button15->Hide();
	button16->Show();
	button17->Hide();
	button18->Hide();
	button19->Hide();
	button20->Hide();
	button21->Hide();
	button22->Hide();
	button23->Hide();
	button24->Hide();
	button25->Show();
	button26->Hide();
	button27->Hide();
	button28->Hide();
	button29->Hide();
	button30->Hide();
	button34->Hide();
	button35->Show();
	button36->Show();
	this->button8->Location = System::Drawing::Point(112, 66);
	this->button4->Location = System::Drawing::Point(20, 66);
	this->button12->Location = System::Drawing::Point(203, 66);
	this->button1->Location = System::Drawing::Point(20, 117);
	this->button7->Location = System::Drawing::Point(112, 117);
	this->button11->Location = System::Drawing::Point(203, 117);
	this->button2->Location = System::Drawing::Point(20, 168);
	this->button6->Location = System::Drawing::Point(112, 168);
	this->button10->Location = System::Drawing::Point(203, 168);
	this->button3->Location = System::Drawing::Point(20, 219);
	this->button5->Location = System::Drawing::Point(112, 219);
	this->button9->Location = System::Drawing::Point(203, 219);
	this->button13->Location = System::Drawing::Point(20, 270);
	this->button14->Location = System::Drawing::Point(20, 270);
	this->button15->Location = System::Drawing::Point(203, 270);
	this->button16->Location = System::Drawing::Point(20, 319);
	this->button20->Location = System::Drawing::Point(20, 319);
	this->MaximumSize = System::Drawing::Size(300, 405);
	this->MinimumSize = System::Drawing::Size(20, 405);
	this->label1->Location = System::Drawing::Point(257, 351);
	this->button16->Size = System::Drawing::Size(250, 31);
	this->button14->Size = System::Drawing::Size(250, 45);

}
	   //--------------Btn celsius---------------
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
	// Récupérer la valeur du TextBox
	double fah = Double::Parse(textBox1->Text);

	// Calculer le cosinus de la valeur
	double result = (fah - 32) * 5 / 9;

	// Afficher le résultat dans le TextBox
	textBox1->Text = result.ToString();
}
	   //------------------------------Bouton convert celsius to farheneit-----------------------------
private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
	// Récupérer la valeur du TextBox
	double cels = Double::Parse(textBox1->Text);

	// Calculer le cosinus de la valeur
	double result = (cels * 9 / 5) + 32;

	// Afficher le résultat dans le TextBox
	textBox1->Text = result.ToString();
}
//private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
//	
//	double cels = Double::Parse(textBox1->Text);
//
//	// Convertir la valeur en binaire en utilisant la méthode de division par 2
//	String^ binary = DecimalToBinary(decimalValue);
//
//	// Afficher le résultat dans le TextBox
//	textBox1->Text = binary;
//	
//	if (decimalValue == 0)
//	{
//		binary = "0";
//	}
//	else
//	{
//		while (decimalValue > 0)
//		{
//			int remainder = decimalValue % 2;
//			binary = remainder.ToString() + binary;
//			decimalValue /= 2;
//		}
//	}
//
//	return binary;
//}

	   //private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
		  // int var = System::Convert::ToDouble(textBox1->Text);
			
		  // textBox1->Text = "";

		  // while (var / 2 != 0)
		  // {
			 //  textBox1->Text = (var % 2) + textBox1->Text;
			 //  var = var % 2;
		  // } 
		  // textBox1->Text = var.ToString();

	   //}


			  private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
				  int var = System::Convert::ToDouble(textBox1->Text);

				  textBox1->Text = "";

				  std::string binary = "";

				  while (var > 0) {
					  binary = (var % 2 == 0 ? "0" : "1") + binary;
					  var /= 2;
				  }

				  textBox1->Text = gcnew System::String(binary.c_str());
			  }




private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ binaryString = textBox1->Text;
	int decimalValue = 0;

	for (int i = 0; i < binaryString->Length; i++) {
		int binaryDigit = binaryString[i] - '0';
		decimalValue = decimalValue * 2 + binaryDigit;
	}
	textBox1->Text = decimalValue.ToString();
}
private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e) {
	int decimalValue = System::Convert::ToInt32(textBox1->Text);
	System::String^ hexValue = decimalValue.ToString("X");
	textBox1->Text = hexValue;
}
private: System::Void button41_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ currentText = textBox1->Text;
	textBox1->Text = currentText + ",";
}
private: System::Void button40_Click(System::Object^ sender, System::EventArgs^ e) {
	int decimalValue = System::Convert::ToInt32(textBox1->Text);
	System::String^ octalValue = System::Convert::ToString(decimalValue, 8);
	textBox1->Text = octalValue;
}
};
}