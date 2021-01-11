// 0007. Reverse Integer.cpp: 定义控制台应用程序的入口点。
//

#include "0015.3Sum.h"
#include <catch2/catch_test_macros.hpp>

#include <iostream>
#include <vector>

using namespace std;

TEST_CASE("ThreeSum", "[threeSum]")
{
    Solution solution;

    SECTION("1")
    {
        vector<int> expected_result{0, 1};
        vector<int> nums{-1, 0, 1, 2, -1, -4};
        vector<vector<int>> result = solution.threeSum(nums);
    }
}
