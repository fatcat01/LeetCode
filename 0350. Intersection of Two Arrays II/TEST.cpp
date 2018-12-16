#include "0350. Intersection of Two Arrays II.h"
#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch.hpp"

#include <iostream>

using namespace std;

TEST_CASE("Intersection of Two Arrays II", "[intersect]")
{
	Solution solution;

	SECTION("1")
	{
		vector<int>nums1{ 1,2,2,1 };
		vector<int>nums2{ 2,2 };
		vector<int>result = solution.intersect(nums1, nums2);
		for (auto item : result)
			cout << item << " ";
		cout << endl;
	}
	SECTION("2")
	{
		vector<int>nums1{ 4,9,5 };
		vector<int>nums2{ 9,4,9,8,4 };
		vector<int>result = solution.intersect(nums1, nums2);
		for (auto item : result)
			cout << item << " ";
		cout << endl;
	}

	system("pause");
}

