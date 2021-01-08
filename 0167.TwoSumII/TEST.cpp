#include "0167.TwoSumII.h"
#include <catch2/catch_test_macros.hpp>

#include <iostream>

#include "../utils/utils.h"

using namespace std;

TEST_CASE("Two Sum", "[twoSum]")
{
    Solution solution;

    SECTION("1")
    {
        vector<int> expected_result{0, 1};
        vector<int> nums{2, 7, 11, 15};
        vector<int> result = solution.twoSum(nums, 9);
        REQUIRE(CompareVectors<int>(expected_result, result) == true);
    }
    SECTION("2")
    {
        vector<int> expected_result{1, 3};
        vector<int> nums{2, 7, 11, 15};
        vector<int> result = solution.twoSum(nums, 22);
        REQUIRE(CompareVectors<int>(expected_result, result) == true);
    }
}
