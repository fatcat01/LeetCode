#pragma once

#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int len = nums.size();
        vector<vector<int>> result = {};

        // 长度不符合
        if (len < 3)
            return result;

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
            while (left < right) {
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

        return result;
    }
};
