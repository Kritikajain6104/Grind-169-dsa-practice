#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            ans = (ans ^ nums[i]);
        }
        return ans;
    }
};