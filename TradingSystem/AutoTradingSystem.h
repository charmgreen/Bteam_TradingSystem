
#include <string>
#include <stdexcept>
#include "StockBrockerDriver.h"

class AutoTradingSystem
{
public:
    AutoTradingSystem() : stockbrocker{ nullptr } {}
    StockBrockerDriver* selectStockBrocker(string name);
    bool login(string id, string password);
    bool buy(string stockCode, int count, int price);
    bool sell(string stockCode, int count, int price);
    int getPrice(string stockId);
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
