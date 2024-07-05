#include "KiwerDriver.h"

string
KiwerDriver::getStockCompanyName()
{
    return "kiwer";
}

bool
KiwerDriver::stockLogin(string id, string password)
{
    return true;
}

void
KiwerDriver::buy(string stockCode, int count, int price)
{
    ka.buy(stockCode, count, price);
}

void
KiwerDriver::sell(string stockCode, int count, int price)
{
    ka.sell(stockCode, count, price);
}
