#include "0001. Two Sum.h"
#include <catch2/catch_test_macros.hpp>

#include <iostream>

using namespace std;

TEST_CASE("Two Sum", "[twoSum]")
{
    Solution solution;

    SECTION("1")
    {
        vector<int>nums{ 2, 7, 11, 15 };
        vector<int>result = solution.twoSum(nums, 9);
        REQUIRE(result.size() == 2);
        REQUIRE(result[0] == 0);
        REQUIRE(result[1] == 1);
    }
    SECTION("2")
    {
        vector<int>nums{ 2, 7, 11, 15 };
        vector<int>result = solution.twoSum(nums, 22);
        REQUIRE(result.size() == 2);
        REQUIRE(result[0] == 1);
        REQUIRE(result[1] == 3);
    }
}
