#pragma once
#include "StockBrockerDriver.h"

class KiwerDriver : public StockBrockerDriver
{
public:
    virtual string getStockCompanyName() override;
    virtual bool stockLogin(string id, string password) override;
};
