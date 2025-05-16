#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}

class Solution
{
public:
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {-1, 1, 0, 0};
    int visited[100][100];
    int n, m;
    int valid(int i, int j)
    {
        if (i >= 0 && i < n && j >= 0 && j < m)
        {
            return true;
        }
        return false;
    }
    void bfs(int r, int c, vector<vector<int>> &ans, int color, int startColor)
    {
        queue<pair<int, int>> q;
        visited[r][c] = 1;
        q.push({r, c});
        while (!q.empty())
        {
            pair<int, int> temp = q.front();
            q.pop();
            ans[temp.first][temp.second] = color;
            visited[temp.first][temp.second] = 1;
            for (int k = 0; k < 4; k++)
            {
                int newdx = temp.first + dx[k];
                int newdy = temp.second + dy[k];
                if (valid(newdx, newdy) && visited[newdx][newdy] == -1 && ans[newdx][newdy] == startColor)
                {
                    q.push({newdx, newdy});
                }
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        vector<vector<int>> ans(image);
        memset(visited, -1, sizeof(visited));
        n = image.size();
        m = image[0].size();
        int startColor = image[sr][sc];
        bfs(sr, sc, ans, color, startColor);

        return ans;
    }
};