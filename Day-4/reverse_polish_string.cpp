
#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}

class Solution
{
public:
    bool is_op(string &s)
    {
        if (s == "*" || s == "+" || s == "-" || s == "/")
        {
            return true;
        }
        return false;
    }
    int evalRPN(vector<string> &tokens)
    {
        int ans = 0;
        stack<int> st;
        for (int i = 0; i < tokens.size(); i++)
        {
            if (is_op(tokens[i]))
            {
                int num2 = st.top();
                st.pop();
                int num1 = st.top();
                st.pop();
                if (tokens[i] == "*")
                {
                    ans = num1 * num2;
                }
                if (tokens[i] == "/")
                {
                    ans = num1 / num2;
                }
                if (tokens[i] == "+")
                {
                    ans = num1 + num2;
                }
                if (tokens[i] == "-")
                {
                    ans = num1 - num2;
                }
                st.push(ans);
            }
            else
            {
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};