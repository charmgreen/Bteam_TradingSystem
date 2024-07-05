#pragma once
#include "StockBrockerDriver.h"

class NemoDriver : public StockBrockerDriver
{
public:
    virtual string getStockCompanyName() override;
    virtual bool stockLogin(string id, string password) override;
};
