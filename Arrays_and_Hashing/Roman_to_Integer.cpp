#include <iostream>
#include <string>
#include <map>

/*Brut Force Solution*/
using namespace std;
class Solution {
public:
    int romanToInt(string s)
    {
        string roman = "IVXLCDM";
        map<char, int> mp = {
            {'I', 1}, {'V', 5}, {'X', 10}, 
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };
        int result = 0;
        for (int i = 0; i < s.length(); i++)
        {
            result += mp[s[i]];
            if ( i != 0 && (s[i - 1] == 'I' && (s[i] == 'X' || s[i] == 'V')))
                result -= 2;
            else if (i != 0 && ((s[i - 1] == 'X' && ( s[i] == 'L' || s[i] == 'C'))) )
                result = result - 20;
            else if (i != 0 && ((s[i - 1] == 'C' && ( s[i] == 'D' || s[i] == 'M'))))
                result = result - 200;
        }

        return (result);
        
    }
};
int main()
{
    Solution s;
    string ss = "III";
   cout << s.romanToInt(ss) << endl;
}