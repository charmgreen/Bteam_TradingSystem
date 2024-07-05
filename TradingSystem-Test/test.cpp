#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <string>

using namespace std;
using namespace testing;

#include "../TradingSystem/AutoTradingSystem.cpp"
#include "../TradingSystem/StockBrockerDriver.cpp"
#include "../TradingSystem/KiwerDriver.cpp"
#include "../TradingSystem/NemoDriver.cpp"


TEST(AutoTradingSystemTest, selectStockBrockerTest1) {
	AutoTradingSystem ats;
	string result = ats.selectStockBrocker("kiwer")->getStockCompanyName();

	EXPECT_EQ(result, string{ "kiwer" });
}

TEST(AutoTradingSystemTest, selectStockBrockerTest2) {
	AutoTradingSystem ats;
	string result = ats.selectStockBrocker("nemo")->getStockCompanyName();

	EXPECT_EQ(result, string{ "nemo" });
}

TEST(AutoTradingSystemTest, loginTest1)
{
	AutoTradingSystem ats;
	string id = "samsung";
	string password = "tka123tjd!@";
	ats.selectStockBrocker("kiwer")->stockLogin(id, password);

	EXPECT_EQ(true, ats.login(id, password));
}

TEST(AutoTradingSystemTest, loginTest2)
{
	AutoTradingSystem ats;
	string id = "hynix";
	string password = "goodcompany";
	ats.selectStockBrocker("nemo");

	EXPECT_EQ(true, ats.login(id, password));
}

TEST(AutoTradingSystemTest, buy1)
{
	AutoTradingSystem ats;

	EXPECT_EQ(true, ats.buy("A1234", 5600, 7));
	EXPECT_EQ(true, ats.buy("B5678", 3200, 5));
	EXPECT_EQ(true, ats.buy("C4321", 62100, 3));
}

TEST(AutoTradingSystemTest, sell1)
{
	AutoTradingSystem ats;

	EXPECT_EQ(true, ats.sell("A1234", 5600, 7));
	EXPECT_EQ(true, ats.sell("B5678", 3200, 5));
	EXPECT_EQ(true, ats.sell("C4321", 62100, 3));
}

TEST(AutoTradingSystemTest, getPriceTest)
{
	AutoTradingSystem ats;

	EXPECT_EQ(5600, ats.getPrice("A1234"));
	EXPECT_EQ(3200, ats.getPrice("B5678"));
	EXPECT_EQ(62100, ats.getPrice("C4321"));
}
