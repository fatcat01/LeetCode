#pragma once

/*
0001. 两数之和
给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。

你可以假设每种输入只会对应一个答案。但是，你不能重复利用这个数组中同样的元素。

示例 :
	给定 nums = [2, 7, 11, 15], target = 9
	因为 nums[0] + nums[1] = 2 + 7 = 9
	所以返回[0, 1]
*/
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> result;
		size_t size_of_nums = nums.size();

		if (size_of_nums < 2)
			return result;

		size_t i = 0, j = 0;
		for (; i < size_of_nums - 1; i++)
		{
			for (j = i + 1; j < size_of_nums; j++)
			{
				if (nums[i] + nums[j] == target)
				{
					result.push_back(i);
					result.push_back(j);
				}
			}
		}

		return result;
	}
};

