#include "SqlHandler.h"



SqlHandler::SqlHandler()
{
	
	Connection = gcnew SqlConnection("Server = MICH3000\\SQLEXPRESS; Database = Magasin;  Integrated Security=True;");
	
}

SqlHandler::~SqlHandler()
{
	
	delete Connection;

}

void SqlHandler::EnterData(String^ Querry)
{		
	//System::String^ querry = "insert into Client(nomCl,prenomCl,dateNa,mailCl,verifiCl) values('"+Cl->nomCl+"','"+Cl->prenomCl+"','"+Cl->dateNa +"','"+Cl->Mail+"','" + Code::CodeBin(Cl->Mail, Cl->MotDePasse) + "');";
	SqlCommand^ Command = gcnew SqlCommand(Querry,Connection);
	
	Connection->Open();
	Command->ExecuteNonQuery();
	Connection->Close();
	

}

array<array<String^>^>^ SqlHandler::GetData(String^ Querry)
{
	
	if (Connection->State == System::Data::ConnectionState::Open)
	{
		Connection->Close();
	}
	//System::String^ querry = "Select * from " + Tab + ";";
	
	SqlCommand^ Command = gcnew SqlCommand(Querry, Connection);
	array<array<String^>^>^ r;
	Connection->Open();
	
	SqlDataReader^ reader = Command->ExecuteReader();
	r = DataToStr(reader);
	Connection->Close();
	
	
	
	
	return r;
}

array<array<String^>^>^ SqlHandler::DataToStr(SqlDataReader^ reader)
{
	System::Collections::Generic::List<array<String^>^>^ l= gcnew System::Collections::Generic::List<array<String^>^>();
	
	while (reader->Read())
	{
		array<String^>^ tmp = gcnew array<String^>(reader->FieldCount);
		for (int i = 0; i < reader->FieldCount; i++)
		{
			tmp[i] = reader->GetValue(i)->ToString();
		}
		l->Add(tmp);
		
	}
	return l->ToArray();
}

String^ SqlHandler::GetOneData(String^ Querry, int i, int j)
{
	return GetData(Querry)[i][j];
}












/*
____
|M   |
|(\/)|
| \/ |
|   M|
`----`
*/