#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
using namespace std;


class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k)
    {
            map<int , int> mp;
            vector<int> arr;
            int i = 0;
            int l = 0;
            int r = 0;
            while (i < nums.size())
            {
                mp[nums[i]] += 1;
                if ( mp[nums[i]] > 1)
                    arr.push_back(i);
                i++;
            }
            i = 0;
            int j = 0;
            while (i < arr.size())
            {
                j = 0;
                while ( j < nums.size())
                {
                    if (nums[arr[i]] == nums[j] && arr[i] != j)
                        if (abs(arr[i] - j) <= k)
                            return (true);
                    j++;
                }
                i++;
            }
            return (false);
    }

};
int main()
{
    vector<int> v = {1,2,3,1,2,3};
    Solution s;
    cout << s.containsNearbyDuplicate(v, 2);

    }