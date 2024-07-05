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
