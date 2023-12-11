#pragma once

namespace ProjetPoo {

	enum TypePaiement
	{
		CB, PAYPAL, LIQUIDE,NONE
	};

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Paiement
	/// </summary>
	public ref class Paiement : public System::Windows::Forms::Form
	{
	public:
		Paiement(void)
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
		~Paiement()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonCB;
	private: System::Windows::Forms::Button^ buttonPaypal;
	private: System::Windows::Forms::Button^ buttonEsp;
	protected:

	protected:


	private: System::Windows::Forms::Label^ labelPaiement;
	private: System::Windows::Forms::Label^ labelCB;
	private: System::Windows::Forms::Label^ labelPaypal;
	private: System::Windows::Forms::Label^ labelEsp;

	private:TypePaiement TP;

	public: TypePaiement getTP() { return TP; }



	private: System::Windows::Forms::Button^ buttonAnnuler;
	private: System::Windows::Forms::TextBox^ textBoxNum;

	private: System::Windows::Forms::TextBox^ textBoxNom;
	private: System::Windows::Forms::TextBox^ textBoxDate;
	private: System::Windows::Forms::TextBox^ textBoxCode;
	private: System::Windows::Forms::Label^ labelNum;
	private: System::Windows::Forms::Label^ labelNom;
	private: System::Windows::Forms::Label^ labelDate;
	private: System::Windows::Forms::Label^ labelCode;
	private: System::Windows::Forms::TextBox^ textBoxPaypal;
	private: System::Windows::Forms::Label^ labelPay;
	private: System::Windows::Forms::Label^ labelConfEsp;
	private: System::Windows::Forms::Button^ buttonConf;
	private: System::Windows::Forms::Button^ buttonConfCB;
	private: System::Windows::Forms::Label^ labelValidation;
	private: System::Windows::Forms::Label^ labelRemerciement;
	private: System::Windows::Forms::Button^ buttonConfPay;
	private: System::Windows::Forms::Button^ buttonFacture;
	private: System::Windows::Forms::Label^ labelFacture;
	private: System::Windows::Forms::Label^ labelErreur;








	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonCB = (gcnew System::Windows::Forms::Button());
			this->buttonPaypal = (gcnew System::Windows::Forms::Button());
			this->buttonEsp = (gcnew System::Windows::Forms::Button());
			this->labelPaiement = (gcnew System::Windows::Forms::Label());
			this->labelCB = (gcnew System::Windows::Forms::Label());
			this->labelPaypal = (gcnew System::Windows::Forms::Label());
			this->labelEsp = (gcnew System::Windows::Forms::Label());
			this->buttonAnnuler = (gcnew System::Windows::Forms::Button());
			this->textBoxNum = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDate = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCode = (gcnew System::Windows::Forms::TextBox());
			this->labelNum = (gcnew System::Windows::Forms::Label());
			this->labelNom = (gcnew System::Windows::Forms::Label());
			this->labelDate = (gcnew System::Windows::Forms::Label());
			this->labelCode = (gcnew System::Windows::Forms::Label());
			this->textBoxPaypal = (gcnew System::Windows::Forms::TextBox());
			this->labelPay = (gcnew System::Windows::Forms::Label());
			this->labelConfEsp = (gcnew System::Windows::Forms::Label());
			this->buttonConf = (gcnew System::Windows::Forms::Button());
			this->buttonConfCB = (gcnew System::Windows::Forms::Button());
			this->labelValidation = (gcnew System::Windows::Forms::Label());
			this->labelRemerciement = (gcnew System::Windows::Forms::Label());
			this->buttonConfPay = (gcnew System::Windows::Forms::Button());
			this->buttonFacture = (gcnew System::Windows::Forms::Button());
			this->labelFacture = (gcnew System::Windows::Forms::Label());
			this->labelErreur = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonCB
			// 
			this->buttonCB->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonCB->Location = System::Drawing::Point(330, 158);
			this->buttonCB->Name = L"buttonCB";
			this->buttonCB->Size = System::Drawing::Size(157, 59);
			this->buttonCB->TabIndex = 0;
			this->buttonCB->Text = L"Carte de crédit";
			this->buttonCB->UseVisualStyleBackColor = true;
			this->buttonCB->Click += gcnew System::EventHandler(this, &Paiement::buttonCB_Click);
			// 
			// buttonPaypal
			// 
			this->buttonPaypal->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonPaypal->Location = System::Drawing::Point(330, 239);
			this->buttonPaypal->Name = L"buttonPaypal";
			this->buttonPaypal->Size = System::Drawing::Size(157, 57);
			this->buttonPaypal->TabIndex = 1;
			this->buttonPaypal->Text = L"Paypal";
			this->buttonPaypal->UseVisualStyleBackColor = true;
			this->buttonPaypal->Click += gcnew System::EventHandler(this, &Paiement::buttonPaypal_Click);
			// 
			// buttonEsp
			// 
			this->buttonEsp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonEsp->Location = System::Drawing::Point(330, 317);
			this->buttonEsp->Name = L"buttonEsp";
			this->buttonEsp->Size = System::Drawing::Size(157, 56);
			this->buttonEsp->TabIndex = 2;
			this->buttonEsp->Text = L"Espèces";
			this->buttonEsp->UseVisualStyleBackColor = true;
			this->buttonEsp->Click += gcnew System::EventHandler(this, &Paiement::buttonEsp_Click);
			// 
			// labelPaiement
			// 
			this->labelPaiement->AutoSize = true;
			this->labelPaiement->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->labelPaiement->Location = System::Drawing::Point(295, 61);
			this->labelPaiement->Name = L"labelPaiement";
			this->labelPaiement->Size = System::Drawing::Size(236, 29);
			this->labelPaiement->TabIndex = 3;
			this->labelPaiement->Text = L"Moyen de paiement";
			this->labelPaiement->Click += gcnew System::EventHandler(this, &Paiement::labelPaiement_Click);
			// 
			// labelCB
			// 
			this->labelCB->AutoSize = true;
			this->labelCB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->labelCB->Location = System::Drawing::Point(264, 108);
			this->labelCB->Name = L"labelCB";
			this->labelCB->Size = System::Drawing::Size(312, 25);
			this->labelCB->TabIndex = 4;
			this->labelCB->Text = L"Vos informations de carte bancaire";
			this->labelCB->Click += gcnew System::EventHandler(this, &Paiement::labelCB_Click);
			// 
			// labelPaypal
			// 
			this->labelPaypal->AutoSize = true;
			this->labelPaypal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->labelPaypal->Location = System::Drawing::Point(326, 108);
			this->labelPaypal->Name = L"labelPaypal";
			this->labelPaypal->Size = System::Drawing::Size(210, 24);
			this->labelPaypal->TabIndex = 5;
			this->labelPaypal->Text = L"Vos informations Paypal";
			this->labelPaypal->Click += gcnew System::EventHandler(this, &Paiement::labelPaypal_Click);
			// 
			// labelEsp
			// 
			this->labelEsp->AutoSize = true;
			this->labelEsp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->labelEsp->Location = System::Drawing::Point(172, 147);
			this->labelEsp->Name = L"labelEsp";
			this->labelEsp->Size = System::Drawing::Size(503, 24);
			this->labelEsp->TabIndex = 6;
			this->labelEsp->Text = L"Vous avez décidé de payer en espèces lors de la livraison.";
			this->labelEsp->Click += gcnew System::EventHandler(this, &Paiement::labelEsp_Click);
			// 
			// buttonAnnuler
			// 
			this->buttonAnnuler->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAnnuler->Location = System::Drawing::Point(638, 32);
			this->buttonAnnuler->Name = L"buttonAnnuler";
			this->buttonAnnuler->Size = System::Drawing::Size(75, 23);
			this->buttonAnnuler->TabIndex = 7;
			this->buttonAnnuler->Text = L"Annuler";
			this->buttonAnnuler->UseVisualStyleBackColor = true;
			this->buttonAnnuler->Click += gcnew System::EventHandler(this, &Paiement::buttonAnnuler_Click);
			// 
			// textBoxNum
			// 
			this->textBoxNum->Location = System::Drawing::Point(387, 176);
			this->textBoxNum->Name = L"textBoxNum";
			this->textBoxNum->Size = System::Drawing::Size(149, 22);
			this->textBoxNum->TabIndex = 8;
			this->textBoxNum->TextChanged += gcnew System::EventHandler(this, &Paiement::textBoxNum_TextChanged);
			// 
			// textBoxNom
			// 
			this->textBoxNom->Location = System::Drawing::Point(387, 229);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(149, 22);
			this->textBoxNom->TabIndex = 9;
			this->textBoxNom->TextChanged += gcnew System::EventHandler(this, &Paiement::textBoxNom_TextChanged);
			// 
			// textBoxDate
			// 
			this->textBoxDate->Location = System::Drawing::Point(387, 274);
			this->textBoxDate->Name = L"textBoxDate";
			this->textBoxDate->Size = System::Drawing::Size(100, 22);
			this->textBoxDate->TabIndex = 10;
			this->textBoxDate->TextChanged += gcnew System::EventHandler(this, &Paiement::textBoxDate_TextChanged);
			// 
			// textBoxCode
			// 
			this->textBoxCode->Location = System::Drawing::Point(387, 317);
			this->textBoxCode->Name = L"textBoxCode";
			this->textBoxCode->Size = System::Drawing::Size(73, 22);
			this->textBoxCode->TabIndex = 11;
			this->textBoxCode->TextChanged += gcnew System::EventHandler(this, &Paiement::textBoxCode_TextChanged);
			// 
			// labelNum
			// 
			this->labelNum->AutoSize = true;
			this->labelNum->Location = System::Drawing::Point(244, 179);
			this->labelNum->Name = L"labelNum";
			this->labelNum->Size = System::Drawing::Size(107, 16);
			this->labelNum->TabIndex = 12;
			this->labelNum->Text = L"Numéro de carte";
			this->labelNum->Click += gcnew System::EventHandler(this, &Paiement::labelNum_Click);
			// 
			// labelNom
			// 
			this->labelNom->AutoSize = true;
			this->labelNom->Location = System::Drawing::Point(247, 235);
			this->labelNom->Name = L"labelNom";
			this->labelNom->Size = System::Drawing::Size(104, 16);
			this->labelNom->TabIndex = 13;
			this->labelNom->Text = L"Nom sur la carte";
			this->labelNom->Click += gcnew System::EventHandler(this, &Paiement::labelNom_Click);
			// 
			// labelDate
			// 
			this->labelDate->AutoSize = true;
			this->labelDate->Location = System::Drawing::Point(188, 280);
			this->labelDate->Name = L"labelDate";
			this->labelDate->Size = System::Drawing::Size(163, 16);
			this->labelDate->TabIndex = 14;
			this->labelDate->Text = L"Date d\'expiration (MM/AA)";
			this->labelDate->Click += gcnew System::EventHandler(this, &Paiement::labelDate_Click);
			// 
			// labelCode
			// 
			this->labelCode->AutoSize = true;
			this->labelCode->Location = System::Drawing::Point(242, 323);
			this->labelCode->Name = L"labelCode";
			this->labelCode->Size = System::Drawing::Size(109, 16);
			this->labelCode->TabIndex = 15;
			this->labelCode->Text = L"Code de sécurité";
			this->labelCode->Click += gcnew System::EventHandler(this, &Paiement::labelCode_Click);
			// 
			// textBoxPaypal
			// 
			this->textBoxPaypal->Location = System::Drawing::Point(323, 211);
			this->textBoxPaypal->Name = L"textBoxPaypal";
			this->textBoxPaypal->Size = System::Drawing::Size(213, 22);
			this->textBoxPaypal->TabIndex = 16;
			this->textBoxPaypal->TextChanged += gcnew System::EventHandler(this, &Paiement::textBoxPaypal_TextChanged);
			// 
			// labelPay
			// 
			this->labelPay->AutoSize = true;
			this->labelPay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->labelPay->Location = System::Drawing::Point(239, 162);
			this->labelPay->Name = L"labelPay";
			this->labelPay->Size = System::Drawing::Size(363, 20);
			this->labelPay->TabIndex = 17;
			this->labelPay->Text = L"Veuillez renseigner votre lien de compte Paypal";
			this->labelPay->Click += gcnew System::EventHandler(this, &Paiement::labelPay_Click);
			// 
			// labelConfEsp
			// 
			this->labelConfEsp->AutoSize = true;
			this->labelConfEsp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->labelConfEsp->Location = System::Drawing::Point(219, 158);
			this->labelConfEsp->Name = L"labelConfEsp";
			this->labelConfEsp->Size = System::Drawing::Size(383, 24);
			this->labelConfEsp->TabIndex = 18;
			this->labelConfEsp->Text = L"Etes-vous sûr de vouloir payer en espèces \?";
			this->labelConfEsp->Click += gcnew System::EventHandler(this, &Paiement::labelConfEsp_Click);
			// 
			// buttonConf
			// 
			this->buttonConf->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonConf->Location = System::Drawing::Point(357, 238);
			this->buttonConf->Name = L"buttonConf";
			this->buttonConf->Size = System::Drawing::Size(100, 35);
			this->buttonConf->TabIndex = 19;
			this->buttonConf->Text = L"Confirmer";
			this->buttonConf->UseVisualStyleBackColor = true;
			this->buttonConf->Click += gcnew System::EventHandler(this, &Paiement::buttonConf_Click);
			// 
			// buttonConfCB
			// 
			this->buttonConfCB->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonConfCB->Location = System::Drawing::Point(357, 379);
			this->buttonConfCB->Name = L"buttonConfCB";
			this->buttonConfCB->Size = System::Drawing::Size(111, 37);
			this->buttonConfCB->TabIndex = 20;
			this->buttonConfCB->Text = L"Confirmer";
			this->buttonConfCB->UseVisualStyleBackColor = true;
			this->buttonConfCB->Click += gcnew System::EventHandler(this, &Paiement::buttonConfCB_Click);
			// 
			// labelValidation
			// 
			this->labelValidation->AutoSize = true;
			this->labelValidation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->labelValidation->Location = System::Drawing::Point(318, 132);
			this->labelValidation->Name = L"labelValidation";
			this->labelValidation->Size = System::Drawing::Size(186, 26);
			this->labelValidation->TabIndex = 21;
			this->labelValidation->Text = L"Paiement validé ! ";
			this->labelValidation->Click += gcnew System::EventHandler(this, &Paiement::labelValidation_Click);
			// 
			// labelRemerciement
			// 
			this->labelRemerciement->AutoSize = true;
			this->labelRemerciement->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->labelRemerciement->Location = System::Drawing::Point(264, 193);
			this->labelRemerciement->Name = L"labelRemerciement";
			this->labelRemerciement->Size = System::Drawing::Size(283, 24);
			this->labelRemerciement->TabIndex = 22;
			this->labelRemerciement->Text = L"Merci d\'avoir passé commande !";
			this->labelRemerciement->Click += gcnew System::EventHandler(this, &Paiement::labelRemerciement_Click);
			// 
			// buttonConfPay
			// 
			this->buttonConfPay->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonConfPay->Location = System::Drawing::Point(387, 266);
			this->buttonConfPay->Name = L"buttonConfPay";
			this->buttonConfPay->Size = System::Drawing::Size(81, 38);
			this->buttonConfPay->TabIndex = 23;
			this->buttonConfPay->Text = L"Confirmer";
			this->buttonConfPay->UseVisualStyleBackColor = true;
			this->buttonConfPay->Click += gcnew System::EventHandler(this, &Paiement::buttonConfPay_Click);
			// 
			// buttonFacture
			// 
			this->buttonFacture->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonFacture->ForeColor = System::Drawing::SystemColors::InfoText;
			this->buttonFacture->Location = System::Drawing::Point(333, 299);
			this->buttonFacture->Name = L"buttonFacture";
			this->buttonFacture->Size = System::Drawing::Size(135, 48);
			this->buttonFacture->TabIndex = 24;
			this->buttonFacture->Text = L"Facture";
			this->buttonFacture->UseVisualStyleBackColor = true;
			this->buttonFacture->Click += gcnew System::EventHandler(this, &Paiement::buttonFacture_Click);
			// 
			// labelFacture
			// 
			this->labelFacture->AutoSize = true;
			this->labelFacture->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.5F));
			this->labelFacture->Location = System::Drawing::Point(219, 266);
			this->labelFacture->Name = L"labelFacture";
			this->labelFacture->Size = System::Drawing::Size(354, 20);
			this->labelFacture->TabIndex = 25;
			this->labelFacture->Text = L"Vous pouvez récupérer votre facture ci-dessous :";
			this->labelFacture->Click += gcnew System::EventHandler(this, &Paiement::labelFacture_Click);
			// 
			// labelErreur
			// 
			this->labelErreur->AutoSize = true;
			this->labelErreur->Location = System::Drawing::Point(320, 357);
			this->labelErreur->Name = L"labelErreur";
			this->labelErreur->Size = System::Drawing::Size(184, 16);
			this->labelErreur->TabIndex = 26;
			this->labelErreur->Text = L"Informations non complétées !";
			this->labelErreur->Click += gcnew System::EventHandler(this, &Paiement::labelErreur_Click);
			// 
			// Paiement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1225, 503);
			this->Controls->Add(this->labelErreur);
			this->Controls->Add(this->labelFacture);
			this->Controls->Add(this->buttonFacture);
			this->Controls->Add(this->buttonConfPay);
			this->Controls->Add(this->labelRemerciement);
			this->Controls->Add(this->labelValidation);
			this->Controls->Add(this->buttonConfCB);
			this->Controls->Add(this->buttonConf);
			this->Controls->Add(this->labelConfEsp);
			this->Controls->Add(this->labelPay);
			this->Controls->Add(this->textBoxPaypal);
			this->Controls->Add(this->labelCode);
			this->Controls->Add(this->labelDate);
			this->Controls->Add(this->labelNom);
			this->Controls->Add(this->labelNum);
			this->Controls->Add(this->textBoxCode);
			this->Controls->Add(this->textBoxDate);
			this->Controls->Add(this->textBoxNom);
			this->Controls->Add(this->textBoxNum);
			this->Controls->Add(this->buttonAnnuler);
			this->Controls->Add(this->labelEsp);
			this->Controls->Add(this->labelPaypal);
			this->Controls->Add(this->labelCB);
			this->Controls->Add(this->labelPaiement);
			this->Controls->Add(this->buttonEsp);
			this->Controls->Add(this->buttonPaypal);
			this->Controls->Add(this->buttonCB);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"Paiement";
			this->Text = L"Paiement";
			this->TransparencyKey = System::Drawing::Color::RosyBrown;
			this->Load += gcnew System::EventHandler(this, &Paiement::Paiement_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Paiement_Load(System::Object^ sender, System::EventArgs^ e) {
		labelPaypal->Visible = false;
		labelCB->Visible = false;
		labelEsp->Visible = false;

		textBoxNum->Visible = false;
		textBoxNom->Visible = false;
		textBoxDate->Visible = false;
		textBoxCode->Visible = false;
		labelNum->Visible = false;
		labelNom->Visible = false;
		labelDate->Visible = false;
		labelCode->Visible = false;

		textBoxPaypal->Visible = false;
		labelPay->Visible = false;
		labelConfEsp->Visible = false;
		buttonConf->Visible = false;
		buttonConfCB->Visible = false;
		labelValidation->Visible = false;
		labelRemerciement->Visible = false;
		buttonConfPay->Visible = false;
		buttonFacture->Visible = false;
		labelFacture->Visible = false;
		labelErreur->Visible = false;
	}
	private: System::Void labelPaypal_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void labelCB_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void labelPaiement_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonCB_Click(System::Object^ sender, System::EventArgs^ e) {
		labelCB->Visible = true;
		buttonCB->Visible = false;
		buttonPaypal->Visible = false;
		buttonEsp->Visible = false;
		textBoxNum->Visible = true;
		textBoxNom->Visible = true;
		textBoxDate->Visible = true;
		textBoxCode->Visible = true;
		labelNum->Visible = true;
		labelNom->Visible = true;
		labelDate->Visible = true;
		labelCode->Visible = true;
		buttonConfCB->Visible = true;
		labelPaiement->Visible = false;
		this->TP = CB;
	}
	private: System::Void buttonPaypal_Click(System::Object^ sender, System::EventArgs^ e) {
		labelPaypal->Visible = true;
		buttonCB->Visible = false;
		buttonPaypal->Visible = false;
		buttonEsp->Visible = false;
		textBoxPaypal->Visible = true;
		labelPay->Visible = true;
		buttonConfCB->Visible = false;
		labelPaiement->Visible = false;
		buttonConfPay->Visible = true;
		this->TP = PAYPAL;
	}
	private: System::Void buttonEsp_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonCB->Visible = false;
		buttonPaypal->Visible = false;
		buttonEsp->Visible = false;
		labelConfEsp->Visible = true;
		buttonConf->Visible = true;
		buttonConfCB->Visible = false;
		labelPaiement->Visible = false;
		this->TP = LIQUIDE;
	}
	private: System::Void buttonAnnuler_Click(System::Object^ sender, System::EventArgs^ e) {
		labelPaypal->Visible = false;
		labelCB->Visible = false;
		labelEsp->Visible = false;
		buttonCB->Visible = true;
		buttonPaypal->Visible = true;
		buttonEsp->Visible = true;

		textBoxNum->Visible = false;
		textBoxNom->Visible = false;
		textBoxDate->Visible = false;
		textBoxCode->Visible = false;
		labelNum->Visible = false;
		labelNom->Visible = false;
		labelDate->Visible = false;
		labelCode->Visible = false;

		textBoxPaypal->Visible = false;
		labelPay->Visible = false;
		buttonConf->Visible = false;
		labelConfEsp->Visible = false;
		buttonConfCB->Visible = false;
		labelValidation->Visible = false;
		buttonConfPay->Visible = false;
		labelPaiement->Visible = true;
		buttonFacture->Visible = false;
		labelFacture->Visible = false;
		labelErreur->Visible = false;
		
		TP = NONE;
		this->Close();

	}
	private: System::Void labelEsp_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBoxNum_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ input = textBoxNum->Text;


		String^ formattedCreditCard = "";


		int count = 0;
		for (int i = 0; i < input->Length; i++) {
			if (Char::IsDigit(input[i])) {
				if (count > 0 && count % 4 == 0) {
					formattedCreditCard += " ";
				}
				formattedCreditCard += input[i];
				count++;
			}
		}


		textBoxNum->Text = formattedCreditCard;

		textBoxNum->Select(textBoxNum->Text->Length, 0);
	}
	private: System::Void textBoxNom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBoxDate_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ input = textBoxDate->Text;

		String^ formatDate = "";


		int count = 0;
		for (int i = 0; i < input->Length; i++) {
			if (Char::IsDigit(input[i])) {
				if (count > 0 && count % 2 == 0) {
					formatDate += "/";
				}
				formatDate += input[i];
				count++;
			}
		}


		textBoxDate->Text = formatDate;

		textBoxDate->Select(textBoxDate->Text->Length, 0);

	}
	private: System::Void textBoxCode_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		const int maxLength = 3;


		String^ input = textBoxCode->Text;

		if (input->Length > maxLength) {

			textBoxCode->Text = input->Substring(0, maxLength);

			textBoxCode->Select(textBoxCode->Text->Length, 0);
		}
	}
	private: System::Void labelNum_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void labelNom_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void labelDate_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void labelCode_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBoxPaypal_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void labelPay_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void labelConfEsp_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonConf_Click(System::Object^ sender, System::EventArgs^ e) {
		labelEsp->Visible = true;
		labelConfEsp->Visible = false;
		buttonConf->Visible = false;
		buttonAnnuler->Visible = false;
		labelRemerciement->Visible = true;
		labelErreur->Visible = false;
		this->Close();

	}
	private: System::Void buttonConfCB_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ texteDansTextBox = textBoxNum->Text;
		String^ textBoxNom1 = textBoxNom->Text;
		String^ textBoxDate1 = textBoxDate->Text;
		String^ textBoxCode1 = textBoxCode->Text;

		// Vérifiez si la TextBox est vide
		if (String::IsNullOrEmpty(texteDansTextBox) || String::IsNullOrEmpty(textBoxNom1) || String::IsNullOrEmpty(textBoxDate1) || String::IsNullOrEmpty(textBoxCode1)) {
			labelErreur->Visible = true;

		}
		else {
			labelValidation->Visible = true;
			labelCB->Visible = false;
			buttonCB->Visible = false;
			buttonPaypal->Visible = false;
			buttonEsp->Visible = false;
			textBoxNum->Visible = false;
			textBoxNom->Visible = false;
			textBoxDate->Visible = false;
			textBoxCode->Visible = false;
			labelNum->Visible = false;
			labelNom->Visible = false;
			labelDate->Visible = false;
			labelCode->Visible = false;
			buttonConfCB->Visible = false;
			labelPaiement->Visible = false;
			buttonAnnuler->Visible = false;
			labelRemerciement->Visible = true;
			buttonFacture->Visible = true;
			labelFacture->Visible = true;
			labelErreur->Visible = false;
			this->Close();
		}

	}
	private: System::Void labelValidation_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void labelRemerciement_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonConfPay_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ textBoxPaypal1 = textBoxPaypal->Text;

		// Vérifiez si la TextBox est vide
		if (String::IsNullOrEmpty(textBoxPaypal1)) {
			labelErreur->Visible = true;
		}
		else {

			labelValidation->Visible = true;
			labelRemerciement->Visible = true;
			labelPaypal->Visible = false;
			buttonCB->Visible = false;
			buttonPaypal->Visible = false;
			buttonEsp->Visible = false;
			textBoxPaypal->Visible = false;
			labelPay->Visible = false;
			buttonConfCB->Visible = false;
			labelPaiement->Visible = false;
			buttonConfPay->Visible = false;
			buttonAnnuler->Visible = false;
			buttonFacture->Visible = true;
			labelFacture->Visible = true;
			labelErreur->Visible = false;
			this->Close();
		}


	}
	private: System::Void buttonFacture_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void labelFacture_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void labelErreur_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}