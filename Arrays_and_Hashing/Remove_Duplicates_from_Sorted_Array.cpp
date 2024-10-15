#include <iostream>
#include <vector>
#include <map>

using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
            map<int,int> mp;
            vector<int> v ;
            int i = -1;
            while (++i < nums.size())
                   v.push_back(nums[i]);
            i = 0;
            nums.clear();
            while (i < v.size())
            {
                if (mp[v[i]] != v[i])
                   {
                        mp[v[i]]  = v[i];
                        nums.push_back(v[i]);

                   }
                i++;
            }
            return (nums.size()+ 1);
    }
};
int main()
{
    vector<int> v ={0,0,1,1,1,2,2,3,3,4};
    Solution s;
    cout << s.removeDuplicates(v);
}