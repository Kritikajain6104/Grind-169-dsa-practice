#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> ans(2);
    // bruteforce O(n^2)
    //  for(int i=0;i<nums.size();i++){
    //      for(int j=i+1;j<nums.size();j++){
    //          if(nums[i]+nums[j]==target){
    //              ans.push_back(i);
    //              ans.push_back(j);
    //              return ans;
    //          }
    //      }
    //  }
    //  return ans;

    // map O(n)
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        if (m.find(target - nums[i]) != m.end())
        {
            ans[0] = m[target - nums[i]], ans[1] = i;
            return ans;
        }
        m[nums[i]] = i;
    }
    return ans;
}