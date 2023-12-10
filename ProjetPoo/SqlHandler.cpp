#include "SqlHandler.h"



SqlHandler::SqlHandler()
{
	
	Connection = gcnew SqlConnection("Server = localHost\\SQLEXPRESS; Database = Projetpoo;  Integrated Security=True;");
	
}

SqlHandler::~SqlHandler()
{
	
	delete Connection;

}

void SqlHandler::EnterData(String^ Querry)
{		
	if (Connection->State == System::Data::ConnectionState::Open)
	{
		Connection->Close();
	}
	
	SqlCommand^ Command = gcnew SqlCommand(Querry,Connection);
	try
	{
		Connection->Open();
		Command->ExecuteNonQuery();
		Connection->Close();
	}
	catch (Exception^ ex)
	{
		System::Windows::Forms::MessageBox::Show("Une erreur s'est produite : " + ex->Message, "Erreur", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
	}
	
	

}

array<array<String^>^>^ SqlHandler::GetData(String^ Querry)
{

	
	
	SqlCommand^ Command = gcnew SqlCommand(Querry, Connection);
	array<array<String^>^>^ r;


	try
	{
	Connection->Open();
	
	SqlDataReader^ reader = Command->ExecuteReader();
	r = DataToStr(reader);
	Connection->Close();
	}
	catch (Exception^ ex)
	{
		System::Windows::Forms::MessageBox::Show("Une erreur s'est produite : " + ex->Message, "Erreur", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
	}
	
	
	
	
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