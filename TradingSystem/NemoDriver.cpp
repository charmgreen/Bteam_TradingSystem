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

int
NemoDriver::getPrice(string stockId)
{
    if (stockId == "A1234")return 5600;
    if (stockId == "B5678")return 3200;
    if (stockId == "C4321")return 62100;
    return NOT_STOCK_ID;
}
