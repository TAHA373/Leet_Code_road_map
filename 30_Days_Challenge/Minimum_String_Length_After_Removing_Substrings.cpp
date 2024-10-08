#include <iostream>
#include <string>
#include <stack>
using namespace std;


/*Brut Force methode*/
// class Solution {
// public:
// string mini (string s)
// {
//         int  i  = 0;
//         int len  = 0;
//         string new_str;
  
//         while (i < s.length())
//         {
//             if (s[i] == 'A' && s[i + 1] == 'B')
//                 i++;
//             else if ((s[i] == 'C' && s[i + 1] == 'D'))
//                 i++;
//             else
//                 new_str.push_back(s[i]);
//             i++;

//         }  
//         return (new_str)   ;
// }
//     int minLength(string s)
//     {
//         int  i  = 0;
//         int  j = 0;
//         int len  = 0;
//         int flag = 0;
//         string new_str;
//         new_str = s;
//         while (len != new_str.length())
//         {
//             len = new_str.length();
//             new_str = mini(new_str);
//         }  
//        len = new_str.length();
//         return (len)   ;
//     }
// };


/*Methode Using Stack Data Structre*/

class Solution {
public:
int  minLength(string s)
{
    stack<char> stk;
    int  i = 0;
    int len = s.length();
    while (i < len)
    {
        if (stk.empty())
            {
                stk.push(s[i]);
                i++;
            }
        if ((stk.top() == 'A' && s[i] == 'B') || (stk.top() == 'C' && s[i] == 'D'))
            stk.pop();
        else if (i < len)
            stk.push(s[i]);
        i++;
    }
    cout << stk.top() ;
    return (stk.size());
}
// auto init = []() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     return 'c';
// }();
};
int main()
{
    Solution s;
    cout << s.minLength("A");
}