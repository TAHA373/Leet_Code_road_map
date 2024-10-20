#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums)
    {
       // map<int, int> mp;
        int i  = 0;
        int j = -1;
        int tmp = 0;
        int tmp2 = 0;
        int count = 0;
        int count2 = 0;
        while (i < nums.size())
        {
            tmp |= nums[i];
            tmp2 = max(tmp2, tmp);
            i++;
        }
       //cout << tmp2;
        i = 0;
        while (i < nums.size())
        {
            j = i;
            tmp = 0;
            count2 = 0;
            while (j < nums.size())
            {
                tmp |= nums[j];
                //cout << tmp << "\n";
                count2 = max(tmp, count2);
                cout << count2 << endl;
                if (count2 == tmp2)
                    count++;
                j++; 
            }
            
            i++;
            // if (i >= nums.size() && count2 < nums.size())
            // {
            //     i = 0;
            //     count2++;
            // }
        }
    return (count);

    }
};
int main()
{
    vector<int> v = {3,2,1,5};
    Solution s;
    cout <<  s.countMaxOrSubsets(v);//cout <<
}