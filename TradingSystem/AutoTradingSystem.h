
#include <string>
#include "StockBrockerDriver.h"

class AutoTradingSystem
{
public:
    AutoTradingSystem() : stockbrocker{ nullptr } {}
    StockBrockerDriver* selectStockBrocker(string name);
    bool login(string id, string password);
    bool buy(string stockCode, int count, int price);
    bool sell(string stockCode, int count, int price);
private:
    StockBrockerDriver* stockbrocker;
};
