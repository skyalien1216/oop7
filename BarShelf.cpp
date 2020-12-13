#include "BarShelf.h"
#include <time.h>

BarShelf::BarShelf()
{
	srand(time(0));

	contents["����� ���"] = rand() % 2000;
	contents["�������� �����"] = rand() % 2000;
	contents["����"] = rand() % 2000;
	contents["����"] = rand() % 2000;
	contents["����"] = rand() % 2000;
	contents["������"] = rand() % 2000;
	contents["������������ ���"] = 0;
	contents["����� ��������"] = rand() % 2000;
	contents["��� ������"] = rand() % 2000;
	contents["������������ �����"] = rand() % 2000;
	contents["�����"] = rand() % 2000;
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

	for (int i = 0; i < order->getNumOfIngridients() && result; i++)  // ��� ��� 2 �������!!!
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

	s += ">>���������� �� ������������\n\n";

	for (auto it = contents.begin(); it != contents.end(); it++)
		s = s + it->first + ": " + std::to_string(it->second) + "\n";

	return s;
}
