#pragma once
#include <iostream>
#include <Windows.h>
#include <fstream>
#include "Registration.h"
#include "Dialog.h"
#include "menu.h"

namespace Training {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	//using namespace System::Threading;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  TBLogin;
	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  TBPassword;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  Enter;
	private: System::Windows::Forms::Button^  Register;


	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->TBLogin = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TBPassword = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Enter = (gcnew System::Windows::Forms::Button());
			this->Register = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// TBLogin
			// 
			this->TBLogin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TBLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TBLogin->Location = System::Drawing::Point(182, 158);
			this->TBLogin->Name = L"TBLogin";
			this->TBLogin->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TBLogin->Size = System::Drawing::Size(296, 20);
			this->TBLogin->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label1->Location = System::Drawing::Point(178, 136);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(55, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Логин:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TBPassword
			// 
			this->TBPassword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TBPassword->Location = System::Drawing::Point(182, 228);
			this->TBPassword->Name = L"TBPassword";
			this->TBPassword->PasswordChar = '*';
			this->TBPassword->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TBPassword->Size = System::Drawing::Size(296, 20);
			this->TBPassword->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(178, 206);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label2->Size = System::Drawing::Size(63, 19);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Пароль:";
			// 
			// Enter
			// 
			this->Enter->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Enter->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Enter->Location = System::Drawing::Point(265, 291);
			this->Enter->Name = L"Enter";
			this->Enter->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Enter->Size = System::Drawing::Size(113, 35);
			this->Enter->TabIndex = 4;
			this->Enter->Text = L"Войти";
			this->Enter->UseVisualStyleBackColor = true;
			this->Enter->Click += gcnew System::EventHandler(this, &MyForm::Enter_Click);
			// 
			// Register
			// 
			this->Register->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Register->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Register->Location = System::Drawing::Point(265, 343);
			this->Register->Name = L"Register";
			this->Register->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Register->Size = System::Drawing::Size(113, 35);
			this->Register->TabIndex = 5;
			this->Register->Text = L"Регистрация";
			this->Register->UseVisualStyleBackColor = true;
			this->Register->Click += gcnew System::EventHandler(this, &MyForm::Register_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(634, 133);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->linkLabel1->Location = System::Drawing::Point(179, 251);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(104, 15);
			this->linkLabel1->TabIndex = 7;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Забыли пароль\?";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(634, 411);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Register);
			this->Controls->Add(this->Enter);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->TBPassword);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TBLogin);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Keyboard";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	//Thread ^th;

	//public: System::String ^GetName()
	//{
	//	return TBLogin->Text;
	//}
	private: System::Void Enter_Click(System::Object^  sender, System::EventArgs^  e) {
		if (TBLogin->Text == "")
		{
			Dialog ^not = gcnew Dialog;
			not->ChangeLabel("Введите логин");
			not->Show();
			TBPassword->Text = "";
			return;
		}
		else
			if (TBPassword->Text == "")
			{
				Dialog ^ not = gcnew Dialog;
				not->ChangeLabel("Введите пароль");
				not->Show();
				return;
			}
		System::String ^ managedString1 = TBLogin->Text;
		System::String ^ managedString2 = TBPassword->Text;
		char* log = (char*)(void*)Marshal::StringToHGlobalAnsi(managedString1);
		char* pas = (char*)(void*)Marshal::StringToHGlobalAnsi(managedString2);
		char *strfile = new char[256];
		bool b = false;
		std::ifstream FILE("login.txt");
		while (!FILE.eof())
		{
			FILE.getline(strfile, 256);
			if (strcmp(strfile, log) == 0)
			{
				b = true;
				FILE.getline(strfile, 256);
				if (strcmp(strfile, pas) != 0)
				{
					Dialog ^wrong = gcnew Dialog;
					wrong->ChangeLabel("Неверный пароль");
					wrong->Show();
					TBPassword->Text = "";
					return;
				}
				else
				{
					this->Visible = false;
					menu ^mmm = gcnew menu;
					mmm->ChangeLabel(TBLogin->Text);
					mmm->ShowDialog();
					TBLogin->Text = "";
					TBPassword->Text = "";
					this->Visible = true;
				}
			}
			else FILE.getline(strfile, 256);
		}
		if (!b)
		{
			Dialog ^NotExist = gcnew Dialog;
			NotExist->ChangeLabel("Пользователя с таким логином нет");
			TBLogin->Text = "";
			TBPassword->Text = "";
			NotExist->ShowDialog();
			return;
		}
	}

	private: System::Void Register_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
		Registration ^reg = gcnew Registration();
		reg->ShowDialog();
		TBLogin->Text = "";
		TBPassword->Text = "";
		this->Visible = true;
		//Application::OpenForms[L"MyForm"]->Close();
		//this->Close();
		//Application::Run(gcnew Registration());
		//th = gcnew Thread(opennew(&reg));
		//th->SetApartmentState(ApartmentState::STA);
		//th->Start();
	}

private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	this->Visible = false;
	Registration ^Forget = gcnew Registration;
	Forget->Change();
	Forget->ShowDialog();
	TBLogin->Text = "";
	TBPassword->Text = "";
	this->Visible = true;
}
};
}
