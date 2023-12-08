#include "Code.h"

System::String^ Code::CodeBin(String^ msg, System::String^ key)
{
	System::Text::Encoding^ encoder = System::Text::Encoding::ASCII;
	array<Byte>^ enc = encoder->GetBytes(msg);
	array<Byte>^ tmp = gcnew array<Byte>(msg->Length);
	int index = 0;

	if (msg->Length >= key->Length)
	{
		for (int i = 0; i < msg->Length; i++)
		{
			tmp[i] = enc[i] ^ int(key[index]);
			index++;
			if (index >= key->Length)
			{
				index = 0;
			}
		}
	}
	else
	{
		for (int i = 0; i < key->Length; i++)
		{
			tmp[index] = enc[index] ^ int(key[i]);
			index++;
			if (index >= enc->Length)
			{
				index = 0;
			}
		}
	}
	
	
	
	return encoder->GetString(tmp);

}


System::String^ Code::DeCodeBin(System::String^ msg, System::String^ key)
{
	
	return Code::CodeBin(msg, key);

}
























/*
____
|M   |
|(\/)|
| \/ |
|   M|
`----`
*/