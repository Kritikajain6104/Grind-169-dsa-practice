#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        int count[26] = {0};

        // Count the frequency of characters in string s
        for (char x : s)
        {
            count[x - 'a']++;
        }

        // Decrement the frequency of characters in string t
        for (char x : t)
        {
            count[x - 'a']--;
        }

        // Check if any character has non-zero frequency
        for (int val : count)
        {
            if (val != 0)
            {
                return false;
            }
        }

        return true;
        // 2nd
        // unordered_map<char, int> count;

        // // Count the frequency of characters in string s
        // for (auto x : s)
        // {
        //     count[x]++;
        // }

        // // Decrement the frequency of characters in string t
        // for (auto x : t)
        // {
        //     count[x]--;
        // }

        // // Check if any character has non-zero frequency
        // for (auto x : count)
        // {
        //     if (x.second != 0)
        //     {
        //         return false;
        //     }
        // }

        return true;
    }
};