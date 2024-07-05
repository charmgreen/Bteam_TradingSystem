
#include <string>
#include "StockBrockerDriver.h"

class AutoTradingSystem
{
public:
    AutoTradingSystem() : stockbrocker{ nullptr } {}
    StockBrockerDriver* selectStockBrocker(string name);
    bool login(string id, string password);
private:
    StockBrockerDriver* stockbrocker;
};
