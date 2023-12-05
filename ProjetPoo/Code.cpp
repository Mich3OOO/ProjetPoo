#include "Code.h"

String^ Code::CodeBin(String^ msg, String^ key)
{
	String^ r = "";

	int index = 0;
	char tmp;

	if (msg->Length >= key->Length)
	{
		
		for each (char c in msg)
		{
			tmp = (std::bitset<8>(c) ^ std::bitset<8>(key[index])).to_ullong();
			
			r += tmp ;
			index++;
			if (index >= key->Length)
			{
				index = 0;
			}
		}
	}
	else
	{

		for each (char c in key)
		{
			tmp = (std::bitset<8>(c) ^ std::bitset<8>(msg[index])).to_ullong();

			r += tmp;
			index++;
			if (index >= msg->Length)
			{
				index = 0;
			}
		}

	}
	






	return r;

}
String^ Code::DeCodeBin(String^ msg, String^ key)
{
	return Code::CodeBin(msg, key);

}