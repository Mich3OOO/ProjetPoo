/*
$$$$$$$$\  $$$$$$\  $$$$$$$\  $$\   $$\ $$\                      $$$$$$\                  $$\
\____$$  |$$ ___$$\ $$  __$$\ $$ | $$  |$  |                    $$  __$$\                 $$ |
	$$  / \_/   $$ |$$ |  $$ |$$ |$$  / \_/$$$$$$$\             $$ /  \__| $$$$$$\   $$$$$$$ | $$$$$$\
   $$  /    $$$$$ / $$ |  $$ |$$$$$  /    $$  _____|            $$ |      $$  __$$\ $$  __$$ |$$  __$$\
  $$  /     \___$$\ $$ |  $$ |$$  $$<     \$$$$$$\              $$ |      $$ /  $$ |$$ /  $$ |$$$$$$$$ |
 $$  /    $$\   $$ |$$ |  $$ |$$ |\$$\     \____$$\             $$ |  $$\ $$ |  $$ |$$ |  $$ |$$   ____|
$$$$$$$$\ \$$$$$$  |$$$$$$$  |$$ | \$$\   $$$$$$$  |            \$$$$$$  |\$$$$$$  |\$$$$$$$ |\$$$$$$$\
\________| \______/ \_______/ \__|  \__|  \_______/              \______/  \______/  \_______| \_______|
*/

#pragma once
//#include <string>
//#include <iostream>
//#include <fstream>
//#include <msclr/marshal_cppstd.h>
//#include <vcclr.h>

//
namespace ProjetPoo {

