#pragma once
#include <iostream>
#include <string>

//make data types that hold 8 character, 16 character using "char[8]"
using namespace std;
struct BankAccount
{
	int id;
	char password[8];
	char Name[16];
	int Balance;
};