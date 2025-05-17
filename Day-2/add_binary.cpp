#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}
// clean code
class Solution
{
public:
    string addBinary(string a, string b)
    {
        int i = a.size() - 1, j = b.size() - 1, carry = 0;
        string result = "";

        while (i >= 0 || j >= 0 || carry)
        {
            int sum = carry;

            if (i >= 0)
                sum += a[i--] - '0';
            if (j >= 0)
                sum += b[j--] - '0';

            result = char((sum % 2) + '0') + result;
            carry = sum / 2;
        }

        return result;
    }
};

// my code
class Solution
{
public:
    string addBinary(string a, string b)
    {
        int c = 0;
        int i = a.size() - 1, j = b.size() - 1;
        string ans = "";
        while (i >= 0 && j >= 0)
        {
            if (a[i] == '0' && b[j] == '0')
            {
                if (c == 0)
                    ans = '0' + ans;
                else
                {
                    ans = '1' + ans;
                    c = 0;
                }
            }
            else if ((a[i] == '0' && b[j] == '1') || (a[i] == '1' && b[j] == '0'))
            {
                if (c == 0)
                    ans = '1' + ans;
                else
                {
                    ans = '0' + ans;
                    c = 1;
                }
            }
            else
            {
                if (c == 0)
                    ans = '0' + ans;
                else
                    ans = '1' + ans;
                c = 1;
            }
            i--, j--;
        }
        while (i >= 0)
        {
            cout << a[i] << " ";
            if (a[i] == '0')
            {
                if (c)
                {
                    ans = '1' + ans;
                    c = 0;
                }
                else
                {
                    ans = '0' + ans;
                }
            }
            else
            {
                if (c)
                {
                    ans = '0' + ans;
                    c = 1;
                }
                else
                {
                    ans = '1' + ans;
                }
            }
            i--;
        }
        while (j >= 0)
        {
            if (b[j] == '0')
            {
                if (c)
                {
                    ans = '1' + ans;
                    c = 0;
                }
                else
                {
                    ans = '0' + ans;
                }
            }
            else
            {
                if (c)
                {
                    ans = '0' + ans;
                    c = 1;
                }
                else
                {
                    ans = '1' + ans;
                }
            }
            j--;
        }
        if (c)
        {
            ans = '1' + ans;
        }
        return ans;
    }
};