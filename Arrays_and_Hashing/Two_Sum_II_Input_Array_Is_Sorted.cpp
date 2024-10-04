
#include <iostream>
#include <vector>
#include <map>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> result;
        int left = nums.size() - 1;
        int right = 0;
        int tar = 0;
        while (left != right)
        {
            tar = nums[right] + nums[left];
            if  (tar > target)
                left--;
            else if (tar < target)
                right++;
            else
                break ;
        }
        result.push_back(right + 1);
        result.push_back(left  + 1);
        return (result);
    }
};