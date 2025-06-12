#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int ans;
        int n = nums.size();
        long long tot = (long long)n * (n + 1);
        tot = tot / 2;
        long long sum = accumulate(nums.begin(), nums.end(), 0);
        return tot - sum;
    }
};