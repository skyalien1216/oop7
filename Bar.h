#pragma once

#include "Bartender.h"

class Bar
{
	BarShelf shelf;
	Bartender bartender;

	int maxCustomerCount;
	int currentCustomerCount;

public:

	Bar(int max);

	int getCurrentCustomerCount(){ return currentCustomerCount; }
	int getMaxCustomerCount(){ return maxCustomerCount; }
	Bartender getBartender() { return bartender; }
	BarShelf getBarShelf() { return shelf; }

	bool addCustomer();
	int CustomerChoice();
	void UpdateCustomers();

	std::string Menu();
};

