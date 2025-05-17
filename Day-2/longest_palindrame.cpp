
#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}
class Solution
{
public:
    int longestPalindrome(string s)
    {
        bool singleflag = false;
        unordered_map<char, int> m;
        for (int i = 0; i < s.size(); i++)
        {
            m[s[i]]++;
        }
        int ans = 0;
        for (auto i : m)
        {
            if (i.second % 2 == 0)
            {
                ans += i.second;
            }
            else
            {
                ans += (i.second - 1);
                singleflag = true;
            }
        }
        if (singleflag)
            ans++;
        return ans;
    }
};