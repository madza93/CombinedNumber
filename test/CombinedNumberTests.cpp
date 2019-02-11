#include <gtest/gtest.h>
#include "CombinedNumber.hpp"
#include <list>

struct CombinedNumberTests : public ::testing::Test
{
    CombinedNumber cn;
};


TEST_F(CombinedNumberTests, whenEmptyListIsGivenEmptyStringShouldBeReturned)
{
    //std::list<unsigned int> l = {};

    auto result = cn.constructGreatestNumber({});
    ASSERT_EQ(result, "");
}

TEST_F(CombinedNumberTests, when1IsGivenString1IsReturned)
{
    //std::list<unsigned int> l = {};

    auto result = cn.constructGreatestNumber({1});
    ASSERT_EQ(result, "1");
}

TEST_F(CombinedNumberTests, when2IsGivenString2IsReturned)
{
    //std::list<unsigned int> l = {};

    auto result = cn.constructGreatestNumber({2});
    ASSERT_EQ(result, "2");
}
