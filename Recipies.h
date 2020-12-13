#pragma once
#include <string>

class Recipes
{
protected:
	int numOfIngridients;
	std::string* ingridients;
	int* amountOfIngridients;

public:

	Recipes(int num)
	{
		numOfIngridients = num;
		ingridients = new std::string[numOfIngridients];
		amountOfIngridients = new int[numOfIngridients];
	}

	std::string* getIngridients() { return ingridients; }
	int getNumOfIngridients() { return numOfIngridients; }
	int* getAmountOfIngridients() { return amountOfIngridients; }

};

class Mojito : public Recipes
{
public:

	Mojito():Recipes(5)
	{
		ingridients[0] = "Белый ром";
		amountOfIngridients[0] = 50;
		ingridients[1] = "Сахарный сироп";
		amountOfIngridients[1] = 20;
		ingridients[2] = "Сода";
		amountOfIngridients[2] = 50;
		ingridients[3] = "Мята";
		amountOfIngridients[3] = 15;
		ingridients[4] = "Лайм";
		amountOfIngridients[4] = 15;
	}

};

class TequilaSunrise : public Recipes
{
public:
	TequilaSunrise() :Recipes(3)
	{
		ingridients[0] = "Текила";
		amountOfIngridients[0] = 50;
		ingridients[1] = "Апельсиновый сок";
		amountOfIngridients[2] = 150;
		ingridients[2] = "Сироп Гренадин";
		amountOfIngridients[3] = 10;
	}
};

class Daiquiri : public Recipes
{
public:
	Daiquiri() :Recipes(3)
	{
		ingridients[0] = "Белый ром";
		amountOfIngridients[0] = 40;
		ingridients[1] = "Сок лимона";
		amountOfIngridients[0] = 20;
		ingridients[2] = "Сахарный сироп";
		amountOfIngridients[0] = 20;
	}
};

class Margarita : public Recipes
{
public:
	Margarita() :Recipes(3)
	{
		ingridients[0] = "Текила";
		amountOfIngridients[0] = 40;
		ingridients[1] = "Апельсиновый ликер";
		amountOfIngridients[0] = 20;
		ingridients[2] = "Сок лимона";
		amountOfIngridients[0] = 20;
	}
};

class Screwdriver : public Recipes 
{
public:
	Screwdriver() :Recipes(2)
	{
		ingridients[0] = "Водка";
		amountOfIngridients[0] = 50;
		ingridients[1] = "Апельсиновый сок";
		amountOfIngridients[0] = 150;
	}
};

class CubaLibre : public Recipes 
{
public:
	CubaLibre() :Recipes(3)
	{
		ingridients[0] = "Белый ром";
		amountOfIngridients[0] = 40;
		ingridients[1] = "Сода";
		amountOfIngridients[0] = 120;
		ingridients[2] = "Лайм";
		amountOfIngridients[0] = 5;
	}
};