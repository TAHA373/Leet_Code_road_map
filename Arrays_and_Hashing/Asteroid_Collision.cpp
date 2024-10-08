#include <iostream>
#include <string>
#include <vector>

using namespace std;
/**** Brute Force *****/
class Solution {
public:
    int minSwaps(string s)
    {
        int  i = 0;
        int count  = 0;
        int len = s.length();
        int index = -1;
        int flag  = 0;
        char tmp;
        while (i < len)
        {
            if (s[i] == '[' && s[i + 1] == ']')
                {
                    i++;
                    continue;
                }
            else if (s[i] == '[' && index != -1)
            {
                tmp = s[index];
                s[index] = s[i];
                s[i] = tmp;
                index = -1;
                i = 0;
                flag = 0;
                count++;
            }
            if (s[i] == ']' && !flag)
                {
                    index = i;
                    flag = 1;
                }
            i++;
        }
        return (count);
            
    }
};

int main()
{
    Solution s;
    cout << s.minSwaps("][][");

}