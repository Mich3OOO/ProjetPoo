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
			cl = gcnew data::Client;
			cl->societe = -1;
			cl->adresseFacturation = gcnew System::Collections::Generic::List<data::Adresse^>();
			cl->adresseLivraison = gcnew System::Collections::Generic::List<data::Adresse^>();
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

	private: System::Windows::Forms::Button^ BtCreate;
	private: System::Windows::Forms::Label^ LaError;





	protected:

	protected:

	private:

		data::Client^ cl;
	private: System::ComponentModel::IContainer^ components;

		/// <summary>
		/// Required designer variable.
		/// </summary>

	private: System::Windows::Forms::Button^ BtDebug;
	private: System::Windows::Forms::Label^ LaDebug;
	private: System::Windows::Forms::ComboBox^ CbSociete;
	private: System::Windows::Forms::Label^ LaCodePostal;
	private: System::Windows::Forms::ComboBox^ CbNomRue;


	private: System::Windows::Forms::ComboBox^ CbNumBat;
	private: System::Windows::Forms::ComboBox^ CbFullAdress;


	private: System::Windows::Forms::Button^ BtAdd;
	private: System::Windows::Forms::Button^ BtDelAdress;
	private: System::Windows::Forms::ComboBox^ CbAdressType;



	private: System::Windows::Forms::Label^ LaNomRu;
	private: System::Windows::Forms::Label^ LaNumBat;


	private: System::Windows::Forms::Label^ LaTypeAdr;
	private: System::Windows::Forms::Label^ LaFullAdress;




	private: System::Windows::Forms::Button^ BtCancel;

	private: System::Windows::Forms::NumericUpDown^ NumCP;
	private: System::Windows::Forms::Label^ LaTypeAdresse2;

	private: System::Windows::Forms::ComboBox^ CbTypeAdress2;














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
			this->BtCreate = (gcnew System::Windows::Forms::Button());
			this->LaError = (gcnew System::Windows::Forms::Label());
			this->BtDebug = (gcnew System::Windows::Forms::Button());
			this->LaDebug = (gcnew System::Windows::Forms::Label());
			this->CbSociete = (gcnew System::Windows::Forms::ComboBox());
			this->LaCodePostal = (gcnew System::Windows::Forms::Label());
			this->CbNomRue = (gcnew System::Windows::Forms::ComboBox());
			this->CbNumBat = (gcnew System::Windows::Forms::ComboBox());
			this->CbFullAdress = (gcnew System::Windows::Forms::ComboBox());
			this->BtAdd = (gcnew System::Windows::Forms::Button());
			this->BtDelAdress = (gcnew System::Windows::Forms::Button());
			this->CbAdressType = (gcnew System::Windows::Forms::ComboBox());
			this->LaNomRu = (gcnew System::Windows::Forms::Label());
			this->LaNumBat = (gcnew System::Windows::Forms::Label());
			this->LaTypeAdr = (gcnew System::Windows::Forms::Label());
			this->LaFullAdress = (gcnew System::Windows::Forms::Label());
			this->BtCancel = (gcnew System::Windows::Forms::Button());
			this->NumCP = (gcnew System::Windows::Forms::NumericUpDown());
			this->LaTypeAdresse2 = (gcnew System::Windows::Forms::Label());
			this->CbTypeAdress2 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NumCP))->BeginInit();
			this->SuspendLayout();
			// 
			// LaMail
			// 
			this->LaMail->AutoSize = true;
			this->LaMail->Location = System::Drawing::Point(286, 100);
			this->LaMail->Name = L"LaMail";
			this->LaMail->Size = System::Drawing::Size(32, 13);
			this->LaMail->TabIndex = 0;
			this->LaMail->Text = L"Mail :";
			// 
			// LaMotDePasse
			// 
			this->LaMotDePasse->AutoSize = true;
			this->LaMotDePasse->Location = System::Drawing::Point(241, 140);
			this->LaMotDePasse->Name = L"LaMotDePasse";
			this->LaMotDePasse->Size = System::Drawing::Size(77, 13);
			this->LaMotDePasse->TabIndex = 1;
			this->LaMotDePasse->Text = L"Mot de passe :";
			// 
			// LaConfirmerMotDePasse
			// 
			this->LaConfirmerMotDePasse->AutoSize = true;
			this->LaConfirmerMotDePasse->Location = System::Drawing::Point(184, 177);
			this->LaConfirmerMotDePasse->Name = L"LaConfirmerMotDePasse";
			this->LaConfirmerMotDePasse->Size = System::Drawing::Size(134, 13);
			this->LaConfirmerMotDePasse->TabIndex = 2;
			this->LaConfirmerMotDePasse->Text = L"Confirmer le mot de passe :";
			// 
			// LaNom
			// 
			this->LaNom->AutoSize = true;
			this->LaNom->Location = System::Drawing::Point(283, 214);
			this->LaNom->Name = L"LaNom";
			this->LaNom->Size = System::Drawing::Size(35, 13);
			this->LaNom->TabIndex = 3;
			this->LaNom->Text = L"Nom :";
			// 
			// LaDateNais
			// 
			this->LaDateNais->AutoSize = true;
			this->LaDateNais->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LaDateNais->Location = System::Drawing::Point(145, 289);
			this->LaDateNais->Name = L"LaDateNais";
			this->LaDateNais->Size = System::Drawing::Size(173, 13);
			this->LaDateNais->TabIndex = 4;
			this->LaDateNais->Text = L"Date de naissance (MM-JJ-AAAA) :";
			// 
			// LaSociete
			// 
			this->LaSociete->AutoSize = true;
			this->LaSociete->Location = System::Drawing::Point(269, 331);
			this->LaSociete->Name = L"LaSociete";
			this->LaSociete->Size = System::Drawing::Size(49, 13);
			this->LaSociete->TabIndex = 5;
			this->LaSociete->Text = L"Société :";
			// 
			// LaPrenom
			// 
			this->LaPrenom->AutoSize = true;
			this->LaPrenom->Location = System::Drawing::Point(269, 246);
			this->LaPrenom->Name = L"LaPrenom";
			this->LaPrenom->Size = System::Drawing::Size(49, 13);
			this->LaPrenom->TabIndex = 6;
			this->LaPrenom->Text = L"Prénom :";
			// 
			// TbPrenom
			// 
			this->TbPrenom->Location = System::Drawing::Point(324, 246);
			this->TbPrenom->Name = L"TbPrenom";
			this->TbPrenom->Size = System::Drawing::Size(129, 20);
			this->TbPrenom->TabIndex = 11;
			// 
			// TbNom
			// 
			this->TbNom->Location = System::Drawing::Point(324, 214);
			this->TbNom->Name = L"TbNom";
			this->TbNom->Size = System::Drawing::Size(129, 20);
			this->TbNom->TabIndex = 10;
			// 
			// TbConfirmerMotDePasse
			// 
			this->TbConfirmerMotDePasse->Location = System::Drawing::Point(324, 177);
			this->TbConfirmerMotDePasse->Name = L"TbConfirmerMotDePasse";
			this->TbConfirmerMotDePasse->Size = System::Drawing::Size(129, 20);
			this->TbConfirmerMotDePasse->TabIndex = 9;
			// 
			// TbMotDePasse
			// 
			this->TbMotDePasse->Location = System::Drawing::Point(324, 140);
			this->TbMotDePasse->Name = L"TbMotDePasse";
			this->TbMotDePasse->Size = System::Drawing::Size(129, 20);
			this->TbMotDePasse->TabIndex = 8;
			// 
			// TbMail
			// 
			this->TbMail->Location = System::Drawing::Point(324, 100);
			this->TbMail->Name = L"TbMail";
			this->TbMail->Size = System::Drawing::Size(274, 20);
			this->TbMail->TabIndex = 7;
			// 
			// TbDateNais
			// 
			this->TbDateNais->Location = System::Drawing::Point(324, 289);
			this->TbDateNais->MaxLength = 10;
			this->TbDateNais->Name = L"TbDateNais";
			this->TbDateNais->Size = System::Drawing::Size(63, 20);
			this->TbDateNais->TabIndex = 12;
			this->TbDateNais->TextChanged += gcnew System::EventHandler(this, &SignUp::TbDateNais_TextChanged);
			// 
			// BtCreate
			// 
			this->BtCreate->Location = System::Drawing::Point(362, 511);
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
			this->LaError->Location = System::Drawing::Point(359, 495);
			this->LaError->Name = L"LaError";
			this->LaError->Size = System::Drawing::Size(54, 13);
			this->LaError->TabIndex = 15;
			this->LaError->Text = L"Error label";
			this->LaError->Visible = false;
			// 
			// BtDebug
			// 
			this->BtDebug->Location = System::Drawing::Point(1013, 588);
			this->BtDebug->Name = L"BtDebug";
			this->BtDebug->Size = System::Drawing::Size(75, 23);
			this->BtDebug->TabIndex = 16;
			this->BtDebug->Text = L"Debug";
			this->BtDebug->UseVisualStyleBackColor = true;
			this->BtDebug->Click += gcnew System::EventHandler(this, &SignUp::button1_Click);
			// 
			// LaDebug
			// 
			this->LaDebug->AutoSize = true;
			this->LaDebug->Location = System::Drawing::Point(1013, 526);
			this->LaDebug->Name = L"LaDebug";
			this->LaDebug->Size = System::Drawing::Size(51, 13);
			this->LaDebug->TabIndex = 17;
			this->LaDebug->Text = L"LaDebug";
			// 
			// CbSociete
			// 
			this->CbSociete->CausesValidation = false;
			this->CbSociete->FormattingEnabled = true;
			this->CbSociete->Location = System::Drawing::Point(324, 331);
			this->CbSociete->Name = L"CbSociete";
			this->CbSociete->Size = System::Drawing::Size(129, 21);
			this->CbSociete->TabIndex = 18;
			this->CbSociete->SelectedIndexChanged += gcnew System::EventHandler(this, &SignUp::CbSociete_SelectedIndexChanged);
			this->CbSociete->TextChanged += gcnew System::EventHandler(this, &SignUp::CbSociete_TextChanged);
			// 
			// LaCodePostal
			// 
			this->LaCodePostal->AutoSize = true;
			this->LaCodePostal->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->LaCodePostal->Location = System::Drawing::Point(754, 166);
			this->LaCodePostal->Name = L"LaCodePostal";
			this->LaCodePostal->Size = System::Drawing::Size(64, 13);
			this->LaCodePostal->TabIndex = 19;
			this->LaCodePostal->Text = L"Code Postal";
			this->LaCodePostal->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// CbNomRue
			// 
			this->CbNomRue->AllowDrop = true;
			this->CbNomRue->Enabled = false;
			this->CbNomRue->FormattingEnabled = true;
			this->CbNomRue->IntegralHeight = false;
			this->CbNomRue->Location = System::Drawing::Point(877, 210);
			this->CbNomRue->Name = L"CbNomRue";
			this->CbNomRue->Size = System::Drawing::Size(254, 21);
			this->CbNomRue->TabIndex = 21;
			this->CbNomRue->SelectedIndexChanged += gcnew System::EventHandler(this, &SignUp::CbNomRue_SelectedIndexChanged);
			this->CbNomRue->TextChanged += gcnew System::EventHandler(this, &SignUp::CbNomRue_TextChanged);
			// 
			// CbNumBat
			// 
			this->CbNumBat->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->CbNumBat->Enabled = false;
			this->CbNumBat->FormattingEnabled = true;
			this->CbNumBat->Location = System::Drawing::Point(877, 247);
			this->CbNumBat->Name = L"CbNumBat";
			this->CbNumBat->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->CbNumBat->Size = System::Drawing::Size(121, 21);
			this->CbNumBat->TabIndex = 22;
			this->CbNumBat->SelectedIndexChanged += gcnew System::EventHandler(this, &SignUp::CbNumBat_SelectedIndexChanged);
			// 
			// CbFullAdress
			// 
			this->CbFullAdress->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->CbFullAdress->FormattingEnabled = true;
			this->CbFullAdress->Location = System::Drawing::Point(738, 382);
			this->CbFullAdress->Name = L"CbFullAdress";
			this->CbFullAdress->Size = System::Drawing::Size(260, 21);
			this->CbFullAdress->TabIndex = 23;
			this->CbFullAdress->SelectedIndexChanged += gcnew System::EventHandler(this, &SignUp::CbFullAdress_SelectedIndexChanged);
			// 
			// BtAdd
			// 
			this->BtAdd->Enabled = false;
			this->BtAdd->Location = System::Drawing::Point(877, 287);
			this->BtAdd->Name = L"BtAdd";
			this->BtAdd->Size = System::Drawing::Size(106, 23);
			this->BtAdd->TabIndex = 24;
			this->BtAdd->Text = L"Ajouter adresse";
			this->BtAdd->UseVisualStyleBackColor = true;
			this->BtAdd->Click += gcnew System::EventHandler(this, &SignUp::BtAdd_Click);
			// 
			// BtDelAdress
			// 
			this->BtDelAdress->Location = System::Drawing::Point(1028, 385);
			this->BtDelAdress->Name = L"BtDelAdress";
			this->BtDelAdress->Size = System::Drawing::Size(75, 23);
			this->BtDelAdress->TabIndex = 25;
			this->BtDelAdress->Text = L"Eliminer adresse";
			this->BtDelAdress->UseVisualStyleBackColor = true;
			this->BtDelAdress->Click += gcnew System::EventHandler(this, &SignUp::BtDelAdress_Click);
			// 
			// CbAdressType
			// 
			this->CbAdressType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->CbAdressType->FormattingEnabled = true;
			this->CbAdressType->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Adresse livraison", L"Adresse Facturation" });
			this->CbAdressType->Location = System::Drawing::Point(806, 107);
			this->CbAdressType->Name = L"CbAdressType";
			this->CbAdressType->Size = System::Drawing::Size(228, 21);
			this->CbAdressType->TabIndex = 26;
			this->CbAdressType->SelectedIndexChanged += gcnew System::EventHandler(this, &SignUp::CbAdressType_SelectedIndexChanged);
			
			// 
			// LaNomRu
			// 
			this->LaNomRu->AutoSize = true;
			this->LaNomRu->Location = System::Drawing::Point(794, 214);
			this->LaNomRu->Name = L"LaNomRu";
			this->LaNomRu->Size = System::Drawing::Size(73, 13);
			this->LaNomRu->TabIndex = 27;
			this->LaNomRu->Text = L"Nom de la rue";
			// 
			// LaNumBat
			// 
			this->LaNumBat->AutoSize = true;
			this->LaNumBat->Location = System::Drawing::Point(760, 255);
			this->LaNumBat->Name = L"LaNumBat";
			this->LaNumBat->Size = System::Drawing::Size(107, 13);
			this->LaNumBat->TabIndex = 28;
			this->LaNumBat->Text = L"Numéros du bâtiment";
			// 
			// LaTypeAdr
			// 
			this->LaTypeAdr->AutoSize = true;
			this->LaTypeAdr->Location = System::Drawing::Point(721, 110);
			this->LaTypeAdr->Name = L"LaTypeAdr";
			this->LaTypeAdr->Size = System::Drawing::Size(79, 13);
			this->LaTypeAdr->TabIndex = 29;
			this->LaTypeAdr->Text = L"Type d\'adresse";
			// 
			// LaFullAdress
			// 
			this->LaFullAdress->AutoSize = true;
			this->LaFullAdress->Location = System::Drawing::Point(644, 385);
			this->LaFullAdress->Name = L"LaFullAdress";
			this->LaFullAdress->Size = System::Drawing::Size(88, 13);
			this->LaFullAdress->TabIndex = 30;
			this->LaFullAdress->Text = L"Adresse ajoutées";
			// 
			// BtCancel
			// 
			this->BtCancel->Location = System::Drawing::Point(609, 511);
			this->BtCancel->Name = L"BtCancel";
			this->BtCancel->Size = System::Drawing::Size(250, 100);
			this->BtCancel->TabIndex = 32;
			this->BtCancel->Text = L"Cancel";
			this->BtCancel->UseVisualStyleBackColor = true;
			this->BtCancel->Click += gcnew System::EventHandler(this, &SignUp::BtCancel_Click);
			// 
			// NumCP
			// 
			this->NumCP->Enabled = false;
			this->NumCP->Location = System::Drawing::Point(878, 164);
			this->NumCP->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->NumCP->Name = L"NumCP";
			this->NumCP->Size = System::Drawing::Size(120, 20);
			this->NumCP->TabIndex = 34;
			this->NumCP->TextChanged += gcnew System::EventHandler(this, &SignUp::NumCP_TextChanged);
			// 
			// LaTypeAdresse2
			// 
			this->LaTypeAdresse2->AutoSize = true;
			this->LaTypeAdresse2->Location = System::Drawing::Point(653, 358);
			this->LaTypeAdresse2->Name = L"LaTypeAdresse2";
			this->LaTypeAdresse2->Size = System::Drawing::Size(79, 13);
			this->LaTypeAdresse2->TabIndex = 36;
			this->LaTypeAdresse2->Text = L"Type d\'adresse";
			// 
			// CbTypeAdress2
			// 
			this->CbTypeAdress2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->CbTypeAdress2->FormattingEnabled = true;
			this->CbTypeAdress2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Adresse livraison", L"Adresse Facturation" });
			this->CbTypeAdress2->Location = System::Drawing::Point(738, 355);
			this->CbTypeAdress2->Name = L"CbTypeAdress2";
			this->CbTypeAdress2->Size = System::Drawing::Size(228, 21);
			this->CbTypeAdress2->TabIndex = 35;
			this->CbTypeAdress2->DropDown += gcnew System::EventHandler(this, &SignUp::CbTypeAdress2_DropDown);
			this->CbTypeAdress2->SelectedIndex = 0;
			// 
			// SignUp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->LaTypeAdresse2);
			this->Controls->Add(this->CbTypeAdress2);
			this->Controls->Add(this->NumCP);
			this->Controls->Add(this->BtCancel);
			this->Controls->Add(this->LaFullAdress);
			this->Controls->Add(this->LaTypeAdr);
			this->Controls->Add(this->LaNumBat);
			this->Controls->Add(this->LaNomRu);
			this->Controls->Add(this->CbAdressType);
			this->Controls->Add(this->BtDelAdress);
			this->Controls->Add(this->BtAdd);
			this->Controls->Add(this->CbFullAdress);
			this->Controls->Add(this->CbNumBat);
			this->Controls->Add(this->CbNomRue);
			this->Controls->Add(this->LaCodePostal);
			this->Controls->Add(this->CbSociete);
			this->Controls->Add(this->LaDebug);
			this->Controls->Add(this->BtDebug);
			this->Controls->Add(this->LaError);
			this->Controls->Add(this->BtCreate);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NumCP))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SignUp_Load(System::Object^ sender, System::EventArgs^ e) 
	{

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
			//selct then modify yes, search , in , database
			cl->nomCl = TbNom->Text;
			cl->prenomCl = TbPrenom->Text;
			cl->dateNa = TbDateNais->Text;
			cl->Mail = TbMail->Text;
			cl->MotDePasse = TbMotDePasse->Text;
			
			if (cl->societe == -1)
			{
				//sql->EnterData("insert into Client(nomCl,prenomCl,dateNa,mailCl,verifiCl) values('" + cl->nomCl + "','" + cl->prenomCl + "','" + cl->dateNa + "','" + cl->Mail + "','" + Code::CodeBin(cl->Mail, cl->MotDePasse) + "');");
			}
			else
			{
				//sql->EnterData("insert into Client(nomCl,prenomCl,dateNa,mailCl,verifiCl,idSo) values('" + cl->nomCl + "','" + cl->prenomCl + "','" + cl->dateNa + "','" + cl->Mail + "','" + Code::CodeBin(cl->Mail, cl->MotDePasse) + "',(select idSo from société where idSo = " + cl->societe + "));");
			}

			
			this->Close();
		}
		
		
		
	}
	private: System::Void TbDateNais_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{

		if ((TbDateNais->Text->Length == 2 || TbDateNais->Text->Length == 5) && TbDateNais->Text[TbDateNais->Text->Length - 1] != '-')
		{
			
			TbDateNais->Text += "-";
			TbDateNais->Select(TbDateNais->Text->Length, 0);

		}
		if (TbDateNais->Text->Length == 3 || TbDateNais->Text->Length == 6)
		{
			TbDateNais->Select(TbDateNais->Text->Length, 0);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		array<array<String^>^>^ reader = sql->GetData("Select NomSo from Société where NomSo like '%"+ CbSociete->Text +"%'");
		LaDebug->Text = reader[0][1];

		for (int i = 0; i < reader->Length; i++)
		{
			CbSociete->Items->Add(reader[i][0]);
		}
	}
		
	private: System::Void CbSociete_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		

		if (CbSociete->SelectedIndex == -1)
		{
			cl->societe = -1;
			CbSociete->Items->Clear();
			CbSociete->Items->Add(CbSociete->Text);
			CbSociete->Select(CbSociete->Text->Length, 0);
		}
		
		if (CbSociete->Text->Length > 3 && CbSociete->SelectedIndex == -1)
		{
			

			
			array<array<String^>^>^ reader = sql->GetData("Select NomSo from Société where NomSo like '%" + CbSociete->Text + "%'");
			if (reader->Length > 0)
			{
				

				for (int i = 0; i < reader->Length; i++)
				{
					CbSociete->Items->Add(reader[i][0]);
				}

			}
			
			CbSociete->Select(CbSociete->Text->Length, 0);

			

		}
	}
