#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}

class Solution
{
public:
    int count(int n)
    {
        int ans = 0;
        while (n != 0)
        {
            if (n & 1)
                ans++;
            n = n >> 1;
        }
        return ans;
    }
    vector<int> countBits(int n)
    {
        vector<int> ans;
        for (int i = 0; i <= n; i++)
        {
            ans.push_back(count(i));
        }
        return ans;
    }
};
