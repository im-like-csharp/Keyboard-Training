#pragma once
#include <ctime>
#include <cstdlib>
#include <fstream>
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

	/// <summary>
	/// —водка дл€ keyboard
	/// </summary>
	public ref class keyboard : public System::Windows::Forms::Form
	{
	private: 
		//int num = 1;
		//String ^text = this->textBox1->Text, ^print = this->label2->Text;
	public:
		int time = 31, level = 0;

	public:
		String ^log;
		keyboard(void)
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
		~keyboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  q;
	private: System::Windows::Forms::Button^  w;
	private: System::Windows::Forms::Button^  e1;
	private: System::Windows::Forms::Button^  r;
	private: System::Windows::Forms::Button^  t;
	private: System::Windows::Forms::Button^  p;
	private: System::Windows::Forms::Button^  o;
	private: System::Windows::Forms::Button^  i;
	private: System::Windows::Forms::Button^  u;
	private: System::Windows::Forms::Button^  y;
	private: System::Windows::Forms::Button^  space;
	private: System::Windows::Forms::Button^  l;
	private: System::Windows::Forms::Button^  k;
	private: System::Windows::Forms::Button^  j;
	private: System::Windows::Forms::Button^  h;
	private: System::Windows::Forms::Button^  g;
	private: System::Windows::Forms::Button^  f;
	private: System::Windows::Forms::Button^  d;
	private: System::Windows::Forms::Button^  s;
	private: System::Windows::Forms::Button^  a;
	private: System::Windows::Forms::Button^  m;
	private: System::Windows::Forms::Button^  n;
	private: System::Windows::Forms::Button^  b;
	private: System::Windows::Forms::Button^  v;
	private: System::Windows::Forms::Button^  c;
	private: System::Windows::Forms::Button^  x;
	private: System::Windows::Forms::Button^  z;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::ComponentModel::IContainer^  components;
	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->q = (gcnew System::Windows::Forms::Button());
			this->w = (gcnew System::Windows::Forms::Button());
			this->e1 = (gcnew System::Windows::Forms::Button());
			this->r = (gcnew System::Windows::Forms::Button());
			this->t = (gcnew System::Windows::Forms::Button());
			this->p = (gcnew System::Windows::Forms::Button());
			this->o = (gcnew System::Windows::Forms::Button());
			this->i = (gcnew System::Windows::Forms::Button());
			this->u = (gcnew System::Windows::Forms::Button());
			this->y = (gcnew System::Windows::Forms::Button());
			this->space = (gcnew System::Windows::Forms::Button());
			this->l = (gcnew System::Windows::Forms::Button());
			this->k = (gcnew System::Windows::Forms::Button());
			this->j = (gcnew System::Windows::Forms::Button());
			this->h = (gcnew System::Windows::Forms::Button());
			this->g = (gcnew System::Windows::Forms::Button());
			this->f = (gcnew System::Windows::Forms::Button());
			this->d = (gcnew System::Windows::Forms::Button());
			this->s = (gcnew System::Windows::Forms::Button());
			this->a = (gcnew System::Windows::Forms::Button());
			this->m = (gcnew System::Windows::Forms::Button());
			this->n = (gcnew System::Windows::Forms::Button());
			this->b = (gcnew System::Windows::Forms::Button());
			this->v = (gcnew System::Windows::Forms::Button());
			this->c = (gcnew System::Windows::Forms::Button());
			this->x = (gcnew System::Windows::Forms::Button());
			this->z = (gcnew System::Windows::Forms::Button());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(47, 62);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(792, 23);
			this->textBox1->TabIndex = 0;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &keyboard::textBox1_KeyDown);
			this->textBox1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &keyboard::textBox1_KeyUp);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::Window;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(47, 110);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(792, 21);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &keyboard::timer1_Tick);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(41, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 39);
			this->label2->TabIndex = 2;
			this->label2->Text = L"label2";
			// 
			// q
			// 
			this->q->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->q->Location = System::Drawing::Point(90, 158);
			this->q->Margin = System::Windows::Forms::Padding(50);
			this->q->Name = L"q";
			this->q->Size = System::Drawing::Size(40, 40);
			this->q->TabIndex = 3;
			this->q->Text = L"Q";
			this->q->UseVisualStyleBackColor = true;
			// 
			// w
			// 
			this->w->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->w->Location = System::Drawing::Point(150, 158);
			this->w->Name = L"w";
			this->w->Size = System::Drawing::Size(40, 40);
			this->w->TabIndex = 4;
			this->w->Text = L"W";
			this->w->UseVisualStyleBackColor = true;
			// 
			// e1
			// 
			this->e1->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->e1->Location = System::Drawing::Point(210, 158);
			this->e1->Name = L"e1";
			this->e1->Size = System::Drawing::Size(40, 40);
			this->e1->TabIndex = 5;
			this->e1->Text = L"E";
			this->e1->UseVisualStyleBackColor = true;
			// 
			// r
			// 
			this->r->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->r->Location = System::Drawing::Point(270, 158);
			this->r->Name = L"r";
			this->r->Size = System::Drawing::Size(40, 40);
			this->r->TabIndex = 6;
			this->r->Text = L"R";
			this->r->UseVisualStyleBackColor = true;
			// 
			// t
			// 
			this->t->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->t->Location = System::Drawing::Point(330, 158);
			this->t->Name = L"t";
			this->t->Size = System::Drawing::Size(40, 40);
			this->t->TabIndex = 7;
			this->t->Text = L"T";
			this->t->UseVisualStyleBackColor = true;
			// 
			// p
			// 
			this->p->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->p->Location = System::Drawing::Point(630, 158);
			this->p->Name = L"p";
			this->p->Size = System::Drawing::Size(40, 40);
			this->p->TabIndex = 12;
			this->p->Text = L"P";
			this->p->UseVisualStyleBackColor = true;
			// 
			// o
			// 
			this->o->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->o->Location = System::Drawing::Point(570, 158);
			this->o->Name = L"o";
			this->o->Size = System::Drawing::Size(40, 40);
			this->o->TabIndex = 11;
			this->o->Text = L"O";
			this->o->UseVisualStyleBackColor = true;
			// 
			// i
			// 
			this->i->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->i->Location = System::Drawing::Point(510, 158);
			this->i->Name = L"i";
			this->i->Size = System::Drawing::Size(40, 40);
			this->i->TabIndex = 10;
			this->i->Text = L"I";
			this->i->UseVisualStyleBackColor = true;
			// 
			// u
			// 
			this->u->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->u->Location = System::Drawing::Point(450, 158);
			this->u->Name = L"u";
			this->u->Size = System::Drawing::Size(40, 40);
			this->u->TabIndex = 9;
			this->u->Text = L"U";
			this->u->UseVisualStyleBackColor = true;
			// 
			// y
			// 
			this->y->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->y->Location = System::Drawing::Point(390, 158);
			this->y->Name = L"y";
			this->y->Size = System::Drawing::Size(40, 40);
			this->y->TabIndex = 8;
			this->y->Text = L"Y";
			this->y->UseVisualStyleBackColor = true;
			// 
			// space
			// 
			this->space->Location = System::Drawing::Point(230, 324);
			this->space->Name = L"space";
			this->space->Size = System::Drawing::Size(390, 45);
			this->space->TabIndex = 30;
			this->space->Text = L"SPACE";
			this->space->UseVisualStyleBackColor = true;
			// 
			// l
			// 
			this->l->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->l->Location = System::Drawing::Point(590, 210);
			this->l->Name = L"l";
			this->l->Size = System::Drawing::Size(40, 40);
			this->l->TabIndex = 39;
			this->l->Text = L"L";
			this->l->UseVisualStyleBackColor = true;
			// 
			// k
			// 
			this->k->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->k->Location = System::Drawing::Point(530, 210);
			this->k->Name = L"k";
			this->k->Size = System::Drawing::Size(40, 40);
			this->k->TabIndex = 38;
			this->k->Text = L"K";
			this->k->UseVisualStyleBackColor = true;
			// 
			// j
			// 
			this->j->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->j->Location = System::Drawing::Point(470, 210);
			this->j->Name = L"j";
			this->j->Size = System::Drawing::Size(40, 40);
			this->j->TabIndex = 37;
			this->j->Text = L"J";
			this->j->UseVisualStyleBackColor = true;
			// 
			// h
			// 
			this->h->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->h->Location = System::Drawing::Point(410, 210);
			this->h->Name = L"h";
			this->h->Size = System::Drawing::Size(40, 40);
			this->h->TabIndex = 36;
			this->h->Text = L"H";
			this->h->UseVisualStyleBackColor = true;
			// 
			// g
			// 
			this->g->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->g->Location = System::Drawing::Point(350, 210);
			this->g->Name = L"g";
			this->g->Size = System::Drawing::Size(40, 40);
			this->g->TabIndex = 35;
			this->g->Text = L"G";
			this->g->UseVisualStyleBackColor = true;
			// 
			// f
			// 
			this->f->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f->Location = System::Drawing::Point(290, 210);
			this->f->Name = L"f";
			this->f->Size = System::Drawing::Size(40, 40);
			this->f->TabIndex = 34;
			this->f->Text = L"F";
			this->f->UseVisualStyleBackColor = true;
			// 
			// d
			// 
			this->d->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->d->Location = System::Drawing::Point(230, 210);
			this->d->Name = L"d";
			this->d->Size = System::Drawing::Size(40, 40);
			this->d->TabIndex = 33;
			this->d->Text = L"D";
			this->d->UseVisualStyleBackColor = true;
			// 
			// s
			// 
			this->s->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->s->Location = System::Drawing::Point(170, 210);
			this->s->Name = L"s";
			this->s->Size = System::Drawing::Size(40, 40);
			this->s->TabIndex = 32;
			this->s->Text = L"S";
			this->s->UseVisualStyleBackColor = true;
			// 
			// a
			// 
			this->a->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->a->Location = System::Drawing::Point(110, 210);
			this->a->Margin = System::Windows::Forms::Padding(50);
			this->a->Name = L"a";
			this->a->Size = System::Drawing::Size(40, 40);
			this->a->TabIndex = 31;
			this->a->Text = L"A";
			this->a->UseVisualStyleBackColor = true;
			// 
			// m
			// 
			this->m->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->m->Location = System::Drawing::Point(490, 262);
			this->m->Name = L"m";
			this->m->Size = System::Drawing::Size(40, 40);
			this->m->TabIndex = 46;
			this->m->Text = L"M";
			this->m->UseVisualStyleBackColor = true;
			// 
			// n
			// 
			this->n->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->n->Location = System::Drawing::Point(430, 262);
			this->n->Name = L"n";
			this->n->Size = System::Drawing::Size(40, 40);
			this->n->TabIndex = 45;
			this->n->Text = L"N";
			this->n->UseVisualStyleBackColor = true;
			// 
			// b
			// 
			this->b->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b->Location = System::Drawing::Point(370, 262);
			this->b->Name = L"b";
			this->b->Size = System::Drawing::Size(40, 40);
			this->b->TabIndex = 44;
			this->b->Text = L"B";
			this->b->UseVisualStyleBackColor = true;
			// 
			// v
			// 
			this->v->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->v->Location = System::Drawing::Point(310, 262);
			this->v->Name = L"v";
			this->v->Size = System::Drawing::Size(40, 40);
			this->v->TabIndex = 43;
			this->v->Text = L"V";
			this->v->UseVisualStyleBackColor = true;
			// 
			// c
			// 
			this->c->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->c->Location = System::Drawing::Point(250, 262);
			this->c->Name = L"c";
			this->c->Size = System::Drawing::Size(40, 40);
			this->c->TabIndex = 42;
			this->c->Text = L"C";
			this->c->UseVisualStyleBackColor = true;
			// 
			// x
			// 
			this->x->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->x->Location = System::Drawing::Point(190, 262);
			this->x->Name = L"x";
			this->x->Size = System::Drawing::Size(40, 40);
			this->x->TabIndex = 41;
			this->x->Text = L"X";
			// 
			// z
			// 
			this->z->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->z->Location = System::Drawing::Point(130, 262);
			this->z->Margin = System::Windows::Forms::Padding(50);
			this->z->Name = L"z";
			this->z->Size = System::Drawing::Size(40, 40);
			this->z->TabIndex = 40;
			this->z->Text = L"Z";
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Interval = 5;
			this->timer2->Tick += gcnew System::EventHandler(this, &keyboard::timer2_Tick);
			// 
			// keyboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(897, 514);
			this->Controls->Add(this->m);
			this->Controls->Add(this->n);
			this->Controls->Add(this->b);
			this->Controls->Add(this->v);
			this->Controls->Add(this->c);
			this->Controls->Add(this->x);
			this->Controls->Add(this->z);
			this->Controls->Add(this->l);
			this->Controls->Add(this->k);
			this->Controls->Add(this->j);
			this->Controls->Add(this->h);
			this->Controls->Add(this->g);
			this->Controls->Add(this->f);
			this->Controls->Add(this->d);
			this->Controls->Add(this->s);
			this->Controls->Add(this->a);
			this->Controls->Add(this->space);
			this->Controls->Add(this->p);
			this->Controls->Add(this->o);
			this->Controls->Add(this->i);
			this->Controls->Add(this->u);
			this->Controls->Add(this->y);
			this->Controls->Add(this->t);
			this->Controls->Add(this->r);
			this->Controls->Add(this->e1);
			this->Controls->Add(this->w);
			this->Controls->Add(this->q);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"keyboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Keyboard";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &keyboard::keyboard_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: void ChangeLabel2(int a)
	{
		this->label2->Text = Convert::ToString(a);
	}

	public: void ChangeLabel(String ^str)
	{
		this->label1->Text = str;
	}
	
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		this->label2->Text = Convert::ToString(time);
		if (time == 0)
		{
			//label2->Text = "0";
			timer1->Stop();
			timer2->Stop();
		}
		time--;
	}


