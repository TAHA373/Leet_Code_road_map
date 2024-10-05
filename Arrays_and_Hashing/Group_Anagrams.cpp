#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;
class Solution {

public:
    string ft_sort(string s)
    {
        string tmp ;
        tmp = s;
        sort(tmp.begin(), tmp.end());
        return (tmp);
    }
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s == t)
            return (true);
        return (false);
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        vector<vector<string>> result;
        vector<string> v1;
        vector<string> v2;
        string tmp;
        map<string, int> mp1;
        map<string, int> mp2;
        int  i = -1;
        //sort(strs.begin(), strs.end());
        //result.push_back(d)
        while (++i < strs.size())
        {
            tmp = ft_sort(strs[i]);
            cout << tmp << endl;
           if (!mp1[tmp])
                {
                    mp1[tmp] += 1 ;
                    v1.push_back(strs[i]);
                }
            else
                 mp1[tmp] += 1 ;
            cout <<  mp1[tmp] << endl;
        }
        
        return (result);
    }
};

int main()
{
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    Solution s;
    s.groupAnagrams(strs);
}