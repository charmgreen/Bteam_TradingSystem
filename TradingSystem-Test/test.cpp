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

TEST(AutoTradingSystemTest, selectStockBrockerTest3) {
	AutoTradingSystem ats;

	//act
	try
	{
		string result = ats.selectStockBrocker("mireaAsset")->getStockCompanyName();
		FAIL();
	}
	catch (NullStockCompany& e)
	{
		//assert
		EXPECT_EQ(string{ e.what() }, string{ "This Company does not exist." });
	}
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
	ats.selectStockBrocker("kiwer");
	ats.login("samsung", "tka123tjd!@");

	EXPECT_EQ(true, ats.buy("A1234", 5600, 7));
	EXPECT_EQ(true, ats.buy("B5678", 3200, 5));
	EXPECT_EQ(true, ats.buy("C4321", 62100, 3));
}

TEST(AutoTradingSystemTest, sell1)
{
	AutoTradingSystem ats;
	ats.selectStockBrocker("nemo");
	ats.login("hynix", "goodcompany");

	EXPECT_EQ(true, ats.sell("A1234", 5600, 7));
	EXPECT_EQ(true, ats.sell("B5678", 3200, 5));
	EXPECT_EQ(true, ats.sell("C4321", 62100, 3));
}