private: System::Void textBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::Q)
	{
		q->BackColor = System::Drawing::SystemColors::HotTrack;
	}
	if (e->KeyCode == Keys::W)
	{
		w->BackColor = System::Drawing::SystemColors::HotTrack;
	}
	if (e->KeyCode == Keys::E)
	{
		e1->BackColor = System::Drawing::SystemColors::HotTrack;
	}
	if (e->KeyCode == Keys::R)
	{
		r->BackColor = System::Drawing::SystemColors::HotTrack;
	}
	if (e->KeyCode == Keys::T)
	{
		t->BackColor = System::Drawing::SystemColors::HotTrack;
	}
	if (e->KeyCode == Keys::Y)
	{
		y->BackColor = System::Drawing::SystemColors::HotTrack;
	}
	if (e->KeyCode == Keys::U)
	{
		u->BackColor = System::Drawing::SystemColors::HotTrack;
	}
	if (e->KeyCode == Keys::I)
	{
		i->BackColor = System::Drawing::SystemColors::HotTrack;
	}
	if (e->KeyCode == Keys::O)
	{
		o->BackColor = System::Drawing::SystemColors::HotTrack;
	}
	if (e->KeyCode == Keys::P)
	{
		p->BackColor = System::Drawing::SystemColors::HotTrack;
	}
	if (e->KeyCode == Keys::A)
	{
		a->BackColor = System::Drawing::SystemColors::HotTrack;
	}
	if (e->KeyCode == Keys::S)
	{
		s->BackColor = System::Drawing::SystemColors::HotTrack;
	}
	if (e->KeyCode == Keys::D)
	{
		d->BackColor = System::Drawing::SystemColors::HotTrack;
	}
	if (e->KeyCode == Keys::F)
	{
		f->BackColor = System::Drawing::SystemColors::HotTrack;
	}
	if (e->KeyCode == Keys::G)
	{
		g->BackColor = System::Drawing::SystemColors::HotTrack;
	}
	if (e->KeyCode == Keys::H)
	{
		h->BackColor = System::Drawing::SystemColors::HotTrack;
	}
	if (e->KeyCode == Keys::J)
	{
		j->BackColor = System::Drawing::SystemColors::HotTrack;
	}
	if (e->KeyCode == Keys::K)
	{
		k->BackColor = System::Drawing::SystemColors::HotTrack;
	}
	if (e->KeyCode == Keys::L)
	{
		l->BackColor = System::Drawing::SystemColors::HotTrack;
	}
	if (e->KeyCode == Keys::Z)
	{
		z->BackColor = System::Drawing::SystemColors::HotTrack;
	}
	if (e->KeyCode == Keys::X)
	{
		x->BackColor = System::Drawing::SystemColors::HotTrack;
	}
	if (e->KeyCode == Keys::C)
	{
		c->BackColor = System::Drawing::SystemColors::HotTrack;
	}
	if (e->KeyCode == Keys::V)
	{
		v->BackColor = System::Drawing::SystemColors::HotTrack;
	}
	if (e->KeyCode == Keys::B)
	{
		b->BackColor = System::Drawing::SystemColors::HotTrack;
	}
	if (e->KeyCode == Keys::N)
	{
		n->BackColor = System::Drawing::SystemColors::HotTrack;
	}
	if (e->KeyCode == Keys::M)
	{
		m->BackColor = System::Drawing::SystemColors::HotTrack;
	}
	if (e->KeyCode == Keys::Space)
	{
		space->BackColor = System::Drawing::SystemColors::HotTrack;
	}
}
private: System::Void textBox1_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	//num++;
	if (e->KeyCode == Keys::Q)
	{
		q->BackColor = System::Drawing::SystemColors::ControlLight;
	}
	if (e->KeyCode == Keys::W)
	{
		w->BackColor = System::Drawing::SystemColors::ControlLight;
	}
	if (e->KeyCode == Keys::E)
	{
		e1->BackColor = System::Drawing::SystemColors::ControlLight;
	}
	if (e->KeyCode == Keys::R)
	{
		r->BackColor = System::Drawing::SystemColors::ControlLight;
	}
	if (e->KeyCode == Keys::T)
	{
		t->BackColor = System::Drawing::SystemColors::ControlLight;
	}
	if (e->KeyCode == Keys::Y)
	{
		y->BackColor = System::Drawing::SystemColors::ControlLight;
	}
	if (e->KeyCode == Keys::U)
	{
		u->BackColor = System::Drawing::SystemColors::ControlLight;
	}
	if (e->KeyCode == Keys::I)
	{
		i->BackColor = System::Drawing::SystemColors::ControlLight;
	}
	if (e->KeyCode == Keys::O)
	{
		o->BackColor = System::Drawing::SystemColors::ControlLight;
	}
	if (e->KeyCode == Keys::P)
	{
		p->BackColor = System::Drawing::SystemColors::ControlLight;
	}
	if (e->KeyCode == Keys::A)
	{
		a->BackColor = System::Drawing::SystemColors::ControlLight;
	}
	if (e->KeyCode == Keys::S)
	{
		s->BackColor = System::Drawing::SystemColors::ControlLight;
	}
	if (e->KeyCode == Keys::D)
	{
		d->BackColor = System::Drawing::SystemColors::ControlLight;
	}
	if (e->KeyCode == Keys::F)
	{
		f->BackColor = System::Drawing::SystemColors::ControlLight;
	}
	if (e->KeyCode == Keys::G)
	{
		g->BackColor = System::Drawing::SystemColors::ControlLight;
	}
	if (e->KeyCode == Keys::H)
	{
		h->BackColor = System::Drawing::SystemColors::ControlLight;
	}
	if (e->KeyCode == Keys::J)
	{
		j->BackColor = System::Drawing::SystemColors::ControlLight;
	}
	if (e->KeyCode == Keys::K)
	{
		k->BackColor = System::Drawing::SystemColors::ControlLight;
	}
	if (e->KeyCode == Keys::L)
	{
		l->BackColor = System::Drawing::SystemColors::ControlLight;
	}
	if (e->KeyCode == Keys::Z)
	{
		z->BackColor = System::Drawing::SystemColors::ControlLight;
	}
	if (e->KeyCode == Keys::X)
	{
		x->BackColor = System::Drawing::SystemColors::ControlLight;
	}
	if (e->KeyCode == Keys::C)
	{
		c->BackColor = System::Drawing::SystemColors::ControlLight;
	}
	if (e->KeyCode == Keys::V)
	{
		v->BackColor = System::Drawing::SystemColors::ControlLight;
	}
	if (e->KeyCode == Keys::B)
	{
		b->BackColor = System::Drawing::SystemColors::ControlLight;
	}
	if (e->KeyCode == Keys::N)
	{
		n->BackColor = System::Drawing::SystemColors::ControlLight;
	}
	if (e->KeyCode == Keys::M)
	{
		m->BackColor = System::Drawing::SystemColors::ControlLight;
	}
	if (e->KeyCode == Keys::Space)
	{
		space->BackColor = System::Drawing::SystemColors::ControlLight;
	}
}

