#pragma once
#include <bitset>
using namespace System;
ref class Code
{
public:
	static String^ CodeBin(String^ msg, String^ key);
	static String^ DeCodeBin(String^ msg, String^ key);
};

//jjj