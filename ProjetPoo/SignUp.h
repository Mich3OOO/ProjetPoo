#pragma once
#include "SqlHandler.h"

namespace ProjetPoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SignUp
	/// </summary>
	public ref class SignUp : public System::Windows::Forms::Form
	{
	public:
		SignUp(void)
		{
			InitializeComponent();
			this->sql = (gcnew SqlHandler());
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SignUp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ LaMail;
	private: System::Windows::Forms::Label^ LaMotDePasse;
	private: System::Windows::Forms::Label^ LaConfirmerMotDePasse;
	private: System::Windows::Forms::Label^ LaNom;
	private: System::Windows::Forms::Label^ LaDateNais;
	private: System::Windows::Forms::Label^ LaSociete;
	private: System::Windows::Forms::Label^ LaPrenom;
	private: System::Windows::Forms::TextBox^ TbPrenom;

	private: System::Windows::Forms::TextBox^ TbNom;

	private: System::Windows::Forms::TextBox^ TbConfirmerMotDePasse;

	private: System::Windows::Forms::TextBox^ TbMotDePasse;

	private: System::Windows::Forms::TextBox^ TbMail;
	private: System::Windows::Forms::TextBox^ TbDateNais;
	private: System::Windows::Forms::TextBox^ TbSociete;
	private: System::Windows::Forms::Button^ BtCreate;
	private: System::Windows::Forms::Label^ LaError;





	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		SqlHandler^ sql;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->LaMail = (gcnew System::Windows::Forms::Label());
			this->LaMotDePasse = (gcnew System::Windows::Forms::Label());
			this->LaConfirmerMotDePasse = (gcnew System::Windows::Forms::Label());
			this->LaNom = (gcnew System::Windows::Forms::Label());
			this->LaDateNais = (gcnew System::Windows::Forms::Label());
			this->LaSociete = (gcnew System::Windows::Forms::Label());
			this->LaPrenom = (gcnew System::Windows::Forms::Label());
			this->TbPrenom = (gcnew System::Windows::Forms::TextBox());
			this->TbNom = (gcnew System::Windows::Forms::TextBox());
			this->TbConfirmerMotDePasse = (gcnew System::Windows::Forms::TextBox());
			this->TbMotDePasse = (gcnew System::Windows::Forms::TextBox());
			this->TbMail = (gcnew System::Windows::Forms::TextBox());
			this->TbDateNais = (gcnew System::Windows::Forms::TextBox());
			this->TbSociete = (gcnew System::Windows::Forms::TextBox());
			this->BtCreate = (gcnew System::Windows::Forms::Button());
			this->LaError = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// LaMail
			// 
			this->LaMail->AutoSize = true;
			this->LaMail->Location = System::Drawing::Point(555, 96);
			this->LaMail->Name = L"LaMail";
			this->LaMail->Size = System::Drawing::Size(32, 13);
			this->LaMail->TabIndex = 0;
			this->LaMail->Text = L"Mail :";
			// 
			// LaMotDePasse
			// 
			this->LaMotDePasse->AutoSize = true;
			this->LaMotDePasse->Location = System::Drawing::Point(510, 136);
			this->LaMotDePasse->Name = L"LaMotDePasse";
			this->LaMotDePasse->Size = System::Drawing::Size(77, 13);
			this->LaMotDePasse->TabIndex = 1;
			this->LaMotDePasse->Text = L"Mot de passe :";
			// 
			// LaConfirmerMotDePasse
			// 
			this->LaConfirmerMotDePasse->AutoSize = true;
			this->LaConfirmerMotDePasse->Location = System::Drawing::Point(453, 173);
			this->LaConfirmerMotDePasse->Name = L"LaConfirmerMotDePasse";
			this->LaConfirmerMotDePasse->Size = System::Drawing::Size(134, 13);
			this->LaConfirmerMotDePasse->TabIndex = 2;
			this->LaConfirmerMotDePasse->Text = L"Confirmer le mot de passe :";
			// 
			// LaNom
			// 
			this->LaNom->AutoSize = true;
			this->LaNom->Location = System::Drawing::Point(552, 210);
			this->LaNom->Name = L"LaNom";
			this->LaNom->Size = System::Drawing::Size(35, 13);
			this->LaNom->TabIndex = 3;
			this->LaNom->Text = L"Nom :";
			// 
			// LaDateNais
			// 
			this->LaDateNais->AutoSize = true;
			this->LaDateNais->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LaDateNais->Location = System::Drawing::Point(414, 285);
			this->LaDateNais->Name = L"LaDateNais";
			this->LaDateNais->Size = System::Drawing::Size(173, 13);
			this->LaDateNais->TabIndex = 4;
			this->LaDateNais->Text = L"Date de naissance (MM-JJ-AAAA) :";
			// 
			// LaSociete
			// 
			this->LaSociete->AutoSize = true;
			this->LaSociete->Location = System::Drawing::Point(538, 327);
			this->LaSociete->Name = L"LaSociete";
			this->LaSociete->Size = System::Drawing::Size(49, 13);
			this->LaSociete->TabIndex = 5;
			this->LaSociete->Text = L"Société :";
			// 
			// LaPrenom
			// 
			this->LaPrenom->AutoSize = true;
			this->LaPrenom->Location = System::Drawing::Point(538, 242);
			this->LaPrenom->Name = L"LaPrenom";
			this->LaPrenom->Size = System::Drawing::Size(49, 13);
			this->LaPrenom->TabIndex = 6;
			this->LaPrenom->Text = L"Prénom :";
			// 
			// TbPrenom
			// 
			this->TbPrenom->Location = System::Drawing::Point(593, 242);
			this->TbPrenom->Name = L"TbPrenom";
			this->TbPrenom->Size = System::Drawing::Size(129, 20);
			this->TbPrenom->TabIndex = 11;
			// 
			// TbNom
			// 
			this->TbNom->Location = System::Drawing::Point(593, 210);
			this->TbNom->Name = L"TbNom";
			this->TbNom->Size = System::Drawing::Size(129, 20);
			this->TbNom->TabIndex = 10;
			// 
			// TbConfirmerMotDePasse
			// 
			this->TbConfirmerMotDePasse->Location = System::Drawing::Point(593, 173);
			this->TbConfirmerMotDePasse->Name = L"TbConfirmerMotDePasse";
			this->TbConfirmerMotDePasse->Size = System::Drawing::Size(129, 20);
			this->TbConfirmerMotDePasse->TabIndex = 9;
			// 
			// TbMotDePasse
			// 
			this->TbMotDePasse->Location = System::Drawing::Point(593, 136);
			this->TbMotDePasse->Name = L"TbMotDePasse";
			this->TbMotDePasse->Size = System::Drawing::Size(129, 20);
			this->TbMotDePasse->TabIndex = 8;
			// 
			// TbMail
			// 
			this->TbMail->Location = System::Drawing::Point(593, 96);
			this->TbMail->Name = L"TbMail";
			this->TbMail->Size = System::Drawing::Size(274, 20);
			this->TbMail->TabIndex = 7;
			// 
			// TbDateNais
			// 
			this->TbDateNais->Location = System::Drawing::Point(593, 285);
			this->TbDateNais->MaxLength = 10;
			this->TbDateNais->Name = L"TbDateNais";
			this->TbDateNais->Size = System::Drawing::Size(63, 20);
			this->TbDateNais->TabIndex = 12;
			this->TbDateNais->TextChanged += gcnew System::EventHandler(this, &SignUp::TbDateNais_TextChanged);
			// 
			// TbSociete
			// 
			this->TbSociete->Location = System::Drawing::Point(593, 327);
			this->TbSociete->Name = L"TbSociete";
			this->TbSociete->Size = System::Drawing::Size(100, 20);
			this->TbSociete->TabIndex = 13;
			// 
			// BtCreate
			// 
			this->BtCreate->Location = System::Drawing::Point(515, 512);
			this->BtCreate->Name = L"BtCreate";
			this->BtCreate->Size = System::Drawing::Size(241, 99);
			this->BtCreate->TabIndex = 14;
			this->BtCreate->Text = L"Créer compte";
			this->BtCreate->UseVisualStyleBackColor = true;
			this->BtCreate->Click += gcnew System::EventHandler(this, &SignUp::BtCreate_Click);
			// 
			// LaError
			// 
			this->LaError->AutoSize = true;
			this->LaError->BackColor = System::Drawing::SystemColors::Control;
			this->LaError->ForeColor = System::Drawing::Color::Red;
			this->LaError->Location = System::Drawing::Point(592, 480);
			this->LaError->Name = L"LaError";
			this->LaError->Size = System::Drawing::Size(54, 13);
			this->LaError->TabIndex = 15;
			this->LaError->Text = L"Error label";
			this->LaError->Visible = false;
			// 
			// SignUp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->LaError);
			this->Controls->Add(this->BtCreate);
			this->Controls->Add(this->TbSociete);
			this->Controls->Add(this->TbDateNais);
			this->Controls->Add(this->TbMail);
			this->Controls->Add(this->TbMotDePasse);
			this->Controls->Add(this->TbConfirmerMotDePasse);
			this->Controls->Add(this->TbNom);
			this->Controls->Add(this->TbPrenom);
			this->Controls->Add(this->LaPrenom);
			this->Controls->Add(this->LaSociete);
			this->Controls->Add(this->LaDateNais);
			this->Controls->Add(this->LaNom);
			this->Controls->Add(this->LaConfirmerMotDePasse);
			this->Controls->Add(this->LaMotDePasse);
			this->Controls->Add(this->LaMail);
			this->Name = L"SignUp";
			this->Text = L"SignUp";
			this->Load += gcnew System::EventHandler(this, &SignUp::SignUp_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SignUp_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void BtCreate_Click(System::Object^ sender, System::EventArgs^ e) {

		bool allow = true;

		LaSociete->ForeColor = System::Drawing::Color::Black;
		LaMotDePasse->ForeColor = System::Drawing::Color::Black;
		LaMail->ForeColor = System::Drawing::Color::Black;
		LaDateNais->ForeColor = System::Drawing::Color::Black;
		LaPrenom->ForeColor = System::Drawing::Color::Black;
		LaNom->ForeColor = System::Drawing::Color::Black;

		if (TbMotDePasse->Text!= TbConfirmerMotDePasse->Text)
		{
			LaError->Text = "erreur mots de passes differents";
			LaError->Visible = true;
			LaMotDePasse->ForeColor = System::Drawing::Color::Red;
			LaConfirmerMotDePasse->ForeColor = System::Drawing::Color::Red;
			allow = false;
		}
		if (TbNom->Text->Length == 0)
		{
			LaNom->ForeColor = System::Drawing::Color::Red;
			LaError->Text = "erreur donnée(s) manquante(s)";
			LaError->Visible = true;
			allow = false;
		}
		if (TbPrenom->Text->Length == 0)
		{
			LaPrenom->ForeColor = System::Drawing::Color::Red;
			LaError->Text = "erreur donnée(s) manquante(s)";
			LaError->Visible = true;
			allow = false;
		}
		if (TbDateNais->Text->Length == 0)
		{
			LaDateNais->ForeColor = System::Drawing::Color::Red;
			LaError->Text = "erreur donnée(s) manquante(s)";
			LaError->Visible = true;
			allow = false;
		}
		if (TbMail->Text->Length == 0)
		{
			LaMail->ForeColor = System::Drawing::Color::Red;
			LaError->Text = "erreur donnée(s) manquante(s)";
			LaError->Visible = true;
			allow = false;
		}
		if (TbMotDePasse->Text->Length == 0)
		{
			LaMotDePasse->ForeColor = System::Drawing::Color::Red;
			LaError->Text = "erreur donnée(s) manquante(s)";
			LaError->Visible = true;
			allow = false;
		}
		if (TbDateNais->Text->Length != 10 || TbDateNais->Text[2]!='-' || TbDateNais->Text[5] != '-' || Convert::ToInt32(TbDateNais->Text->Split('-')[0])>12 || Convert::ToInt32(TbDateNais->Text->Split('-')[0]) < 1 || Convert::ToInt32(TbDateNais->Text->Split('-')[1]) > 31 || Convert::ToInt32(TbDateNais->Text->Split('-')[1]) <1 || Convert::ToInt32(TbDateNais->Text->Split('-')[2]) <1900)
		{
			LaDateNais->ForeColor = System::Drawing::Color::Red;
			LaError->Text = "erreur format date";
			LaError->Visible = true;
			allow = false;
		}


		if(allow)
		{
			data::Client^ cl = gcnew data::Client;
			cl->nomCl = TbNom->Text;
			cl->prenomCl = TbPrenom->Text;
			cl->dateNa = TbDateNais->Text;
			cl->Mail = TbMail->Text;
			cl->MotDePasse = TbMotDePasse->Text;
			cl->societe = TbSociete->Text;
			sql->CreateClient(cl);
			 
			this->Close();

		}
		
		
		
	}
	private: System::Void TbDateNais_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if ((TbDateNais->Text->Length == 2|| TbDateNais->Text->Length == 5)&& TbDateNais->Text[TbDateNais->Text->Length-1]!='-')
		{

			TbDateNais->Text += "-";
			TbDateNais->Select(TbDateNais->Text->Length, 0);
			
		}
		if (TbDateNais->Text->Length == 3 || TbDateNais->Text->Length == 6)
		{
			TbDateNais->Select(TbDateNais->Text->Length, 0);
		}

	}
};
}
