#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}

class Solution
{
public:
    uint32_t reverseBits(uint32_t n)
    {
        string s = "";
        uint32_t ans = 0;
        for (int i = 0; i < 32; i++)
        {
            if (n & 1)
            {
                s = '1' + s;
            }
            else
            {
                s = '0' + s;
            }
            n = n >> 1;
        }
        for (int i = 0; i < 32; i++)
        {
            if (s[i] == '1')
            {
                ans += (1 << i);
            }
        }
        return ans;
    }
};

uint32_t reverseBits(uint32_t n)
{
    uint32_t ans = 0;
    for (int i = 0; i < 32; ++i)
    {
        ans <<= 1;      // Left shift ans to make room for the next bit
        ans |= (n & 1); // Copy the least significant bit of n into ans
        n >>= 1;        // Move to the next bit of n
    }
    return ans;
}
