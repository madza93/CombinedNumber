#include <gtest/gtest.h>
#include "CombinedNumber.hpp"
#include <list>

struct CombinedNumberTests : public ::testing::Test
{
    CombinedNumber cn;
};


TEST_F(CombinedNumberTests, whenEmptyListIsGivenEmptyStringShouldBeReturned)
{
    auto result = cn.constructGreatestNumber({});
    ASSERT_EQ(result, "");
}

TEST_F(CombinedNumberTests, when1IsGivenString1IsReturned)
{
    auto result = cn.constructGreatestNumber({1});
    ASSERT_EQ(result, "1");
}

TEST_F(CombinedNumberTests, when2IsGivenString2IsReturned)
{
    auto result = cn.constructGreatestNumber({2});
    ASSERT_EQ(result, "2");
}

TEST_F(CombinedNumberTests, whenDoubleOneIsGivenString11IsReturned)
{
    auto result = cn.constructGreatestNumber({1,1});
    ASSERT_EQ(result, "11");
}

TEST_F(CombinedNumberTests, whenAllNumbersAreEqualString1212IsReturned)
{
    auto result = cn.constructGreatestNumber({1,2,1,2});
    ASSERT_EQ(result, "1212");
}
