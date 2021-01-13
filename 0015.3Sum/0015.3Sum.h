#pragma once

#include <vector>
#include <algorithm>
#include <unordered_map>

#include "../utils/utils.h"

using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int len = nums.size();
        vector<vector<int>> result = {};

        // 长度不符合
        if (len < 3) {
            return result;
        }

        // 对 vector 进行排序
        sort(nums.begin(), nums.end());

        for (int i = 0; i < len - 2; ++i) {
            // 该数大于0，后面的数也大于0，和不可能为0
            if (nums[i] > 0 || nums[i] + nums[i + 1] + nums[i + 2] > 0)
                return result;

            // 去重
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int left = i + 1, right = nums.size() - 1;
            int sum = 0, target = -nums[i];
            while (left < right)
            {
                sum = nums[left] + nums[right];
                if (sum < target)
                    left++;
                else if (sum > target)
                    right--;
                else {
                    // 将结果添加到 result 中
                    result.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;

                    while (left < right && nums[left] == nums[left - 1])
                        left++;

                    while (left < right && nums[right] == nums[right + 1])
                        right--;
                    }
                }
            }
        }

        return result;
    }

private:
    vector<int> twoSum(vector<int>& nums, int target) {
        size_t size_of_nums = nums.size();

        int i = 0, j = 0;
        for (; i < size_of_nums - 1; i++)
        {
            for (j = i + 1; j < size_of_nums; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }

        return {};
    }

    vector<int> twoSumWithHash(vector<int>& nums, int target) {
        size_t size_of_nums = nums.size();

        unordered_map<int, int> mymap;
        for (int i = 0; i < size_of_nums; i++)
        {
            mymap[nums[i]] = i;
        }

        for (int i = 0; i < size_of_nums - 1; i++)
        {
            const int another = target - nums[i];
            if (mymap.find(another) != mymap.end() && mymap[another] > i)
            {
                return {i, mymap[another]};
            }
        }

        return {};
    }

    vector<int> twoSumWithHash2(vector<int>& nums, int target) {
        unordered_map<int, int> mymap;
        for (int i = 0; i < nums.size(); i++)
        {
            const int another = target - nums[i];
            if (mymap.find(another) != mymap.end())
            {
                return {another,nums[i]};
            }
            mymap[nums[i]] = i;
        }
        return {};
    }
};
