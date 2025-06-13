#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string ans = "";
        for (int i = 0; i < strs[0].size(); i++)
        {
            char ch = strs[0][i];
            for (int j = 1; j < strs.size(); j++)
            {
                if (i >= strs[j].size() || strs[j][i] != ch)
                    return ans;
            }
            ans += ch;
        }
        return ans;
    }
    // string longestCommonPrefix2(vector<string> &strs)
    // {
    //     if (strs.empty())
    //         return "";
    //     sort(strs.begin(), strs.end());
    //     string first = strs[0], last = strs.back(), res = "";
    //     for (int i = 0; i < first.size(); ++i)
    //     {
    //         if (first[i] != last[i])
    //             break;
    //         res += first[i];
    //     }
    //     return res;
    // }
};