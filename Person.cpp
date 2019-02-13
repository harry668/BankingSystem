#include "Person.h"
//#include "pch.h"

Person::Person()
{
}


Person::~Person()
{
}

void Person::setAccountID(int accID) {
};

int Person::getAccountID() {
	return accountID;
};

void Person::setUserName(string user) {
};

string Person::getUserName() {
	return username;
};

void Person::setPassword(string pass) {
};

string Person::getPassword() {
	return password;
};

void Person::setAccountType(Enums::accountTypes) {
};

Enums::accountTypes Person::getAccountType() {
	return accountType;
};