private: System::Void keyboard_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
	this->textBox1->Text = "";
}

public:void ChangeLevel()
{
	if (time == 30) level = 1;
	else
		if (time == 20) level = 2;
		else
			if (time == 10) level = 3;
}


private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
	/*if (text[num] != print[num]) textBox1->Clear();*/
	Dialog ^dia = gcnew Dialog;
	if (time == 0)
	{
		timer1->Stop();
		timer2->Stop();
		this->textBox1->Text = "";
		Sleep(1000);
		label2->Text = "0";
		dia->ChangeLabel("¬рем€ вышло");
		dia->ShowDialog();
		this->Close();
	}
	if (textBox1->Text == label1->Text)
	{
		timer1->Stop();
		timer2->Stop();
		char str[256];
		bool strend = false;
		std::ifstream score("score.txt");
		std::ofstream copy("copy.txt");
		char* login = (char*)(void*)Marshal::StringToHGlobalAnsi(log);
		if (level == 1)
		{
			while (!score.eof())
			{
				score.getline(str, 256);
				if (strcmp(str, login) == 0)
				{
					if (strend)
					copy << std::endl << str << std::endl << "1";
					else copy << str << std::endl << "1";
					score.getline(str, 256);
				}
				else
				{
					if (strend) copy << std::endl << str;
					else copy << str;
				}
				strend = true;
			}
			score.close();
			copy.close();
			remove("score.txt");
			rename("copy.txt", "score.txt");
		}
		else
			if (level == 2)
			{
				while (!score.eof())
				{
					score.getline(str, 256);
					if (strcmp(str, login) == 0)
					{
						if (strend)
							copy << std::endl << str;
						else copy << str;
						score.getline(str, 256);
						copy << std::endl << str;
						score.getline(str, 256);
						copy << std::endl << "1";
					}
					else
					{
						if (strend) copy << std::endl << str;
						else copy << str;
					}
					strend = true;
				}
				score.close();
				copy.close();
				remove("score.txt");
				rename("copy.txt", "score.txt");
			}
			else
				if (level == 3)
				{
					while (!score.eof())
					{
						score.getline(str, 256);
						if (strcmp(str, login) == 0)
						{
							if (strend)
								copy << std::endl << str;
							else copy << str;
							score.getline(str, 256);
							copy << std::endl << str;
							score.getline(str, 256);
							copy << std::endl << str;
							score.getline(str, 256);
							copy << std::endl << "1";
						}
						else
						{
							if (strend) copy << std::endl << str;
							else copy << str;
						}
						strend = true;
					}
					score.close();
					copy.close();
					remove("score.txt");
					rename("copy.txt", "score.txt");
				}
		dia->ShowDialog();
		this->Close();
	}
}

};
}
