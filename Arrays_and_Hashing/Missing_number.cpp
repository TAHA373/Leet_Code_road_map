#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        int i = 0;
        int tmp = 0;
        if ( nums[0] != 0)
            return (0);
        while (i + 1 < nums.size())
        {
            if (i + 1 < nums.size())
                tmp = abs (nums[i] - nums[i +  1]);
            if (tmp != 1)
                return (i + 1);
            i++;
        }
        return (nums.size());
    }
};
int main()
{
    vector<int> v = {0,1};
    Solution s;
    cout << s.missingNumber(v);
}