private: System::Void CbSociete_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
{
	
	if (CbSociete->SelectedIndex != 0)
	{
		cl->societe = Int32::Parse(sql->GetOneData("Select idSo from Société where NomSo = '" + CbSociete->Text + "';", 0, 0));
	}
	
	LaDebug->Text = "" + cl->societe;
}
private: System::Void NumCP_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{
	try 
	{		
		LaCodePostal->Text = "Code Postal (" + sql->GetOneData("select nomVille from Ville where codePos = " + NumCP->Text + ";", 0, 0) + ")";

		CbNomRue->Enabled = true;
		LaError->Visible = false;
	}
	catch(...)
	{
		LaCodePostal->Text = "Code Postal";
		LaError->Visible = true;
		LaError->Text = "Errror "+ sql->GetOneData("select nomVille from Ville where codePos = 64000 ;", 0, 0);
		CbNomRue->Enabled = false;
		CbNumBat->Enabled = false;
	}
		

}


private: System::Void CbNomRue_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	
	
		

		if (CbNomRue->SelectedIndex == -1)
		{
			CbNomRue->Items->Clear();
			CbNomRue->Items->Add(CbNomRue->Text);
			CbNomRue->Select(CbNomRue->Text->Length, 0);
		}
		
		if (CbNomRue->Text->Length > 3 && CbNomRue->SelectedIndex == -1)
		{



			array<array<String^>^>^ reader = sql->GetData("select distinct nomRue from Adresse inner join Avoir on Adresse.idAdresse=Avoir.idAdresse inner join Ville on Ville.IDVille=Avoir.IDVille where codepos = " + NumCP->Text + " and nomRue like '%" + CbNomRue->Text + "%';");
			if (reader->Length > 0)
			{


				for (int i = 0; i < reader->Length; i++)
				{
					CbNomRue->Items->Add(reader[i][0]);
				}

			}

			CbNomRue->Select(CbNomRue->Text->Length, 0);

		}

		
}
private: System::Void CbNomRue_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
{
	if (CbNomRue->SelectedIndex > 0)
	{
		CbNumBat->Enabled = true;
		CbNumBat->Items->Clear();

		array<array<String^>^>^ reader = sql->GetData("select distinct num from Adresse inner join Avoir on Adresse.idAdresse=Avoir.idAdresse inner join Ville on Ville.IDVille=Avoir.IDVille where codepos = " + NumCP->Text + " and nomRue = '" + CbNomRue->Text + "';");
		if (reader->Length > 0)
		{

			for (int i = 0; i < reader->Length; i++)
			{
				CbNumBat->Items->Add(reader[i][0]);
			}

		}

	}
	else
	{
		CbNumBat->Enabled = false;
		BtAdd->Enabled = false;
	}

}
private: System::Void CbNumBat_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	BtAdd->Enabled = true;
}
private: System::Void CbAdressType_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
{
	NumCP->Enabled = true;
	
}
private: System::Void BtAdd_Click(System::Object^ sender, System::EventArgs^ e) 
{
	CbFullAdress->Items->Add("("+CbAdressType->Text+") "+ NumCP->Text+ ", "+ CbNumBat->Text+ " " + CbNomRue->Text  );

	System::Collections::Generic::List<data::Adresse^>^ tmp = cl->adresseFacturation;

	if (CbAdressType->SelectedIndex == 0)
	{
		tmp = cl->adresseLivraison;
	}
	
	tmp->Add(gcnew data::Adresse);
	tmp[tmp->Count]->codePostal = Convert::ToInt32(NumCP->Text);
	tmp[tmp->Count]->nomRue = CbNomRue->Text;
	tmp[tmp->Count]->numero = Convert::ToInt32(CbNumBat->Text);




	CbNumBat->Enabled = false;
	BtAdd->Enabled = false;
	CbNomRue->Enabled = false;
	CbNumBat->SelectedIndex = -1;
	CbNomRue->SelectedIndex = -1;
	NumCP->Text = "0";


}
private: System::Void CbFullAdress_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void BtCancel_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Close();
}
private: System::Void BtDelAdress_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (CbFullAdress->SelectedIndex != -1) CbFullAdress->Items->RemoveAt(CbFullAdress->SelectedIndex) ;
}
private: System::Void CbTypeAdress2_DropDown(System::Object^ sender, System::EventArgs^ e)
{
	CbFullAdress->Items->Clear();
	if (CbTypeAdress2->SelectedIndex == 0)
	{
		for each (data::Adresse ^ a in cl->adresseLivraison)
		{
			CbFullAdress->Items->Add("a");
		}
		

	}

}
};
}
















/*
____
|M   |
|(\/)|
| \/ |
|   M|
`----`
*/