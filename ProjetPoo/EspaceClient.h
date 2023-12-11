#include "SqlHandler.h"
#include "data.h"
#include "Paiement.h"

namespace ProjetPoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class EspaceClient : public System::Windows::Forms::Form
	{
	public:
		EspaceClient(int idClient)
		{
			InitializeComponent();
			idCl = idClient;
			sql = gcnew SqlHandler();
			TVA = 0.01;
			LPanier = gcnew System::Collections::Generic::List<data::Article^>();
			LCatalogue = gcnew System::Collections::Generic::List<data::Article^>();

		}

	protected:
		~EspaceClient()
		{
			if (components)
			{
				delete components;
			}
		}





	private:int idCl;
	private:float  TVA;
	private:SqlHandler^ sql;
	private:System::Collections::Generic::List<data::Article^>^ LCatalogue;
	private:System::Collections::Generic::List<data::Article^>^ LPanier;

	protected:

	protected:

	private: System::Windows::Forms::Button^ AddCart;


	private: System::Windows::Forms::NumericUpDown^ NumCounter;

	private: System::Windows::Forms::Label^ LabelTotal;
	private: System::Windows::Forms::Label^ PrixTotalInt;




	private: System::Windows::Forms::Button^ SuppButton;


	private: System::Windows::Forms::Label^ LabelQTY;
	private: System::Windows::Forms::Label^ OutStock;



	
	private: System::Windows::Forms::Button^ btCommender;
	private: System::Windows::Forms::ListBox^ Catalogue;
	private: System::Windows::Forms::ListBox^ Panier;
	private: System::Windows::Forms::Label^ LabelTotalTTC;
	private: System::Windows::Forms::Label^ PrixTotalIntTTC;



	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->AddCart = (gcnew System::Windows::Forms::Button());
			this->NumCounter = (gcnew System::Windows::Forms::NumericUpDown());
			this->LabelTotal = (gcnew System::Windows::Forms::Label());
			this->PrixTotalInt = (gcnew System::Windows::Forms::Label());
			this->SuppButton = (gcnew System::Windows::Forms::Button());
			this->LabelQTY = (gcnew System::Windows::Forms::Label());
			this->OutStock = (gcnew System::Windows::Forms::Label());
			this->btCommender = (gcnew System::Windows::Forms::Button());
			this->Catalogue = (gcnew System::Windows::Forms::ListBox());
			this->Panier = (gcnew System::Windows::Forms::ListBox());
			this->LabelTotalTTC = (gcnew System::Windows::Forms::Label());
			this->PrixTotalIntTTC = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NumCounter))->BeginInit();
			this->SuspendLayout();
			// 
			// AddCart
			// 
			this->AddCart->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->AddCart->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddCart->Location = System::Drawing::Point(531, 293);
			this->AddCart->Margin = System::Windows::Forms::Padding(2);
			this->AddCart->Name = L"AddCart";
			this->AddCart->Size = System::Drawing::Size(60, 28);
			this->AddCart->TabIndex = 2;
			this->AddCart->Text = L"Ajouter";
			this->AddCart->UseVisualStyleBackColor = false;
			this->AddCart->Click += gcnew System::EventHandler(this, &EspaceClient::AddCart_Click);
			// 
			// NumCounter
			// 
			this->NumCounter->Location = System::Drawing::Point(481, 296);
			this->NumCounter->Margin = System::Windows::Forms::Padding(2);
			this->NumCounter->Name = L"NumCounter";
			this->NumCounter->Size = System::Drawing::Size(32, 20);
			this->NumCounter->TabIndex = 5;
			this->NumCounter->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NumCounter->ValueChanged += gcnew System::EventHandler(this, &EspaceClient::NumCounter_ValueChanged);
			// 
			// LabelTotal
			// 
			this->LabelTotal->AutoSize = true;
			this->LabelTotal->Location = System::Drawing::Point(932, 296);
			this->LabelTotal->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelTotal->Name = L"LabelTotal";
			this->LabelTotal->Size = System::Drawing::Size(80, 13);
			this->LabelTotal->TabIndex = 7;
			this->LabelTotal->Text = L"Prix total de HT";
			this->LabelTotal->Click += gcnew System::EventHandler(this, &EspaceClient::LabelTotal_Click);
			// 
			// PrixTotalInt
			// 
			this->PrixTotalInt->AutoSize = true;
			this->PrixTotalInt->Location = System::Drawing::Point(1016, 296);
			this->PrixTotalInt->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->PrixTotalInt->Name = L"PrixTotalInt";
			this->PrixTotalInt->Size = System::Drawing::Size(13, 13);
			this->PrixTotalInt->TabIndex = 8;
			this->PrixTotalInt->Text = L"0";
			this->PrixTotalInt->Click += gcnew System::EventHandler(this, &EspaceClient::PrixTotalInt_Click);
			// 
			// SuppButton
			// 
			this->SuppButton->Location = System::Drawing::Point(1084, 286);
			this->SuppButton->Margin = System::Windows::Forms::Padding(2);
			this->SuppButton->Name = L"SuppButton";
			this->SuppButton->Size = System::Drawing::Size(70, 23);
			this->SuppButton->TabIndex = 13;
			this->SuppButton->Text = L"Supprimer";
			this->SuppButton->UseVisualStyleBackColor = true;
			this->SuppButton->Click += gcnew System::EventHandler(this, &EspaceClient::SuppButton_Click);
			// 
			// LabelQTY
			// 
			this->LabelQTY->AutoSize = true;
			this->LabelQTY->Location = System::Drawing::Point(429, 298);
			this->LabelQTY->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelQTY->Name = L"LabelQTY";
			this->LabelQTY->Size = System::Drawing::Size(48, 13);
			this->LabelQTY->TabIndex = 16;
			this->LabelQTY->Text = L"Quantit�";
			// 
			// OutStock
			// 
			this->OutStock->AutoSize = true;
			this->OutStock->Location = System::Drawing::Point(520, 323);
			this->OutStock->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->OutStock->Name = L"OutStock";
			this->OutStock->Size = System::Drawing::Size(71, 13);
			this->OutStock->TabIndex = 17;
			this->OutStock->Text = L"Plus de stock";
			this->OutStock->Click += gcnew System::EventHandler(this, &EspaceClient::OutStock_Click);
			// 
			// btCommender
			// 
			this->btCommender->Location = System::Drawing::Point(1046, 370);
			this->btCommender->Name = L"btCommender";
			this->btCommender->Size = System::Drawing::Size(91, 40);
			this->btCommender->TabIndex = 19;
			this->btCommender->Text = L"Commander";
			this->btCommender->UseVisualStyleBackColor = true;
			this->btCommender->Click += gcnew System::EventHandler(this, &EspaceClient::btCommender_Click);
			// 
			// Catalogue
			// 
			this->Catalogue->FormattingEnabled = true;
			this->Catalogue->Location = System::Drawing::Point(62, 30);
			this->Catalogue->Name = L"Catalogue";
			this->Catalogue->Size = System::Drawing::Size(473, 251);
			this->Catalogue->TabIndex = 20;
			this->Catalogue->SelectedIndexChanged += gcnew System::EventHandler(this, &EspaceClient::Catalogue_SelectedIndexChanged);
			// 
			// Panier
			// 
			this->Panier->FormattingEnabled = true;
			this->Panier->Location = System::Drawing::Point(621, 30);
			this->Panier->Name = L"Panier";
			this->Panier->Size = System::Drawing::Size(473, 251);
			this->Panier->TabIndex = 21;
			// 
			// LabelTotalTTC
			// 
			this->LabelTotalTTC->AutoSize = true;
			this->LabelTotalTTC->Location = System::Drawing::Point(932, 323);
			this->LabelTotalTTC->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelTotalTTC->Name = L"LabelTotalTTC";
			this->LabelTotalTTC->Size = System::Drawing::Size(86, 13);
			this->LabelTotalTTC->TabIndex = 22;
			this->LabelTotalTTC->Text = L"Prix total de TTC";
			// 
			// PrixTotalIntTTC
			// 
			this->PrixTotalIntTTC->AutoSize = true;
			this->PrixTotalIntTTC->Location = System::Drawing::Point(1022, 323);
			this->PrixTotalIntTTC->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->PrixTotalIntTTC->Name = L"PrixTotalIntTTC";
			this->PrixTotalIntTTC->Size = System::Drawing::Size(13, 13);
			this->PrixTotalIntTTC->TabIndex = 23;
			this->PrixTotalIntTTC->Text = L"0";
			// 
			// EspaceClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1165, 422);
			this->Controls->Add(this->PrixTotalIntTTC);
			this->Controls->Add(this->LabelTotalTTC);
			this->Controls->Add(this->Panier);
			this->Controls->Add(this->Catalogue);
			this->Controls->Add(this->btCommender);
			this->Controls->Add(this->OutStock);
			this->Controls->Add(this->LabelQTY);
			this->Controls->Add(this->SuppButton);
			this->Controls->Add(this->PrixTotalInt);
			this->Controls->Add(this->LabelTotal);
			this->Controls->Add(this->NumCounter);
			this->Controls->Add(this->AddCart);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"EspaceClient";
			this->Text = L"EspaceClient";
			this->Load += gcnew System::EventHandler(this, &EspaceClient::EspaceClient_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NumCounter))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EspaceClient_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		array<array<String^>^>^ data = sql->GetData("SELECT arRref, nomArt, prixHT,stock FROM Catalogue;");

		for each (array<String^> ^ a in data)
		{
			
			
			Catalogue->Items->Add(" " + a[0] + "\t " + a[1] + "................."+a[2]+"€");
			LCatalogue->Add(gcnew data::Article);
			LCatalogue[LCatalogue->Count-1]->idArt = Convert::ToInt32(a[0]);
			LCatalogue[LCatalogue->Count-1]->nomArt = a[1];
			LCatalogue[LCatalogue->Count-1]->prixHT = Convert::ToDouble(a[2]);
			LCatalogue[LCatalogue->Count-1]->nb = Convert::ToInt32(a[3]);

		}

	}

	private: System::Void ChargerDonnees1() {

	
		
	}

	private: System::Void ChargerDonnees2() {
		
	}
			
	
	

	public: System::Void AddCart_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Catalogue->SelectedIndex != -1)
		{
			
			LPanier->Add(LCatalogue[Catalogue->SelectedIndex]);
			data::Article^ tmp= LPanier[LPanier->Count - 1];
			tmp->nb = Convert::ToInt32(NumCounter->Text);
			tmp->prixHT = tmp->prixHT * tmp->nb;

			Panier->Items->Add(tmp->nomArt +" X" + tmp->nb.ToString() + "........." + tmp->prixHT.ToString()+ "€");

			PrixTotalInt->Text = (Convert::ToDouble(PrixTotalInt->Text) + tmp->prixHT).ToString();

			
			PrixTotalIntTTC->Text = (round((Convert::ToDouble(PrixTotalInt->Text) * (1 + TVA))*1000)/1000).ToString();
		}
		

		
	}

	

	

	public: System::Void SuppButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (Panier->SelectedIndex != -1)
		{
			PrixTotalInt->Text = (Convert::ToDouble(PrixTotalInt->Text) - LPanier[Panier->SelectedIndex]->prixHT).ToString();
			PrixTotalIntTTC->Text = (round((Convert::ToDouble(PrixTotalInt->Text) * (1 + TVA)) * 100) / 100).ToString();
			LPanier->RemoveAt(Panier->SelectedIndex);
			Panier->Items->RemoveAt(Panier->SelectedIndex);
		}
				
	}


	private: System::Void FolderWrite() {
		
	}

	private: System::Void FolderButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{

	}


	private: System::Void OutStock_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NumCounter_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void LabelTotal_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PrixTotalInt_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void LabelIdItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void IDItem_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void SuppItem_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void DataList_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

	
