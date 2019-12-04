#pragma once

#include <fstream>
#include <cstring>
#include "keyboard.h"
namespace Training {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ choose
	/// </summary>
	public ref class choose : public System::Windows::Forms::Form
	{

	public:
		String ^log;
		choose(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~choose()
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

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(43, 79);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(224, 71);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ћегкий";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &choose::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(206, 156);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(224, 71);
			this->button2->TabIndex = 1;
			this->button2->Text = L"—редний";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &choose::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(368, 233);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(224, 71);
			this->button3->TabIndex = 2;
			this->button3->Text = L"—ложный";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &choose::button3_Click);
			// 
			// choose
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(634, 429);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"choose";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"choose";
			this->ResumeLayout(false);

		}
#pragma endregion

	keyboard ^key = gcnew keyboard;
	
	private: void RandomN()
	{
		srand(time(NULL));
		
		int i = rand() % 13, i2 = -1;
		char str[256];
		std::ifstream file("keyboard.txt");
		while (i2 != i)
		{
			file.getline(str, 256);
			i2++;
		}
		String ^s = gcnew String(str);
		key->ChangeLabel(s);
	}
			 
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
		key->log = log;
		RandomN();
		key->time = 30;
		key->ChangeLevel();
		key->ChangeLabel2(30);
		key->ShowDialog();
		this->Close();
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
		key->log = log;
		RandomN();
		key->time = 20;
		key->ChangeLevel();
		key->ChangeLabel2(20);
		key->ShowDialog();
		this->Close();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
		key->log = log;
		RandomN();
		key->time = 10;
		key->ChangeLevel();
		key->ChangeLabel2(10);
		key->ShowDialog();
		this->Close();
	}

};
}
