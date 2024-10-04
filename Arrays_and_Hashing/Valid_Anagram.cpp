#include <iostream>
#include <string>
using namespace std;
/* First solutionv*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s == t)
            return (true);
        return (false);
    }
};
/* Seconde Solution */

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//     map<char , int> map1;
//      map<char , int> map2;
//     int i = 0;
//     if (s.length()  != t.length())
//         return (false);
//     while (i < s.length())
//     {
//         map1[s[i]] += 1;
//         map2[t[i]] += 1;
//         i++;
//     }
//     i = 0;
//     while (i < s.length())
//     {
//         if (map1[s[i]] != map2[s[i]])
//             return (false);
//         i++;
//     }
//     return (true);
//     }
// };
// int main()
// {
//     Solution s1;
//     string s = "anagram";
//     string t = "nagaram";
//     s1.isAnagram(s, t);
// }