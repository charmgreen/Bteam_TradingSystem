#pragma once
#include <string>

using namespace std;

class StockBrockerDriver
{
public:
    StockBrockerDriver() {}
    virtual string getStockCompanyName();
    virtual bool stockLogin(string id, string password);
};

