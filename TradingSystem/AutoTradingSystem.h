
#include <string>
#include <stdexcept>
#include "StockBrockerDriver.h"

class AutoTradingSystem
{
public:
    AutoTradingSystem() : stockbrocker{ nullptr } {}
    StockBrockerDriver* selectStockBrocker(string name);
private:
    StockBrockerDriver* stockbrocker;
};

class NullStockCompany : std::exception
{
public:
    char const* what() const override
    {
        return "This Company does not exist.";
    }
};
