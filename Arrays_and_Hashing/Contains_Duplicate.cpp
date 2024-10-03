#include <atomic>
#include <iostream>

#include <map>
#include <vector>
using namespace std;
/*Time exceed solution*/
// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         int i = 0;
//         int j = 1;
//         //vector<int> v(*max_element(nums.begin(), nums.end()) + 1, 0);
//         while (i < nums.size())
//         {
//             while (j < nums.size())
//             {
//                     if (nums[i] == nums[j])
//                     {
//                         return (true);
//                     }
//                     j++;
//             }
//             i++;
//             j = i + 1;
//         }
//         return (false);
//     }
// };

/*new solution*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int i = 0;
        int j = 1;
        int size = 0;
        map<int ,int> v;
        size = nums.size();
        while (i < nums.size())
        {
            v[nums[i]] += 1;
            if (v[nums[i]] > 1)
                return(true);
            i++;
        }
        return (false);
    }
};

// int main()
// {

//   vector<int> a = { 1,2 ,3,1};
//     Solution s1;
//     s1.containsDuplicate(a);
// }