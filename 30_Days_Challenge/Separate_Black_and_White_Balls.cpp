#include <iostream>
#include <stack>
#include <string>
#include <map>
using namespace  std;

class Solution {
public:
    long long minimumSteps(string s)
    {
        int l = 0;
        int r = s.length() - 1;
        long long count = 0;
        int d = 0;
        while (r >l)
        {
            if (s[r] == '0' && s[l] == '1')
                {
                    swap(s[r], s[l]);
                    d = r - l;
                    count += d;
                    r--;
                    // l++;
                }
            else if (s[r] == '0' && s[l] == '0')
                l++;
                //r--;
            else
                r--;

        }
        return (count);
    }
};

int main()
{
    string s = "01010001";
    Solution ss;
   cout << ss.minimumSteps(s) << "\n";// << "\n"; cout << 
}