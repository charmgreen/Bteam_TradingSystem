#pragma once
#include <string>

using namespace std;

class StockBrockerDriver
{
public:
    StockBrockerDriver() {}
    virtual string getStockCompanyName();
    virtual void buy(string stockCode, int count, int price) = 0;
    virtual void sell(string stockCode, int count, int price) = 0;
};

