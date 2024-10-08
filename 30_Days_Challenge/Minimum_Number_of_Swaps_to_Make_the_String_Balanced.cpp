#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;
/**** Brute Force *****/
// class Solution {
// public:
//     int minSwaps(string s)
//     {
//         int  i = 0;
//         int count  = 0;
//         int len = s.length();
//         int index = -1;
//         int flag  = 0;
//         static int f = -1;
//         char tmp;
//         while (i < len)
//         {
//             if (s[i] == '[' && s[i + 1] == ']')
//                 {
//                     i++;
//                     continue;
//                 }
//             else if (s[i] == '[' && index != -1)
//             {
//                 tmp = s[index];
//                 cout << "f" << f << endl;
//                 if (f != index)
//                {

//                 cout << "swap"<< index << endl;
//                 cout << "with" << i << endl;
//                 if (s[i + 1] == '[')
//                     {
//                         s[index] = s[i + 1];
//                         s[i + 1] = tmp;
//                     }
//                 else
//                     {
//                         s[index] = s[i];
//                         s[i] = tmp;
//                     }
//                 f = i;
//                 index = -1;
//                 i = 0;
//                 flag = 0;
//                 count++;
//                 }
//             }
//             if (s[i] == ']' && !flag)
//                 {
//                     index = i;
//                     flag = 1;
//                 }
//             i++;
//         }
//         cout << s << endl;
//         return (count);
            
//     }
// };

// class Solution {
// public:
//     int minSwaps(string s)
//     {
//         int len = s.length();
//         int c_cout = 0;
//         int i = 0;
//         int o_count = 0;
//         int index = 0;
//         int count  = 0;
//         char tmp;
//         while (i < len)
//         {
//                 while (s[i] == '[')
//                 {
//                     i++;
//                     o_count++;
//                 }
//                 while (s[i] == ']')
//                 {
//                     index = i;
//                     i++;
//                     c_cout++;
//                 }
//             if ((o_count + c_cout) % 2 == 0)
//                 {
//                     c_cout = 0; o_count = 0;
//                 }

//                else  {
//                      i -= 1;
//                     tmp = s[index];
//                     s[index] = s[i];
//                     s[i] =  tmp;
//                     count++;
//                 }
//             i++;
                
//         }
//         cout << s << endl;
//         return (count);
//     }
// };


// class Solution {
// public:
//     int minSwaps(string s)
//     {
//         int len = s.length();
//         int  i = 0;
//         int count = 0;
//         int close = 0;
//         int open = 0;
//         int index_close = 0;
//         int index_open = 0;
//         char tmp ;
//         if (s[i] == ']' && s[len - 1] == '[')
//                 {
//                 tmp = s[i];
//                 s[i] = s[len - 1];
//                 s[len - 1] = tmp;
//                  // i++;
//                   count++;
//                 }
//         cout << s << endl;
//         while (i  < len)
//         {
//             if (s[i] == '[')
//                 {
//                     open++;
//                     //i++;
//                     index_open = i;
//                     cout <<"open" << index_open << "\n";
//                    // continue;
//                 }
//              if (s[i] == ']')
//                 {
//                     close++;
//                     index_close = i;
//                     cout <<"close" <<index_close << "\n";
//                 }
//             if (close >= open && index_open > index_close)
//             {
//                 cout << "hi" << "\n";
//                tmp = s[index_close];
//                s[index_close] = s[index_open];
//                s[index_open] = tmp;
//                count++;
//                //i = -1;
//             }
//             i++;         
//         }
//                  //   cout << s;
//             cout << s << endl;
//         return (count);
//     }
// };


class Solution {
public:
   int  minSwaps(string s) {
        stack<char> stk ;
        int len = s.length();
        int i = 0;
        char tmp ;
        while (i < len)
        {
            if (stk.empty())
            {
                stk.push(s[i]);

            }
            else if (stk.top() == '[' && s[i] == ']')
                stk.pop();
               else
                  stk.push(s[i]);
            i++;
        }
        if (stk.empty())
            return (0);
        
        int stk_len = 0;
        stk_len =  stk.size();
        if (stk_len == 2)   
            return (1);
        int stk_len2 = (stk_len / 2);
        int count = 0;
        return (count);
        
    }
};
int main()
{
    Solution s;
    cout << s.minSwaps("][[]][][[][]");//;cout << 

}