#pragma once
#include "data.h"
#include "Code.h"


using namespace System::Data::SqlClient;
ref class SqlHandler
{
private:
	SqlConnection^ Connection;


	array<array<String^>^>^ DataToStr(SqlDataReader^ reader);
public:

	SqlHandler();
	~SqlHandler();
	void EnterData(String^ Querry);

	array<array<String^>^>^ GetData(String^ Querry);
	String^ GetOneData(String^ Querry, int i,int j);


};

