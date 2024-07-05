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

int
KiwerDriver::getPrice(string stockId)
{
    if (stockId == "A1234")return 5600;
    if (stockId == "B5678")return 3200;
    if (stockId == "C4321")return 62100;
    return NOT_STOCK_ID;
}
