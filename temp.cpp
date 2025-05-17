#include <bits/stdc++.h>
using namespace std;
const double pi = 3.141592653;
#define int long long
#define endl "\n"
#define MOD 1000000007LL
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        int d = 0, u = 0;
        int ans = 0;
        int start = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (p[i] > p[i - 1] && p[i] > p[i + 1])
            {
                u++;
            }
            if (p[i] < p[i - 1] && p[i] < p[i + 1])
            {
                d++;
            }
            if (u == 1 && d == 1)
            {
                while (i - start + 1 >= 4 && p[start] < p[start + 1] && u == 1 && d == 1)
                {
                    ans++;
                    if (p[i] > p[i - 1] && p[i] > p[i + 1])
                    {
                        u--;
                    }
                    if (p[i] < p[i - 1] && p[i] < p[i + 1])
                    {
                        d--;
                    }
                    start++;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}