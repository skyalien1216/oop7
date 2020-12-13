#pragma once

#include <queue>
#include "BarShelf.h"

class Bartender
{
	std::queue<Recipes*> orders;

public:

	Recipes* getOrder();

	std::queue<Recipes*>& getOrders();
	
	void Refill(BarShelf b);
	bool Check(BarShelf b);

	bool MakeOrder(BarShelf b);
};

