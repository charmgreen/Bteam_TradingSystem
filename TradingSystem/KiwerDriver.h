#pragma once
#include "StockBrockerDriver.h"

class KiwerDriver : public StockBrockerDriver
{
public:
    virtual string getStockCompanyName() override;
};
