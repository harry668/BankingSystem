#pragma once
#include "Person.h"
#include"pch.h"

class Customer : public Person
{
public:

	double currentCredit;
	double overdraftLimit;


	Customer();
	~Customer();
	Customer(int ID, string user, string pass, Enums::accountTypes accType, double overdraftAmount);

	double getCurrentCredit();
	void setCurrentCredit(double credit);

	bool deposit(double depositAmount);
	bool withdraw(double withdrawAmount);
};

