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