private: System::Void Catalogue_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void btCommender_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (LPanier->Count != 0)
	{
		ProjetPoo::Paiement pp;
		this->Hide();

		pp.ShowDialog();
		this->Show();

		if (pp.getTP() == NONE)
		{

			DateTime now = DateTime::Now;

			String^ Now = now.Month + "-" + now.Day + "-" + now.Year;
			LabelTotal->Text =Now;

			//ref
			String^ ref = sql->GetOneData("select nomCl from Client;", 0, 0)->Split(0, 1)[0] + sql->GetOneData("select prenomCl from Client;", 0, 0)->Split(0, 1)[0] + now.Year.ToString() + sql->GetOneData("select max(idCom) from Commande;", 0, 0);// -> fix null exp ; todo ville 3l;
			
			//total tva
			String^ totTVA = (round((Convert::ToDouble(PrixTotalInt->Text) *  TVA) * 100) / 100).ToString()->Replace(',', '.');

			sql->EnterData("insert into Commande(refCom,datelivP,totalHT,totalTVA,totalTTC,dateEm,dateRe,numCl) values('" + ref + "','"+ Now +"',"+PrixTotalInt->Text->Replace(',','.') + "," + totTVA + "," + PrixTotalIntTTC->Text->Replace(',', '.') + ",'" + Now + "','" + Now + "',(select numCl from Client where numCl =" + idCl.ToString() + "));");
			
			

			for each (data::Article ^ a in LPanier)
			{
				sql->EnterData("insert into contenir(idCom, arRref, nb, prixHTMT, prixTTCMT) values((select idCom from Commande where refCom ='"+ref+"'),(select arRref from catalogue where arRref="+a->idArt.ToString() + "),"+ a->nb.ToString() +","+ a->prixHT.ToString()->Replace(',', '.') + "," + (round(a->prixHT*TVA*100)/100).ToString()->Replace(',', '.') + ");");

			}
			String^ tmp;

			


			//insert art

			//insert paiement
		}

	}
	
	
}
};
}

