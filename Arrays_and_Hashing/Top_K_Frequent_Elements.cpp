#include <chrono>
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


class Solution {
public:
    bool sortByValue(const pair<int, int>&a, const pair<int, int>&b){

        return (a.second > b.second);
    }
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        vector<int> v;
        map<int , int> mp;
        int len = nums.size();
        int i = -1;
        sort(nums.begin(), nums.end());
        while (++i  < len)
            mp[nums[i]] += 1;
        vector<pair<int, int> > mp_v(mp.begin(), mp.end());
        sort(mp_v.begin(), mp_v.end(), 
                  [this](const std::pair<int, int>& a, const std::pair<int, int>& b) {
                      return sortByValue(a, b);
                  });
        i = -1;
        while (++i < k)
        {
            v.push_back(mp_v[i].first);
            cout << mp_v[i].first << " ";
        }
        return(v);
    }
};
int main()
{
    vector<int> v = {1,1,1,1,2,2,2,3};
    Solution s;
    s.topKFrequent(v, 1);
}