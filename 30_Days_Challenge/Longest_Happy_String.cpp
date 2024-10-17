#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace  std;

class Solution {
public:
string longestDiverseString(int a, int b, int c) {

    vector<pair<int, char> > v;
    int count = 0;
    int i = 0;
    char caracter = 'z';
    string s;
    v.push_back(make_pair(a, 'a'));
    v.push_back(make_pair(b, 'b'));
    v.push_back(make_pair(c, 'c'));
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    while (1)
    {
        s.push_back(v[i].second);
        v[i].first--;
        //cout << s ;
        if ( caracter == v[i].second)
            count++;
        else
            caracter =  v[i].second;
        if (count > 2)
            {
                s.pop_back();
                i = 
                count = 0;
                i++;
            }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        if (i > 3)
            i = 0;
        if (v[1].first == 0 && v[2].first == 0)
            break ;
    }
    return s;
}   
};
int main()
{
    Solution s;
    cout << s.longestDiverseString(1, 1, 1);
}