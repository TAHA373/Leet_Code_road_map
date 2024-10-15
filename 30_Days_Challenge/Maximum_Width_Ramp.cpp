<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
using namespace std;
// class Solution {
// public:
//     int maxWidthRamp(vector<int>& nums)
//     {
//         int len = nums.size();
    
//         int i  = 0;
//         int r = 0;
//         int l = len - 1;
//        //cout << l << endl;;
//         int res = INT_MIN;
//                 //     while (nums[l] == *min_element(nums.begin(), nums.end() - i) && nums[l] != nums[r])
//                 // {
//                 //     //cout << "hi" << "\n";
//                 //     l--;
//                 //     i++;
//                 // }
//         while (l >= r)
//         {
//             if (nums[r] <= nums[l])
//                 {
//                     res = max(res, l - r);
//                     if (r <= (l / 400))
//                        {
//                         // cout << l << "\n";
//                         // cout << r << "\n";
//                             return (res);
//                        } 
//                 }
//             r++;
//             if (((r) - l) == 0)
//                 {
//                     l--;
//                     r = 0;
//                 }

//         }
//         return (res);
//     }
// };

class Solution {
public:
    int maxWidthRamp(vector<int>& nums)
    {
            int len = nums.size();
            int r = 0;
            int l = len - 1;
            int  i = 0;
        //nums[l] == *min_element(nums.begin(), nums.end() - i) &&     
        while (nums[l]  <= nums[r])
                {
                    //cout << "hi" << "\n";
                    l--;
                    i++;
                    r++;
                }
            cout << l << endl;
            cout << nums[l] << endl;;
            while (l >= r)
            {
                if (nums[r] <= nums[l])
                    return (l - r);
                r++;
            }
            return (0);
        }
    };
int main()
{
    vector<int> v = {29,25,29,28,28,16,5,25,2,18,17,14,15,15,14,14,13,11,13,9,9,9,8,6,6,11,6,25,4,2};
    Solution s;
    cout << s.maxWidthRamp(v);
=======
#include <vector> // Include the necessary header for vector
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
class Solution {
    public:
    int maxWidthRamp(vector<int>& nums){
        int len = nums.size();
         vector<int> v ;
        int i  = 0;
        int j = 0;
        int l = 0;
        int r = 0;
        int max_value = 0 ;
        for (i = len - 1 ;i >=0; i--) 
          {

           max_value = max(max_value, nums[i]);
         //  cout << max_value << "\n";
           v.push_back(max_value);
        }
        reverse(v.begin(), v.end());

            max_value = 0;
        l=0;
        for (r = 0; r < len ; r++)
        {
            while (nums[l] > v[r])
                {
                    l++;
                   // continue;
                   // r--;
                    }
            max_value = max(max_value, abs (r - l));
        }
        return (max_value);}
        } ; // Example return, to avoid compilation errors


int main() {
    Solution solution;
    vector<int> nums = {1,0};
    int result = solution.maxWidthRamp(nums);
    cout << "Result: " << result << endl;
    return 0;
>>>>>>> 5b9275e7688fc7b44880674580eab5a04570acd3
}