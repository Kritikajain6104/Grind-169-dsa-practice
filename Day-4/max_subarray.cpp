#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int currsum = 0;
        int ans = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            currsum += nums[i];
            ans = max(ans, currsum);
            if (currsum < 0)
            {
                currsum = 0;
            }
        }
        return ans;
    }
};