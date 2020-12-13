
#include <iostream>
#include <windows.h>

#include "Bar.h"

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Bar b(1);

	//std::cout << b.getInfo();
	//std::cout << b.NeedsRefilling();
	//b.Refill();
	//std::cout << b.getInfo();
	//std::cout << b.NeedsRefilling();

	std::cout << b.getBarShelf().getInfo();
	 b.addCustomer();
	 std::cout << b.getBartender().MakeOrder(b.getBarShelf());

}