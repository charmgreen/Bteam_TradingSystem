#include "AutoTradingSystem.h"
#include "StockBrockerDriver.h"
#include "KiwerDriver.h"
#include "NemoDriver.h"

StockBrockerDriver*
AutoTradingSystem::selectStockBrocker(string name)
{
    if (name == "kiwer") stockbrocker = new KiwerDriver();
    if (name == "nemo") stockbrocker = new NemoDriver();

    return stockbrocker;
}

bool
AutoTradingSystem::login(string id, string password) {
    bool loginResult = stockbrocker->stockLogin(id, password);
    return loginResult;
}