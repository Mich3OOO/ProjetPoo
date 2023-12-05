#pragma once
#include "data.h"
#include "Code.h"
using namespace System::Data::SqlClient;
ref class SqlHandler
{
private:
	SqlConnection^ Connection;
	
	SqlDataAdapter^ Adapter;
public:
	SqlHandler();
	~SqlHandler();
	void CreateClient(data::Client ^ Cl);


};

