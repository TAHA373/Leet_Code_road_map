#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;
class Solution {

public:

    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        vector<vector<string> > result;
        map<string, vector<string> > mp;
        map<string , int > mp2;
        vector<string> v;
        int len = strs.size();
        int  i = 0;
        string tmp;
        while (i < len)
        {
            tmp = strs[i];
            sort(tmp.begin(), tmp.end());
            //if (mp[tmp].empty())
            mp[tmp].push_back(strs[i]);
            if (mp2[tmp] == 0)
                {
                    mp2[tmp] += 1;
                    v.push_back(tmp);
                }
            //cout << tmp << endl;
            i++;
        }
         i = -1;
         while (++i < mp.size())
            result.push_back(mp[v[i]]);
    // for (const auto& v : result) {
    //     for (const auto& str : v) {
    //         cout << str << " ";
    //     }
    //     cout << endl;
        return (result);
    }
    };


int main()
{
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    Solution s;
    s.groupAnagrams(strs);
}