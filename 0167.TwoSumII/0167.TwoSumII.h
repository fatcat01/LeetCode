#pragma once

#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        int tmp = 0;
        while (left < right)
        {
            tmp = numbers[left] + numbers[right];
            if (tmp < target)
            {
                left++;
            }
            else if (tmp > target)
            {
                right--;
            }
            else
            {
                return {left, right};
            }

        }
        return {};
    }
};
