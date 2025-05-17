#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int size = nums.size();
        unordered_map<int, int> m;
        for (int i = 0; i < size; i++)
        {
            m[nums[i]]++;
        }
        int max = INT_MIN, ans;
        for (auto it : m)
        {
            if (it.second > max)
            {
                max = it.second;
                ans = it.first;
            }
        }
        return ans;
    }
};

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int count, ans;
        sort(nums.begin(), nums.end());
        ans = nums[nums.size() / 2];
        return ans;
    }
};

/*
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;

        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }

            if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }

        return candidate;
    }
};
*/