	using namespace System;
	using namespace System::IO;
	using namespace std;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	public ref class EspaceClient : public System::Windows::Forms::Form
	{
	public:
		EspaceClient(void)
		{
			InitializeComponent();
			i = 1;
		}

	protected:
		~EspaceClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ DataList;
	private: System::Windows::Forms::DataGridView^ DataList2;
	protected:

	protected:

	private: System::Windows::Forms::Button^ AddCart;


	private: System::Windows::Forms::NumericUpDown^ NumCounter;

	private: System::Windows::Forms::Label^ LabelTotal;
	private: System::Windows::Forms::Label^ PrixTotalInt;

	private: System::Windows::Forms::Label^ LabelIdItem;


	private: System::Windows::Forms::Button^ SuppButton;
	private: System::Windows::Forms::NumericUpDown^ IDItem;

	private: System::Windows::Forms::Label^ LabelQTY;
	private: System::Windows::Forms::Label^ OutStock;
	private: System::Windows::Forms::Button^ FolderButton;


	private:int i;//= 1;


	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->DataList = (gcnew System::Windows::Forms::DataGridView());
			this->DataList2 = (gcnew System::Windows::Forms::DataGridView());
			this->AddCart = (gcnew System::Windows::Forms::Button());
			this->NumCounter = (gcnew System::Windows::Forms::NumericUpDown());
			this->LabelTotal = (gcnew System::Windows::Forms::Label());
			this->PrixTotalInt = (gcnew System::Windows::Forms::Label());
			this->LabelIdItem = (gcnew System::Windows::Forms::Label());
			this->SuppButton = (gcnew System::Windows::Forms::Button());
			this->IDItem = (gcnew System::Windows::Forms::NumericUpDown());
			this->LabelQTY = (gcnew System::Windows::Forms::Label());
			this->OutStock = (gcnew System::Windows::Forms::Label());
			this->FolderButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataList))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataList2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NumCounter))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IDItem))->BeginInit();
			this->SuspendLayout();
			// 
			// DataList
			// 
			this->DataList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataList->Location = System::Drawing::Point(83, 37);
			this->DataList->Name = L"DataList";
			this->DataList->RowHeadersWidth = 51;
			this->DataList->RowTemplate->Height = 24;
			this->DataList->Size = System::Drawing::Size(631, 296);
			this->DataList->TabIndex = 0;
			this->DataList->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &EspaceClient::DataList_CellContentClick);
			// 
			// DataList2
			// 
			this->DataList2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataList2->Location = System::Drawing::Point(848, 37);
			this->DataList2->Name = L"DataList2";
			this->DataList2->RowHeadersWidth = 51;
			this->DataList2->RowTemplate->Height = 24;
			this->DataList2->Size = System::Drawing::Size(604, 296);
			this->DataList2->TabIndex = 1;
			// 
			// AddCart
			// 
			this->AddCart->BackColor = System::Drawing::Color::Red;
			this->AddCart->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddCart->Location = System::Drawing::Point(742, 345);
			this->AddCart->Name = L"AddCart";
			this->AddCart->Size = System::Drawing::Size(80, 35);
			this->AddCart->TabIndex = 2;
			this->AddCart->Text = L"Ajouter";
			this->AddCart->UseVisualStyleBackColor = false;
			this->AddCart->Click += gcnew System::EventHandler(this, &EspaceClient::AddCart_Click);
			// 
			// NumCounter
			// 
			this->NumCounter->Location = System::Drawing::Point(709, 395);
			this->NumCounter->Name = L"NumCounter";
			this->NumCounter->Size = System::Drawing::Size(42, 22);
			this->NumCounter->TabIndex = 5;
			this->NumCounter->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NumCounter->ValueChanged += gcnew System::EventHandler(this, &EspaceClient::NumCounter_ValueChanged);
			// 
			// LabelTotal
			// 
			this->LabelTotal->AutoSize = true;
			this->LabelTotal->Location = System::Drawing::Point(1243, 364);
			this->LabelTotal->Name = L"LabelTotal";
			this->LabelTotal->Size = System::Drawing::Size(76, 16);
			this->LabelTotal->TabIndex = 7;
			this->LabelTotal->Text = L"Prix total de";
			this->LabelTotal->Click += gcnew System::EventHandler(this, &EspaceClient::LabelTotal_Click);
			// 
			// PrixTotalInt
			// 
			this->PrixTotalInt->AutoSize = true;
			this->PrixTotalInt->Location = System::Drawing::Point(1322, 364);
			this->PrixTotalInt->Name = L"PrixTotalInt";
			this->PrixTotalInt->Size = System::Drawing::Size(44, 16);
			this->PrixTotalInt->TabIndex = 8;
			this->PrixTotalInt->Text = L"label1";
			this->PrixTotalInt->Click += gcnew System::EventHandler(this, &EspaceClient::PrixTotalInt_Click);
			// 
			// LabelIdItem
			// 
			this->LabelIdItem->AutoSize = true;
			this->LabelIdItem->Location = System::Drawing::Point(757, 426);
			this->LabelIdItem->Name = L"LabelIdItem";
			this->LabelIdItem->Size = System::Drawing::Size(76, 16);
			this->LabelIdItem->TabIndex = 10;
			this->LabelIdItem->Text = L"Id de l\'objet";
			this->LabelIdItem->Click += gcnew System::EventHandler(this, &EspaceClient::LabelIdItem_Click);
			// 
			// SuppButton
			// 
			this->SuppButton->Location = System::Drawing::Point(1087, 364);
			this->SuppButton->Name = L"SuppButton";
			this->SuppButton->Size = System::Drawing::Size(93, 28);
			this->SuppButton->TabIndex = 13;
			this->SuppButton->Text = L"Supprimer";
			this->SuppButton->UseVisualStyleBackColor = true;
			this->SuppButton->Click += gcnew System::EventHandler(this, &EspaceClient::SuppButton_Click);
			// 
			// IDItem
			// 
			this->IDItem->Location = System::Drawing::Point(708, 423);
			this->IDItem->Name = L"IDItem";
			this->IDItem->Size = System::Drawing::Size(43, 22);
			this->IDItem->TabIndex = 14;
			this->IDItem->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// LabelQTY
			// 
			this->LabelQTY->AutoSize = true;
			this->LabelQTY->Location = System::Drawing::Point(757, 397);
			this->LabelQTY->Name = L"LabelQTY";
			this->LabelQTY->Size = System::Drawing::Size(56, 16);
			this->LabelQTY->TabIndex = 16;
			this->LabelQTY->Text = L"Quantit�";
			// 
			// OutStock
			// 
			this->OutStock->AutoSize = true;
			this->OutStock->Location = System::Drawing::Point(829, 397);
			this->OutStock->Name = L"OutStock";
			this->OutStock->Size = System::Drawing::Size(87, 16);
			this->OutStock->TabIndex = 17;
			this->OutStock->Text = L"Plus de stock";
			this->OutStock->Click += gcnew System::EventHandler(this, &EspaceClient::OutStock_Click);
			// 
			// FolderButton
			// 
			this->FolderButton->Location = System::Drawing::Point(1087, 420);
			this->FolderButton->Name = L"FolderButton";
			this->FolderButton->Size = System::Drawing::Size(93, 29);
			this->FolderButton->TabIndex = 18;
			this->FolderButton->Text = L"Fracture";
			this->FolderButton->UseVisualStyleBackColor = true;
			this->FolderButton->Click += gcnew System::EventHandler(this, &EspaceClient::FolderButton_Click);
			// 
			// EspaceClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Lime;
			this->ClientSize = System::Drawing::Size(1553, 520);
			this->Controls->Add(this->FolderButton);
			this->Controls->Add(this->OutStock);
			this->Controls->Add(this->LabelQTY);
			this->Controls->Add(this->IDItem);
			this->Controls->Add(this->SuppButton);
			this->Controls->Add(this->LabelIdItem);
			this->Controls->Add(this->PrixTotalInt);
			this->Controls->Add(this->LabelTotal);
			this->Controls->Add(this->NumCounter);
			this->Controls->Add(this->AddCart);
			this->Controls->Add(this->DataList2);
			this->Controls->Add(this->DataList);
			this->Name = L"EspaceClient";
			this->Text = L"EspaceClient";
			this->Load += gcnew System::EventHandler(this, &EspaceClient::EspaceClient_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataList))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataList2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NumCounter))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IDItem))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EspaceClient_Load(System::Object^ sender, System::EventArgs^ e) {
		OutStock->Visible = false;
		PrixTotalInt->Text = "0";
		String^ queryInsert = "DELETE FROM Contenir;";
		ExecuterCommandeSQL(queryInsert);
		ChargerDonnees1();
		ChargerDonnees2();
	}

		   void ExecuterCommandeSQL(String^ query) {
			   String^ connectionString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=projetpoo;Integrated Security=True;Encrypt=False";
			   SqlConnection^ connexion = gcnew SqlConnection(connectionString);
			   connexion->Open();
			   SqlCommand^ commande = gcnew SqlCommand(query, connexion);
			   int nombreDeLignesAffectees = commande->ExecuteNonQuery();
			   connexion->Close();
		   }

	private: System::Void ChargerDonnees1() {
		String^ Query = "SELECT arRref, nomArt, stock, prixHT FROM Catalogue; ";
		String^ connectionString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=projetpoo;Integrated Security=True;Encrypt=False";
		SqlConnection^ connexion = gcnew SqlConnection(connectionString);
		connexion->Open();
		SqlCommand^ commande = gcnew SqlCommand(Query, connexion);
		SqlDataAdapter^ adaptateur = gcnew SqlDataAdapter(commande);
		DataTable^ dataTable = gcnew DataTable();
		adaptateur->Fill(dataTable);
		DataList->DataSource = dataTable;
		connexion->Close();
	}

	private: System::Void ChargerDonnees2() {
		String^ Query = "SELECT C.ArRref, CA.NomArt, C.PrixHTMT, C.nb  FROM Contenir C JOIN Catalogue CA ON C.arRref = CA.arRref; ";
		String^ connectionString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=projetpoo;Integrated Security=True;Encrypt=False";
		SqlConnection^ connexion = gcnew SqlConnection(connectionString);
		connexion->Open();
		SqlCommand^ commande = gcnew SqlCommand(Query, connexion);
		SqlDataAdapter^ adaptateur = gcnew SqlDataAdapter(commande);
		DataTable^ dataTable = gcnew DataTable();
		adaptateur->Fill(dataTable);
		DataList2->DataSource = dataTable;
		connexion->Close();
	}

	private: bool ObtenirNombreDeLignes(int% nombreDeLignes) {
		String^ connectionString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=projetpoo;Integrated Security=True;Encrypt=False";
		SqlConnection^ connexion = gcnew SqlConnection(connectionString);
		connexion->Open();
		String^ queryCount = "SELECT COUNT(*) FROM Catalogue";
		SqlCommand^ commandeCount = gcnew SqlCommand(queryCount, connexion);
		nombreDeLignes = Convert::ToInt32(commandeCount->ExecuteScalar());
		connexion->Close();
		return true;
	}

	public: int CalcPrice() {
		int price;
		int number;
		String^ connectionString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=projetpoo;Integrated Security=True;Encrypt=False";
		SqlConnection^ connexion = gcnew SqlConnection(connectionString);
		connexion->Open();
		String^ queryCount = "SELECT COUNT(*) AS NombreDeLignes FROM Contenir; ";
		SqlCommand^ commandeCount = gcnew SqlCommand(queryCount, connexion);
		number = Convert::ToInt32(commandeCount->ExecuteScalar());
		if (number > 0) {
			String^ queryCount = "SELECT SUM(nb * prixHTMT) AS Total FROM Contenir;";
			SqlCommand^ commandeCount = gcnew SqlCommand(queryCount, connexion);
			price = Convert::ToInt32(commandeCount->ExecuteScalar());
			connexion->Close();
			return price;
		}
	}

	public: int Stock(Decimal ID) {
		int ActualStock;
		String^ connectionString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=projetpoo;Integrated Security=True;Encrypt=False";
		SqlConnection^ connexion = gcnew SqlConnection(connectionString);
		connexion->Open();
		String^ queryCount = "SELECT stock FROM Catalogue WHERE arRref = '" + ID + "'; ";
		SqlCommand^ commandeCount = gcnew SqlCommand(queryCount, connexion);
		ActualStock = Convert::ToInt32(commandeCount->ExecuteScalar());
		connexion->Close();
		return ActualStock;
	}
	public: String^ GetSelectedItemName() {
		String^ Name;
		String^ connectionString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=projetpoo;Integrated Security=True;Encrypt=False";
		SqlConnection^ connexion = gcnew SqlConnection(connectionString);
		connexion->Open();
		String^ queryCount = "SELECT nomArt FROM Catalogue WHERE arRref = '" + IDItem->Value + "'; ";
		SqlCommand^ commandeCount = gcnew SqlCommand(queryCount, connexion);
		Name = Convert::ToString(commandeCount->ExecuteScalar());
		connexion->Close();
		return Name;

	}

	public: System::Void AddCart_Click(System::Object^ sender, System::EventArgs^ e) {
		if (IDItem->Text != "" && Stock(IDItem->Value) >= NumCounter->Value) {
			OutStock->Visible = false;
			String^ NomArt;
			Decimal Quantity;
			Decimal PrixHT;
			String^ connectionString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=projetpoo;Integrated Security=True;Encrypt=False";
			SqlConnection sqlConn(connectionString);
			sqlConn.Open();
			String^ Query = "SELECT * FROM Catalogue WHERE arRref = '" + IDItem->Text + "'; ";
			SqlCommand command(Query, % sqlConn);
			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {
				NomArt = GetSelectedItemName();
				Quantity = NumCounter->Value;
				PrixHT = reader->GetDecimal(4);
			}
			ActualiseStock();
			String^ queryInsert = "INSERT INTO Contenir (arRref,nomArt,nb,prixHTMT) VALUES('" + i + "','" + NomArt + "', '" + Quantity + "', '" + PrixHT + "'); ";
			i++;
			ExecuterCommandeSQL(queryInsert);
			ChargerDonnees2();
			PrixTotalInt->Text = CalcPrice().ToString();
		}
		else if (Stock(IDItem->Value) < NumCounter->Value) {
			OutStock->Visible = true;
		}
	}

	private: System::Void ActualiseStock() {
		String^ connectionString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=projetpoo;Integrated Security=True;Encrypt=False";
		SqlConnection^ connexion = gcnew SqlConnection(connectionString);
		String^ queryCount = "UPDATE Catalogue SET stock = stock - '" + NumCounter->Value + "' WHERE arRref = '" + IDItem->Value + "'; ";
		ExecuterCommandeSQL(queryCount);
		ChargerDonnees1();
	}

	private: int CancelBuyStock() {
		int ToADD;
		String^ connectionString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=projetpoo;Integrated Security=True;Encrypt=False";
		SqlConnection^ connexion = gcnew SqlConnection(connectionString);
		connexion->Open();
		String^ queryCount = "SELECT nb FROM Contenir ORDER BY ID DESC; ";
		SqlCommand^ commandeCount = gcnew SqlCommand(queryCount, connexion);
		ToADD = Convert::ToInt32(commandeCount->ExecuteScalar());
		connexion->Close();
		return ToADD;
	}

	private: System::String^ GetNameLastSupp() {
		String^ LastName;
		String^ connectionString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=projetpoo;Integrated Security=True;Encrypt=False";
		SqlConnection^ connexion = gcnew SqlConnection(connectionString);
		connexion->Open();
		String^ queryCount = "SELECT NomArticle FROM Contenir ORDER BY ID DESC; ";
		SqlCommand^ commandeCount = gcnew SqlCommand(queryCount, connexion);
		LastName = Convert::ToString(commandeCount->ExecuteScalar());
		connexion->Close();
		return LastName;
	}

	public: System::Void SuppButton_Click(System::Object^ sender, System::EventArgs^ e) {
		int actual = i - 1;
		String^ connectionString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=projetpoo;Integrated Security=True;Encrypt=False";
		SqlConnection^ connexion = gcnew SqlConnection(connectionString);
		connexion->Open();
		String^ queryCounte = "UPDATE Catalogue SET stock = stock + '" + CancelBuyStock() + "' WHERE nomArt = '" + GetNameLastSupp() + "'; ";
		ExecuterCommandeSQL(queryCounte);
		ChargerDonnees1();
		String^ queryCount = "DELETE FROM Contenir WHERE arRref = '" + actual + "'; ";
		ExecuterCommandeSQL(queryCount);
		ChargerDonnees2();
		if (i >= 2) {
			i--;
		}
		PrixTotalInt->Text = CalcPrice().ToString();
	}

	private:String^ GetPrinted() {
		String^ Printed = "Votre Panier total a un prix de " + PrixTotalInt->Text + "� \n";
		String^ Name;
		String^ Quantity;
		String^ PriceUnit;
		int iii;
		int NbArticles;
		String^ connectionString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=projetpoo;Integrated Security=True;Encrypt=False";
		SqlConnection^ connexion = gcnew SqlConnection(connectionString);
		connexion->Open();
		String^ queryCount3 = "SELECT COUNT(*) AS NombreDeLignes FROM Contenir; ";
		SqlCommand^ commandeCount3 = gcnew SqlCommand(queryCount3, connexion);
		NbArticles = Convert::ToInt16(commandeCount3->ExecuteScalar());
		if (NbArticles > 0) {
			for (iii = 1; iii < NbArticles + 1; iii++) {
				String^ queryCount = "SELECT NomArticle FROM Contenir WHERE arRreft = '" + iii + "'; ";
				SqlCommand^ commandeCount = gcnew SqlCommand(queryCount, connexion);
				Name = Convert::ToString(commandeCount->ExecuteScalar());

				String^ queryCount1 = "SELECT nb FROM Contenir WHERE ID = '" + iii + "'; ";
				SqlCommand^ commandeCount1 = gcnew SqlCommand(queryCount1, connexion);
				Quantity = Convert::ToString(commandeCount1->ExecuteScalar());

				String^ queryCount2 = "SELECT PrixHTMT FROM Contenir WHERE ID = '" + iii + "'; ";
				SqlCommand^ commandeCount2 = gcnew SqlCommand(queryCount2, connexion);
				PriceUnit = Convert::ToString(commandeCount2->ExecuteScalar());

				Printed = Printed + Name + " " + Quantity + "x " + PriceUnit + "�" + "\n";
			}
			Name = "";
			Quantity = "";
			PriceUnit = "";
			connexion->Close();
			return Printed;
		}
	}

	private: System::Void FolderWrite() {
		int NbArticles;
		String^ connectionString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=projetpoo;Integrated Security=True;Encrypt=False";
		SqlConnection^ connexion = gcnew SqlConnection(connectionString);
		connexion->Open();
		String^ queryCount3 = "SELECT COUNT(*) AS NombreDeLignes FROM Contenir; ";
		SqlCommand^ commandeCount3 = gcnew SqlCommand(queryCount3, connexion);
		NbArticles = Convert::ToInt16(commandeCount3->ExecuteScalar());
		connexion->Close();
		if (NbArticles) {
			String^ ToPrint = GetPrinted();
			String^ nomFichier = "C:/test/Facture.txt";
			//std::string ToPrintStd = msclr::interop::marshal_as<std::string>(ToPrint);
			//std::string nomFichierStd = msclr::interop::marshal_as<std::string>(nomFichier);
			StreamWriter^ sw = gcnew StreamWriter(nomFichier);
			sw->Write(ToPrint);
			sw->Close();
		}
	}

	private: System::Void FolderButton_Click(System::Object^ sender, System::EventArgs^ e) {
		FolderWrite();
	}

		   /// Useless ///
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

	};
}
/*
$$$$$$$$\  $$$$$$\  $$$$$$$\  $$\   $$\ $$\                      $$$$$$\                  $$\
\____$$  |$$ ___$$\ $$  __$$\ $$ | $$  |$  |                    $$  __$$\                 $$ |
	$$  / \_/   $$ |$$ |  $$ |$$ |$$  / \_/$$$$$$$\             $$ /  \__| $$$$$$\   $$$$$$$ | $$$$$$\
   $$  /    $$$$$ / $$ |  $$ |$$$$$  /    $$  _____|            $$ |      $$  __$$\ $$  __$$ |$$  __$$\
  $$  /     \___$$\ $$ |  $$ |$$  $$      \$$$$$$\              $$ |      $$ /  $$ |$$ /  $$ |$$$$$$$$ |
 $$  /    $$\   $$ |$$ |  $$ |$$ |\$$\     \____$$\             $$ |  $$\ $$ |  $$ |$$ |  $$ |$$   ____|
$$$$$$$$\ \$$$$$$  |$$$$$$$  |$$ | \$$\   $$$$$$$  |            \$$$$$$  |\$$$$$$  |\$$$$$$$ |\$$$$$$$\
\________| \______/ \_______/ \__|  \__|  \_______/              \______/  \______/  \_______| \_______|
*/
