#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<int, int> m;
        for (int i = 0; magazine[i] != '\0'; i++)
        {
            m[magazine[i]]++;
        }
        for (int i = 0; ransomNote[i] != '\0'; i++)
        {
            if (m.find(ransomNote[i]) != m.end() && m[ransomNote[i]] != 0)
            {
                m[ransomNote[i]]--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};