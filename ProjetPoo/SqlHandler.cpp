#include "SqlHandler.h"
#include<iostream>

SqlHandler::SqlHandler()
{
	Connection = gcnew SqlConnection("Server = MICH3000\\SQLEXPRESS; Database = Magasin;  Integrated Security=True;");
}

void SqlHandler::CreateClient(data::Client ^ Cl)
{		
	System::String^ querry = "insert into Client(nomCl,prenomCl,dateNa,mailCl,verifiCl) values('"+Cl->nomCl+"','"+Cl->prenomCl+"','"+Cl->dateNa +"','"+Cl->Mail+"','" + Cl->Mail2 + "');";
	SqlCommand^ Command = gcnew SqlCommand(querry,Connection);
	Connection->Open();

	Command->ExecuteNonQuery();
	
	Connection->Close();


}