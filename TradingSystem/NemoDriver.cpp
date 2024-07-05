#include "NemoDriver.h"

string
NemoDriver::getStockCompanyName()
{
    return "nemo";
}

bool
NemoDriver::stockLogin(string id, string password)
{
    return true;
}

void 
NemoDriver::buy(string stockCode, int count, int price)
{
    na.purchasingStock(stockCode, count, price);
}

void 
NemoDriver::sell(string stockCode, int count, int price)
{
    na.sellingStock(stockCode, count, price);
}
