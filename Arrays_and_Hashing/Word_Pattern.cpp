#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<string> split (string s)
    {
        vector<string> v;
        map<string, int> mp ;
        string s1;
        int i = 0;
        while (i < s.length())
        {
            if (s[i] == 32)
                {
                    mp[s1] += 1;
                    if (mp[s1] == 1)
                    {
                        v.push_back(s1);
                        s1.clear();
                    }
                    i++;
                }
                s1.push_back(s[i]);
            i++;
        }
        return (v);
    }
    bool wordPattern(string pattern, string s)
    {
        vector<string> v;
        map<char , int> mp1;
        map<char , string> mp2;
        v = split(s);
        while (i <)
        cout << v.size() << endl;
       // map<>
        return (0);
    }
};
int main()
{
    Solution s;
    s.wordPattern("abba", "dog cat cat fish");
}