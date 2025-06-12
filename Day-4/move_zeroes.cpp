#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int i = 0, j = 0;
        while (j < nums.size())
        {
            if (nums[j] != 0)
            {
                nums[i] = nums[j];
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
        while (i < nums.size())
        {
            nums[i] = 0;
            i++;
        }
    }
};

// 2nd
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int left = 0;

        for (int right = 0; right < nums.size(); right++)
        {
            if (nums[right] != 0)
            {
                swap(nums[right], nums[left]);
                left++;
            }
        }
    }
};