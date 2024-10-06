#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string s, s2;
        long long tmp;
        tmp = (long long)x;
        int y;
        if (x < 0 || (x && x % 10 == 0))
            return (false);
        while (tmp != 0)
        {
           s.push_back((tmp % 10) + '0');
           s2.push_back((tmp % 10) + '0');
           tmp /= 10;
        }
        reverse(s.begin(),s.end());
        if (s == s2)
            return (true);
        return (false);
    }
};
int main()
{
    Solution s;
    cout << s.isPalindrome(-123);
}