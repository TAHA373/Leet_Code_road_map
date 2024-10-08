#include <iostream>
#include <string>
#include <stack>


using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> stk ;
        int len = s.length();
        int i = 0;
        //cout << s << endl;
        while( i < len)
        {
            if (stk.empty())
            {
                stk.push(s[i]);
                i++;
               continue;
            }
            // cout << "s " << s[i] << endl;
            // cout << "top "<< stk.top() << endl;
            if ((stk.top() == '(' && s[i] == ')') || (stk.top() == '{' && s[i] == '}') || (stk.top() == '[' && s[i] == ']'))
               stk.pop();
            else if ((stk.top() == '(' && s[i] != ')') || (stk.top() == '{' && s[i] != '}') || (stk.top() != '[' && s[i] == ']') && i + 1 == len)
                stk.push(s[i]);
            else
                stk.push(s[i]);
            i++;
        }

        if (stk.empty())
            return (true);
        return (false);
        
    }
};
int main()
{
    Solution s;
   cout <<  s.isValid("([])");

}