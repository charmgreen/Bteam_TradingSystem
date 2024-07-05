#include "AutoTradingSystem.h"
#include "StockBrockerDriver.h"
#include "KiwerDriver.h"
#include "NemoDriver.h"

StockBrockerDriver*
AutoTradingSystem::selectStockBrocker(string name)
{
    if (name == "kiwer") stockbrocker = new KiwerDriver();
    else if (name == "nemo") stockbrocker = new NemoDriver();
    else throw NullStockCompany();
    
    return stockbrocker;
}

bool
AutoTradingSystem::login(string id, string password) {
    bool loginResult = stockbrocker->stockLogin(id, password);
    return loginResult;
}

bool
AutoTradingSystem::buy(string stockCode, int count, int price)
{
    stockbrocker->buy(stockCode, count, price);
    return true;
}

bool
AutoTradingSystem::sell(string stockCode, int count, int price)
{
    stockbrocker->sell(stockCode, count, price);
    return true;
}
int
AutoTradingSystem::getPrice(string stockId) {
    int stockPrice = stockbrocker->getPrice(stockId);
    return stockPrice;
}
