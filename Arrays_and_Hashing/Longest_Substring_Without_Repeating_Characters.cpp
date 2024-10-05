#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <limits.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        int i = 0;
        int j = i + 1;
        int count = 0;
        int max = INT_MIN;
        map<char , int> mp;
        if (!s.length())
            return (0);
        for (i = 0 ; i < s.length(); i++)
        {
            count  = 0;
            for (j = i + 1; j < s.length(); j++)
            {
                if (mp[s[i]] == 0)
                     {
                        mp[s[i]] = 1;
                        count++;
                    }
                if (mp[s[j]] == 0)
                   {
                    mp[s[j]] = 1;
                    count++;
                }
                else
                    {
                        mp.clear();
                        break ;
                    }
            }
            if (count > max)
                max = count;
        }
        if (!max)
            return (1);
        return (max);
        
    }
};
// class Solution {
// public:
//     int lengthOfLongestSubstring(string s)
//     {
//         int v = 0;
//         map<char , int> mp;
//         vector <int> v1;
//         int max = INT_MIN;
//         string s2;
//         int i = -1;
//         if (!s.length())
//             return (0);
//         while (++i < s.length())
//         {
//             if (mp[s[i]] == 0)
//                {
//                 s2.push_back(s[i]);
//                 mp[s[i]] = 1 ;
//             }
//             else
//             {
//                 v = s2.length();
                
//                 if (v > max)
//                     max = v;
//                 s2.clear();
//                 mp.clear();
//                 if (s[i] != s[i  - 1])
//                     i--;
//                 i--;

//             }
//         }
//          v = s2.length();
//         if (max < v)
//             return (v);
//        return (max);
//     }
// };

int main()
{
    string s = "anviaj";
    Solution solution;
   cout <<  solution.lengthOfLongestSubstring(s);
}