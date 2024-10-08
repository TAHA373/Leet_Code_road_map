#include <iostream>
#include <string>
#include <map>
using namespace std;

// class Solution {
// public:
//     map <int, string> split ( string s, map<int, string> mp)
//     {
//         string str;
//         int count = 0;
//         //int j = 0;
//         for(int i = 0; i < s.length(); i++)
//         {
//             if(s[i] != 32)
//                 str.push_back(s[i]);
//             if (s[i] == 32 || s[i] == '\0')
//                 {
//                    // str.pop_back();
//                     count++;
//                     mp[count] = str;
//                    // i++;
//                  //   cout <<  mp[count] << endl;
//                     str.clear();
//                 }
//         }
//         if (!str.empty())
//             {
//                 count++;
//                 mp[count] = str;
//                // cout <<  mp[str] << endl;
//                 str.clear();
//             }
//         return (mp);

//     } 
//     bool areSentencesSimilar(string sentence1, string sentence2) 
//     {
//         map <int, string> mp1;
//         map <int, string> mp2;
//         mp1 = split (sentence1, mp1);
//         mp2 = split (sentence2, mp2);
//         // cout << mp1[1].length() <<endl;
//         // cout << mp2[1].length() << endl;
//         // cout << mp1[mp1.size()] <<endl;
//         // cout << mp2[mp2.size()] << endl;
//         if ((mp1[1] == mp2[1]) && (mp1[mp1.size()] == mp2[mp2.size()]))
//            {
//                 int i = 2;
//                 if (sentence1.length() > sentence2.length())
//                 {
//                     while (i < mp2.size())
//                 {
//                     if (mp1[i] == mp2[i])
//                         i++;
//                     else
//                         return (false);
//                 }
//                 }
//                 else
//                 {
//                      while (i < mp1.size())
//                 {
//                     if (mp2[i] == mp1[i])
//                         i++;
//                     else
//                         return (false);
//                 }
//                     }
//             return (true);
//         }
//         else if ((mp1[1] == mp2[1]) && (mp1[1].length() == sentence1.length() || mp2[1].length() == sentence2.length()))
//             {

//                 return (true);
//             }
//         return (false);
//     }
// };

// int main()
// {
//     Solution s;
//     cout << s.areSentencesSimilar("eTUny i b R UFKQJ EZx JBJ Q xXz", "eTUny i R EZx JBJ xXz");
// }