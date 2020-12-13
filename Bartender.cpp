#include "Bartender.h"

Recipes* Bartender::getOrder()
{
    Recipes* res = 0;

    if (!orders.empty())
        res  = orders.front();

    return res;
}

std::queue<Recipes*>& Bartender::getOrders()
{
    return orders;
}

void Bartender::Refill(BarShelf b)
{
    if (b.NeedsRefilling())
        b.Refill();
}

bool Bartender::Check(BarShelf b)
{
    return b.CheckForIngridients(getOrder());
}

bool Bartender::MakeOrder(BarShelf b)
{
    if (!Check(b))
        return false;
    else 
    {
        b.UpdateIngridients(getOrder());
        orders.pop();
        return true;
    }
}
