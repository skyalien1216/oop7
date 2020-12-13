#include "BarShelf.h"
#include <time.h>

BarShelf::BarShelf()
{
	srand(time(0));

	contents["Белый ром"] = rand() % 2000;
	contents["Сахарный сироп"] = rand() % 2000;
	contents["Сода"] = rand() % 2000;
	contents["Мята"] = rand() % 2000;
	contents["Лайм"] = rand() % 2000;
	contents["Текила"] = rand() % 2000;
	contents["Апельсиновый сок"] = 0;
	contents["Сироп Гренадин"] = rand() % 2000;
	contents["Сок лимона"] = rand() % 2000;
	contents["Апельсиновый ликер"] = rand() % 2000;
	contents["Водка"] = rand() % 2000;
}

bool BarShelf::NeedsRefilling()
{
	bool result = false;

	for (auto it = contents.begin(); it != contents.end() && !result; it++)
		if (it->second == 0)
			result = true;
	
	return result;
}

bool BarShelf::CheckForIngridients(Recipes* order)
{
	bool result = true;

	for (int i = 0; i < order->getNumOfIngridients() && result; i++)  // мэп или 2 вектора!!!
		if (contents[order->getIngridients()[i]] < order->getAmountOfIngridients()[i])
			result = false;

	return result;
}

void BarShelf::UpdateIngridients(Recipes* order)
{

	for (int i = 0; i < order->getNumOfIngridients(); i++)
		contents[order->getIngridients()[i]] -= order->getAmountOfIngridients()[i];
}

void BarShelf::Refill()
{
	for (auto it = contents.begin(); it != contents.end(); it++)
		if (it->second == 0) 
		{
			srand(time(0));
			it->second = rand() % 1000;
		}
}

std::string BarShelf::getInfo()
{
	std::string s;

	s += ">>Информация об ингредиентах\n\n";

	for (auto it = contents.begin(); it != contents.end(); it++)
		s = s + it->first + ": " + std::to_string(it->second) + "\n";

	return s;
}
