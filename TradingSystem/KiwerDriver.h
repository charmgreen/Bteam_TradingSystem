#pragma once
#include "KiwerAPI.cpp"
#include "StockBrockerDriver.h"

class KiwerDriver : public StockBrockerDriver
{
public:
    string getStockCompanyName() override;
    void buy(string stockCode, int count, int price);
    void sell(string stockCode, int count, int price);
private:
    KiwerAPI ka;
};
