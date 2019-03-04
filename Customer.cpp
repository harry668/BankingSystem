#include"pch.h"
#include "Customer.h"


Customer::Customer()
{
}


Customer::~Customer()
{
}

Customer::Customer(int ID, string user, string pass, Enums::accountTypes accType, double overdraftAmount) {
	accountID = ID;
	username = user;
	password = pass;
	accountType = accType;
	overdraftLimit = overdraftAmount;
};

double Customer::getCurrentCredit() {
	return currentCredit;
};

void Customer::setCurrentCredit(double credit) {
	currentCredit = credit;
};

bool Customer::deposit(double depositAmount) {
	currentCredit += depositAmount;
	cout << "Your new credit value is: £" << currentCredit;
	//returns true if deposit successful
	return true;
};

bool Customer::withdraw(double withdrawAmount) {
	if (currentCredit - withdrawAmount > 0 - overdraftLimit) {
		currentCredit -= withdrawAmount;
		cout << "Your new credit value is: £" << currentCredit;
		return true;
	}
	else {
		cout << "Your account does not contain enough credit to withdraw that amount";
		return false;
	}

}
