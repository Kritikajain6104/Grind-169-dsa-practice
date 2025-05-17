#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        // bruteforce O(n^2)

        // O(n)
        unordered_set<int> st;
        for (int i = 0; i < nums.size(); i++)
        {
            if (st.find(nums[i]) != st.end())
            {
                return true;
            }
            st.insert(nums[i]);
        }
        return false;
    }
};