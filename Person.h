#pragma once
#include <string>
#include <iostream>
#include "Enums.h"
#include"pch.h"

using namespace std;

class Person
{
public:

	int accountID;

	string username;
	string password;

	Enums::accountTypes accountType;


	Person();
	~Person();

	void setAccountID(int accID);
	int getAccountID();

	void setUserName(string user);
	string getUserName();

	void setPassword(string pass);
	string getPassword();

	void setAccountType(Enums::accountTypes);
	Enums::accountTypes getAccountType();
};

