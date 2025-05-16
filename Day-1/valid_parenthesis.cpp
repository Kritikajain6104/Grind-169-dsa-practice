#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}

class Solution
{
public:
    bool isMatch(char a, char b)
    {
        if (a == '(' && b == ')')
        {
            return true;
        }
        if (a == '{' && b == '}')
        {
            return true;
        }
        if (a == '[' && b == ']')
        {
            return true;
        }
        return false;
    }
    bool isValid(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
            else
            {
                if (st.empty())
                {
                    return false;
                }
                char temp = st.top();

                if (isMatch(temp, s[i]))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        if (st.empty())
        {
            return true;
        }
        return false;
    }
};