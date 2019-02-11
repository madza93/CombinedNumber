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
