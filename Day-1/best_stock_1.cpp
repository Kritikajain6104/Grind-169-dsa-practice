#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int ans = 0;
        // bruteforce O(n^2)
        //  for(int i=0;i<prices.size();i++){
        //      for(int j=i+1;j<prices.size();j++){
        //          ans=max(prices[j]-prices[i],ans);
        //      }

        // }
        // return ans;

        // optimized O(n)
        int mini = INT_MAX;
        for (int i = 0; i < prices.size(); i++)
        {
            ans = max(prices[i] - mini, ans);
            mini = min(mini, prices[i]);
        }
        return ans;
    }
};