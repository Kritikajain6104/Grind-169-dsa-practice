#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
bool isBadVersion(int val)
{
    /////SOMETHING......
}
class Solution
{
public:
    int firstBadVersion(int n)
    {
        int low = 0, high = n;
        int mid;
        int ans = INT_MAX;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            if (isBadVersion(mid))
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};