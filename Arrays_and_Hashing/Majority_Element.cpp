#include <iostream>
#include <map>
#include <vector>


using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        int len;
        int i;
        map<int, int> mp;
        i = 0;
        len = nums.size();
        while (i < len)
        {
            mp[nums[i]] += 1;
            if (mp[nums[i]] > (len / 2))
                return (nums[i]);
            i++;
        }
        return (0);    
    }
};

int main()
{
    vector<int> v = {3,2,3};
    Solution s;
    cout << s.majorityElement(v);
}