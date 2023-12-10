#pragma once
#include "SqlHandler.h"
#include "SignUp.h"
#include "EspaceClient.h" 

namespace ProjetPoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de LogIn
	/// </summary>
	public ref class LogIn : public System::Windows::Forms::Form
	{
	public:
		LogIn(void)
		{
			InitializeComponent();
			this->sql = (gcnew SqlHandler());
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~LogIn()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonregister;
	private: System::Windows::Forms::TextBox^ BoxMail;


	private: System::Windows::Forms::Label^ labelTitre;




	private: System::Windows::Forms::Button^ buttonLogin;
	private: System::Windows::Forms::Label^ LabelMail;
	private: System::Windows::Forms::Label^ LabelMdp;

		   SqlHandler^ sql;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::TextBox^ BoxMdp;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ BtHidePW;


	protected:

	protected:


	protected:

	protected:

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
			this->buttonregister = (gcnew System::Windows::Forms::Button());
			this->BoxMail = (gcnew System::Windows::Forms::TextBox());
			this->labelTitre = (gcnew System::Windows::Forms::Label());
			this->buttonLogin = (gcnew System::Windows::Forms::Button());
			this->LabelMail = (gcnew System::Windows::Forms::Label());
			this->LabelMdp = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BoxMdp = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->BtHidePW = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonregister
			// 
			this->buttonregister->Location = System::Drawing::Point(332, 245);
			this->buttonregister->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonregister->Name = L"buttonregister";
			this->buttonregister->Size = System::Drawing::Size(74, 24);
			this->buttonregister->TabIndex = 0;
			this->buttonregister->Text = L"S\'inscrire";
			this->buttonregister->UseVisualStyleBackColor = true;
			this->buttonregister->Click += gcnew System::EventHandler(this, &LogIn::buttonregister_Click);
			// 
			// BoxMail
			// 
			this->BoxMail->Location = System::Drawing::Point(277, 141);
			this->BoxMail->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->BoxMail->Name = L"BoxMail";
			this->BoxMail->Size = System::Drawing::Size(117, 20);
			this->BoxMail->TabIndex = 2;
			this->BoxMail->TextChanged += gcnew System::EventHandler(this, &LogIn::BoxMail_TextChanged);
			// 
			// labelTitre
			// 
			this->labelTitre->AutoSize = true;
			this->labelTitre->Location = System::Drawing::Point(189, 81);
			this->labelTitre->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelTitre->Name = L"labelTitre";
			this->labelTitre->Size = System::Drawing::Size(55, 13);
			this->labelTitre->TabIndex = 3;
			this->labelTitre->Text = L"S\'identifier";
			this->labelTitre->Click += gcnew System::EventHandler(this, &LogIn::LabelTitre_Click);
			// 
			// buttonLogin
			// 
			this->buttonLogin->Location = System::Drawing::Point(181, 245);
			this->buttonLogin->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonLogin->Name = L"buttonLogin";
			this->buttonLogin->Size = System::Drawing::Size(75, 24);
			this->buttonLogin->TabIndex = 6;
			this->buttonLogin->Text = L"S\'enregister";
			this->buttonLogin->UseVisualStyleBackColor = true;
			this->buttonLogin->Click += gcnew System::EventHandler(this, &LogIn::buttonLogin_Click);
			// 
			// LabelMail
			// 
			this->LabelMail->AutoSize = true;
			this->LabelMail->Location = System::Drawing::Point(189, 146);
			this->LabelMail->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelMail->Name = L"LabelMail";
			this->LabelMail->Size = System::Drawing::Size(26, 13);
			this->LabelMail->TabIndex = 7;
			this->LabelMail->Text = L"Mail";
			// 
			// LabelMdp
			// 
			this->LabelMdp->AutoSize = true;
			this->LabelMdp->Location = System::Drawing::Point(189, 176);
			this->LabelMdp->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelMdp->Name = L"LabelMdp";
			this->LabelMdp->Size = System::Drawing::Size(71, 13);
			this->LabelMdp->TabIndex = 8;
			this->LabelMdp->Text = L"Mot de passe";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(189, 210);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"L\'adresse mail n\'existe pas !";
			this->label1->Click += gcnew System::EventHandler(this, &LogIn::label1_Click);
			// 
			// BoxMdp
			// 
			this->BoxMdp->Location = System::Drawing::Point(277, 171);
			this->BoxMdp->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->BoxMdp->Name = L"BoxMdp";
			this->BoxMdp->Size = System::Drawing::Size(117, 20);
			this->BoxMdp->TabIndex = 5;
			this->BoxMdp->TextChanged += gcnew System::EventHandler(this, &LogIn::BoxMdp_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(189, 210);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Connection réussie !";
			this->label4->Click += gcnew System::EventHandler(this, &LogIn::label4_Click);
			// 
			// BtHidePW
			// 
			this->BtHidePW->Location = System::Drawing::Point(412, 168);
			this->BtHidePW->Name = L"BtHidePW";
			this->BtHidePW->Size = System::Drawing::Size(44, 23);
			this->BtHidePW->TabIndex = 38;
			this->BtHidePW->Text = L"👁";
			this->BtHidePW->UseVisualStyleBackColor = true;
			this->BtHidePW->Click += gcnew System::EventHandler(this, &LogIn::BtHidePW_Click);
			// 
			// LogIn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(628, 373);
			this->Controls->Add(this->BtHidePW);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->LabelMdp);
			this->Controls->Add(this->LabelMail);
			this->Controls->Add(this->buttonLogin);
			this->Controls->Add(this->BoxMdp);
			this->Controls->Add(this->labelTitre);
			this->Controls->Add(this->BoxMail);
			this->Controls->Add(this->buttonregister);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"LogIn";
			this->Text = L"LogIn";
			this->Load += gcnew System::EventHandler(this, &LogIn::LogIn_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}



#pragma endregion
		void ExecuterCommandeSQL(String^ query) { // Pour éxectuer une commande SQL
			String^ connectionString = "Data Source=localHost\\SQLEXPRESS;Initial Catalog=Projetpoo;Integrated Security=True;Encrypt=False;";

			try
			{
				SqlConnection^ connexion = gcnew SqlConnection(connectionString);
				connexion->Open();

				SqlCommand^ commande = gcnew SqlCommand(query, connexion);

				int nombreDeLignesAffectees = commande->ExecuteNonQuery();

				connexion->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Une erreur s'est produite : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		bool EmailExistsInDatabase(String^ mail) {

			String^ connection = "Data Source=localHost\\SQLEXPRESS;Initial Catalog=Projetpoo;Integrated Security=True;Encrypt=False;";
			SqlConnection^ connexion = gcnew SqlConnection(connection);
			connexion->Open();

			String^ query = "SELECT COUNT(*) FROM Client WHERE mailCl = '" + BoxMail->Text + "';";

			SqlCommand^ command = gcnew SqlCommand(query, connexion);
			// Exécutez la requéte SQL et récupérez le résultat


			int resultCount = Convert::ToInt32(command->ExecuteScalar());
			label1->Visible = false;
			connexion->Close();
			// Si le résultat est supérieur é zéro, l'e-mail existe dans la base de données
			return resultCount > 0;

		}


	private: System::Void LogIn_Load(System::Object^ sender, System::EventArgs^ e) {
		label1->Visible = false;
		label4->Visible = false;
	}


	private: System::Void buttonregister_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		ProjetPoo::SignUp SU;
		SU.ShowDialog();
		//Application::Run(gcnew ProjetPoo::SignUp);
		
	}
	private: System::Void LabelMail_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void LabelTitre_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void BoxMail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void BoxMdp_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}



	private: System::Void buttonLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ emailToCheck = BoxMail->Text;

		// Vérifier si l'adresse e-mail existe dans la base de données
		if (EmailExistsInDatabase(emailToCheck)) {

			String^ connection = "Data Source=localHost\\SQLEXPRESS;Initial Catalog=Projetpoo;Integrated Security=True;Encrypt=False;";
			SqlConnection^ connexion = gcnew SqlConnection(connection);
			connexion->Open();

			String^ query = "SELECT verifiCl FROM Client WHERE mailCl = '" + BoxMail->Text + "'; ";

			SqlCommand^ command = gcnew SqlCommand(query, connexion);
			String^ Crypt = Convert::ToString(command->ExecuteScalar());
			
			if (BoxMail->Text == Code::DeCodeBin(Crypt, BoxMdp->Text))
			{
			
				label1->Visible = false;
				label4->Visible = true;
				command->CommandText = "SELECT numCl FROM Client WHERE mailCl = '" + BoxMail->Text + "'; ";
				ProjetPoo::EspaceClient^ ESCL = gcnew ProjetPoo::EspaceClient(Convert::ToInt32(command->ExecuteScalar()));
				connexion->Close();
				
				
				this->Hide();
				ESCL->ShowDialog();
				this->Close();
				
				


			}


			

		}
		else {
			label4->Visible = false;
			label1->Visible = true;

			
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void BtHidePW_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (BoxMdp->PasswordChar == '*')
		{
			BoxMdp->PasswordChar = NULL;
		}
		else
		{
			BoxMdp->PasswordChar = '*';
			
		}
	}
};
}
