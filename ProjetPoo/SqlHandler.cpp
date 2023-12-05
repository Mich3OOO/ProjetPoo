#include "SqlHandler.h"


SqlHandler::SqlHandler()
{
	Connection = gcnew SqlConnection("Server = MICH3000\\SQLEXPRESS; Database = Magasin;  Integrated Security=True;");
}

SqlHandler::~SqlHandler()
{
	delete Connection;
}

void SqlHandler::CreateClient(data::Client ^ Cl)
{		
	System::String^ querry = "insert into Client(nomCl,prenomCl,dateNa,mailCl,verifiCl) values('"+Cl->nomCl+"','"+Cl->prenomCl+"','"+Cl->dateNa +"','"+Cl->Mail+"','" + Code::CodeBin(Cl->Mail, Cl->MotDePasse) + "');";
	SqlCommand^ Command = gcnew SqlCommand(querry,Connection);
	Connection->Open();

	Command->ExecuteNonQuery();
	
	Connection->Close();


}