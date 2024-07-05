#pragma once
#include "KiwerAPI.cpp"
#include "StockBrockerDriver.h"

class KiwerDriver : public StockBrockerDriver
{
public:
    string getStockCompanyName();
    bool stockLogin(string id, string password);
    void buy(string stockCode, int count, int price);
    void sell(string stockCode, int count, int price);
    virtual int getPrice(string stockId) override;
private:
    KiwerAPI ka;
private:
    const int NOT_STOCK_ID = -1;
};
