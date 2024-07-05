#pragma once
#include "NemoAPI.cpp"
#include "StockBrockerDriver.h"

class NemoDriver : public StockBrockerDriver
{
public:
    string getStockCompanyName();
    bool stockLogin(string id, string password);
    void buy(string stockCode, int count, int price);
    void sell(string stockCode, int count, int price);
private:
    NemoAPI na;
};
