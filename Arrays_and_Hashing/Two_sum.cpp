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
/*In this exercice we use Two pointers methode */  /* Hashing map */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> result;
        map<int , int> map;
        int tmp_target = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            tmp_target = target - nums[i];
            if (map.find(tmp_target) == map.end())
                map[nums[i]] = i;
            else
            {
                //map[i] = i;
                result.push_back(map[tmp_target]);
                result.push_back(i);
                
            }
        }

        return (result);
    }
};
int main()
{
    Solution s;
    vector<int>v2; 
    vector<int> v = {2, 7,11,15};

    v2 = s.twoSum(v, 9);
    cout << v2[0] << endl;
    cout << v2[1] << endl;
} 

  