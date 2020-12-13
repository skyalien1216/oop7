#include "Bar.h"

#include <time.h>
#include <iostream>

Bar::Bar(int max)
{
	maxCustomerCount = max;
	currentCustomerCount = 0;
}

bool Bar::addCustomer()
{
	if (currentCustomerCount == maxCustomerCount) 
		return false;
	else 
	{
		currentCustomerCount++;

		switch (CustomerChoice()) 
		{
		case 1:
		{
			Mojito* m = new Mojito;
			bartender.getOrders().push(m);
		}
			break;

		case 2: 
		{
			TequilaSunrise* ts = new TequilaSunrise;
			bartender.getOrders().push(ts);
		}
			break;

		case 3:
		{
			Daiquiri* d = new Daiquiri;
			bartender.getOrders().push(d);
		}
			break;
		
		case 4: 
		{
			Margarita* m = new Margarita;
			bartender.getOrders().push(m);
		}
			break;

		case 5: 
		{
			Screwdriver* s = new Screwdriver;
			bartender.getOrders().push(s);
		}
			break;

		case 6: 
		{
			CubaLibre* m = new CubaLibre;
			bartender.getOrders().push(m);
		}
			break;
		}

		return true;
		
	}
		
}

int Bar::CustomerChoice()
{
	std::cout << "Если вы хотите сами указать заказ, введите 2\n";

	int choice;

	std::cin >> choice;

	if (choice != 2)
	{
		srand(time(0));

		return rand() % 6 + 1;
	}
	else 
	{
		std::cout << Menu();
		std::cout << "Ваш выбор:\n > ";
		std::cin >> choice;

		return choice;
	}
}

std::string Bar::Menu()
{
	std::string s = ">>Меню:\n";

	s += "1. Мохито\n2. Текила Санрайз\n3. Дайкири\n4. Маргарита\n5. Отвертка\n6. Куба Либре\n";
	return s;
}
