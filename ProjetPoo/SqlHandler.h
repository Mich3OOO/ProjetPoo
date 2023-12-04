#pragma once
#include"data.h"
using namespace System::Data::SqlClient;
ref class SqlHandler
{
private:
	SqlConnection^ Connection;
	
	SqlDataAdapter^ Adapter;
public:
	SqlHandler();
	void CreateClient(data::Client ^ Cl);


};

