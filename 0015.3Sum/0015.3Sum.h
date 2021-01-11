#pragma once

#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int len = nums.size();

        // 长度不符合
        if (len < 3) return {{}};

        vector<vector<int>> result = {{}};
        for (int i = 0; i < len - 2; ++i) {
            vector<int> tmp = twoSumWithHash2(vector<int>(nums.begin() + i + i, nums.end()), -nums[i]);
            if (!tmp.empty()) {
                tmp.insert(tmp.begin(), nums[i]);
                result.push_back(tmp);
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
