#include <iostream>
#include <string>
#include <map>
#include <cmath>
using namespace std;

// class Solution {
// public:
//     string find_the_best(string s,  map<int,char> &mp,map<int,int> &mp2  ,int n, int state)
//     {
//         int i = 1;
//         //cout << mp.size() << endl;
//         // cout << mp[mp2[2]];
//        // exit(0);
//         while (i <= mp.size() && n != 0)
//         {
//             if (mp2[i] >= n && n > 2 * state)
//                 {
//                     //cout << n << endl;
//                     if ( abs((mp2[i] - n)) == 0)
//                         {
//                             s.push_back(mp[mp2[i]]);
//                             return (s);
//                         }
//                     else
//                         {
//                              s.push_back(mp[mp2[i]]);
//                             s = find_the_best(s, mp, mp2,  abs(n - mp2[i]), state);
//                         }
//                     break ;
//                 }
//                 else if (n <= 2 * state)
//                     {
//                         if ( n == 2)
//                             s.push_back(mp[1]);
//                         s.push_back(mp[1]);
//                         break ;
//                         //s = find_the_best(s, mp, mp2,  abs(n -  1));
//                     }
//             i++;
             
//         }
//        // cout << s << endl;
//         return (s);
//     }
//     string intToRoman(int num)
//     {
//         map<int,char> mp   ={
//             {1,'I', },
//             {5, 'V'},
//             {10,'X',},
//             {50,'L'},
//             {100 ,'C'},
//             {500, 'D',},
//             {1000,'M' },
//             };
//         map<int , int > mp2 = 
//         {
//             {1,1 },
//             {2, 5},
//             {3,10},
//             {4,50},
//             {5 ,100},
//             {6, 500},
//             {7,1000},
//         };
//        // cout << mp[1] << endl;
//         int state = 1;
//         string s;
//         int n  = 0;
//         while (num != 0)
//         {
//                 n = num % 10;
//                 s = find_the_best(s, mp, mp2, state * n, state);
//                 state *= 10;
//                 num /= 10;  
//         }
//         return (s);
//     }
// };

class Solution {
public:
    void fill_string(int n, map<int , string> m,map<int , int>,  string s)
    {
        int i = mp2.size();

        int tmp = 0;
       // cout << i << endl;
        while ((n - mp2[i]) >= 0)
        {
            if ((n - mp2[i]) >= 0)
                {
                    //cout << n << "\n";
                    tmp = n;
                    n = abs (n - mp2[i]);
                    s.push_back(mp[abs(tmp - n)]);
                    i++;
                    //continue;
                }
                // else if ((n - mp2[i]) < 0)
                // {
                //     s.push_back(mp[mp2[i]]);
                //     n = abs(n - mp2[i]);
                //     i = 2;
                //     cout << n << endl;
      
                // }
                ///cout << "[[["<< mp2[i]<< endl;
                
                    i--;
                }
        cout << s;
        }
    string intToRoman(int num)
    {
        map<int,char> mp   ={
            {1,'I', },
            {5, 'V'},
            {10,'X',},
            {50,'L'},
            {100 ,'C'},
            {500, 'D',},
            {1000,'M' },
            };
        map<int,string>        m;
        m[1] = "I";
        m[4] = "IV";
       m[5] = "V";
       m[9] = "IX";
       m[10] = "X";
       m[40] = "XL";
       m[50] = "L";
       m[90] = "XC";
       m[100] = "C";
       m[400] = "CD";
       m[500] = "D";
       m[900] = "CM";
       m[1000] = "M";
        map<int , int > mp2 = 
        {
            {1,1 },
            {2, 5},
            {3,10},
            {4,50},
            {5 ,100},
            {6, 500},
            {7,1000},
        };
        string s;
        s = to_string(num);
       // cout << s;
        int power = s.length() - 1;
        int i = 0;
        int n = 0;
        string res;
        //cout << pow(10, 3)<< endl;
        while (i < s.length())//power != 0
        {
           // n = (s[i]) / pow(10, power);
            //cout << "s[i]" << s[i] << endl;
            n = (s[i] - '0') * pow(10, power);
            fill_string(n,mp, mp2,res);
            //cout << n << endl;
            power--;
            i++;
        }
        return (s); 
    }
};
int main()
{
    Solution s;
   s. intToRoman(3749);
}   