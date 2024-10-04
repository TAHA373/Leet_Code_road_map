#include <iostream>
#include <vector>
#include <map>
using namespace std;
/*Brut force sOLUTION time complexity O(n^2)*/

/*class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j = i + 1;
        vector<int> result;
        while (i < nums.size())
        {
            j = i + 1;
            while (j < nums.size())
            {
                if(nums[i] + nums[j] == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    break;
                }
                j++;
            }
            i++;
        }
        return (result);
    }
};
*/
/*In this exercice we use Two pointers methode */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> result;
        int left = nums.size() - 1;
        int right = 0;
        int tar = 0;
        while (left != right)
        {
            tar = nums[right] + nums[left];
            if  (tar > target)
                left--;
            else if (tar < target)
                right++;
            else
                break ;
        }
        result.push_back(right + 1);
        result.push_back(left + 1);
        return (result);
    }
};
int main()
{
    Solution s;
    vector<int>v2; 
    vector<int> v = {3, 3};

    v2 = s.twoSum(v, 6);
    cout << v2[0] << endl;
    cout << v2[1] << endl;
} 

  