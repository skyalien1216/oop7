#pragma once

#include <map>
#include "Recipies.h"

class BarShelf
{
	std::map<std::string, int> contents;

public:

	BarShelf();

	bool NeedsRefilling();
	bool CheckForIngridients(Recipes* order);
	void UpdateIngridients(Recipes* order);

	void Refill();

	std::string getInfo();
};

