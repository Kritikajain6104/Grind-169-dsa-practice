#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution
{
public:
    int height(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        return 1 + max(height(root->left), height(root->right));
    }
    int diameter(TreeNode *root, int &ans)
    {
        if (root == NULL)
        {
            return 0;
        }
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        int rootAns = leftHeight + rightHeight;
        int leftAns = diameter(root->left, ans);
        int rightAns = diameter(root->right, ans);

        ans = max(ans, rootAns);
        return ans;
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        int ans = 0;
        diameter(root, ans);
        return ans;
    }
};

class Solution
{
public:
    pair<int, int> diameter(TreeNode *root, int &ans)
    {
        if (root == NULL)
        {
            return make_pair(0, 0);
        }

        pair<int, int> leftAns = diameter(root->left, ans);
        pair<int, int> rightAns = diameter(root->right, ans);

        pair<int, int> rootAns;
        rootAns.second = 1 + max(leftAns.second, rightAns.second);
        rootAns.first = leftAns.second + rightAns.second;
        ans = max(ans, rootAns.first);
        return rootAns;
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        int curr = 0;
        pair<int, int> ans = diameter(root, curr);
        return curr;
    }
};