#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool canArrange(vector<int>& arr, int k)
    {
        int i = 0;
       // sort(arr.begin(), arr.end());
       while (i < arr.size())
       {
        if (arr[i] < 0)
            arr[i] = arr[i] + k;
        else
            arr[i] = arr[i] % k;
       // cout << arr[i] << "\n";
         i++;
       }
        int j = arr.size() / 2;
        int d = arr.size() - 1;
        int count = 0;
        int f = 0;

        for (int i = 0; i <= d; i++)
        {
            for (int  b = d; b >= j; b--)
            {
                int tmp = 0;
                if (b != i)
                    {
                        tmp = (arr[b]) + arr[i];
                    }
              //  cout << tmp << endl;
               if ((tmp % k == 0) && f)
                    {
                        count++;
                        f = 0;
                        break;
                    }
                    f = 0;
                if (count >= j)
                    return (true);

            }
        }
        //cout << count << endl;
        // if (count >= j)
        //     return (true);
        return (false);
    }
};
int main()
{
    Solution s;
    vector<int> arr ={1,2,3,4,5,6};
    cout << s.canArrange(arr, 7);
}   