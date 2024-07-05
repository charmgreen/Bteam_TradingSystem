#include <iostream>
#include <cstdlib>
#include <string>
#include "KiwerAPI.cpp"
#include "NemoAPI.cpp"
using namespace std;

class StockerBrockerDriver
{
public:
    virtual void login(string ID, string password) = 0;
    virtual void buy(string stockCode, int count, int price) = 0;
    virtual void sell(string stockCode, int count, int price) = 0;
    virtual int currentPrice(string stockCode, int minute) = 0;
};

class KiwerSBD : public StockerBrockerDriver
{
public:
    void buy(string stockCode, int count, int price)
    {
        ka.buy(stockCode, count, price);
    }
    void sell(string stockCode, int count, int price)
    {
        ka.sell(stockCode, count, price);
    }
private:
    KiwerAPI ka;
};

class NemoSBD : public StockerBrockerDriver
{
public:
    void buy(string stockCode, int count, int price)
    {
        na.purchasingStock(stockCode, count, price);
    }
    void sell(string stockCode, int count, int price)
    {
        na.sellingStock(stockCode, count, price);
    }
private:
    NemoAPI na;
};

class App
{
public:
    App(StockerBrockerDriver* sbd)
    {
        this->sbd = sbd;
    }
    void selectStockBrocker(StockerBrockerDriver* sbd)
    {
        this->sbd = sbd;
    }
    void login(string ID, string password)
    {
        sbd->login(ID, password);
    }
    void buy(string stockCode, int count, int price)
    {
        sbd->buy(stockCode, count, price);
    }
    void sell(string stockCode, int count, int price)
    {
        sbd->sell(stockCode, count, price);
    }
    int getPrice(string stockCode)
    {
        sbd->currentPrice(stockCode, 0);
    }
private:
    StockerBrockerDriver* sbd;
};

class AutoTradingSystem
{
public:
    bool buy(string stockCode, int count, int price)
    {
        sbd->buy(stockCode, count, price);
        return true;
    }
    bool sell(string stockCode, int count, int price)
    {
        sbd->sell(stockCode, count, price);
        return true;
    }
private:
    StockerBrockerDriver* sbd;
};
