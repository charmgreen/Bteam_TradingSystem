#include "AutoTradingSystem.h"
#include "StockBrockerDriver.h"
#include "KiwerDriver.h"
#include "NemoDriver.h"

StockBrockerDriver*
AutoTradingSystem::selectStockBrocker(string name)
{
    StockBrockerDriver* driver = nullptr;

    if (name == "kiwer") driver = new KiwerDriver();
    if (name == "nemo") driver = new NemoDriver();
    return driver;
}