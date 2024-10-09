#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    int minAddToMakeValid(string s)
    {
        stack <int> stk;
        int i = 0;
        int len = s.length();
        while (i < len)
        {
            if (stk.empty())
                stk.push(s[i]);
            else if (stk.top() == '(' && s[i] == ')')
                stk.pop();
            else
                stk.push(s[i]);
            i++;
        }
        return (stk.size());
    }
};
int main()
{
    Solution s;
    cout << s.minAddToMakeValid("(((");
}