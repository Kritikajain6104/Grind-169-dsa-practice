#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}

class Solution
{
public:
    int dp[45];
    int count(int curr, int n)
    {
        // pruning
        if (curr > n)
        {
            return 0;
        }
        // base case
        if (curr == n)
        {
            return 1;
        }
        if (dp[curr] != -1)
        {
            return dp[curr];
        }
        // choice
        int oneStep = count(curr + 1, n);
        int twoStep = count(curr + 2, n);
        return dp[curr] = oneStep + twoStep;
    }
    int climbStairs(int n)
    {
        int ways = 0;
        memset(dp, -1, sizeof(dp));
        ways = count(0, n);
        return ways;
    }
};