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
}