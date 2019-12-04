#pragma once
#include <fstream>
#include "MyForm.h"
#include "Dialog.h"

namespace Training {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Сводка для Registration
	/// </summary>
	public ref class Registration : public System::Windows::Forms::Form
	{
	public:
		Registration(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Registration()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  TBLogin;
	private: System::Windows::Forms::TextBox^  TBPassword;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Registration::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TBLogin = (gcnew System::Windows::Forms::TextBox());
			this->TBPassword = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(178, 136);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Логин:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(178, 206);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Пароль:";
			// 
			// TBLogin
			// 
			this->TBLogin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TBLogin->Location = System::Drawing::Point(182, 158);
			this->TBLogin->Name = L"TBLogin";
			this->TBLogin->Size = System::Drawing::Size(296, 20);
			this->TBLogin->TabIndex = 2;
			// 
			// TBPassword
			// 
			this->TBPassword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TBPassword->Location = System::Drawing::Point(182, 228);
			this->TBPassword->Name = L"TBPassword";
			this->TBPassword->PasswordChar = '*';
			this->TBPassword->Size = System::Drawing::Size(296, 20);
			this->TBPassword->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(243, 283);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 37);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Зарегистрироваться";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Registration::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(634, 133);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// Registration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(634, 411);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->TBPassword);
			this->Controls->Add(this->TBLogin);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"Registration";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registration";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//void CloseForm
#pragma endregion

	public: void Change()
	{
		label2->Text = "Новый пароль";
		button1->Text = "Сменить пароль";
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		System::String ^ managedString1 = TBLogin->Text;
		System::String ^ managedString2 = TBPassword->Text;
		char* log = (char*)(void*)Marshal::StringToHGlobalAnsi(managedString1);
		char* pas = (char*)(void*)Marshal::StringToHGlobalAnsi(managedString2);
		char strfile[256];
		if (TBLogin->Text == "")
		{
			Dialog ^ not = gcnew Dialog;
			not->ChangeLabel("Введите логин");
			not->Show();
			return;
		}
		if (TBPassword->Text == "")
		{
			Dialog ^ not = gcnew Dialog;
			not->ChangeLabel("Введите пароль");
			not->Show();
			return;
		}
		std::ifstream login("login.txt");
		std::ofstream copy("copy.txt");
		if (button1->Text != "Сменить пароль")
		{
			while (!login.eof())
			{
				login.getline(strfile, 256);
				if (strcmp(strfile, log) == 0)
				{
					Dialog ^exist = gcnew Dialog;
					exist->ChangeLabel("Такой логин уже зарегистрирован");
					TBLogin->Text = "";
					TBPassword->Text = "";
					exist->Show();
					return;
				}
			}
			login.close();
			std::ifstream login2("login.txt");
			while (!login2.eof())
			{
				login2.getline(strfile, 256);
				copy << strfile << std::endl;
			}
			copy << log << std::endl << pas;
			login2.close();
			copy.close();
			remove("login.txt");
			rename("copy.txt", "login.txt");
			std::ofstream score("score.txt", std::ios_base::app);
			score << std::endl << log << std::endl << "0" << std::endl << "0" << std::endl << "0";
			Dialog ^dia = gcnew Dialog();
			dia->ShowDialog();
			this->Close();
		}
		else
		{
			bool b = false, strend = false;
			while (!login.eof())
			{
				login.getline(strfile, 256);
				if (strcmp(strfile, log) == 0)
				{
					b = true;
					if (strend) copy << std::endl << log << std::endl;
					else copy << log;
					login.getline(strfile, 256);
					copy << std::endl << pas;
				}
				else
				{
					if (strend) copy << std::endl << strfile;
					else copy << strfile;
				}
				strend = true;
			}
			login.close();
			copy.close();
			remove("login.txt");
			rename("copy.txt", "login.txt");
			Dialog ^dia = gcnew Dialog();
			if (!b) dia->ChangeLabel("Пользователя с таким логином нет");
			TBLogin->Text = "";
			TBPassword->Text = "";
			dia->ShowDialog();
			if (b) this->Close();
		}
	}
};
}
