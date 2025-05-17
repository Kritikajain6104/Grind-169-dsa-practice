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
    pair<bool, int> isbalanced(TreeNode *root)
    {
        if (root == NULL)
        {
            return make_pair(true, 0);
        }
        pair<int, int> leftAns = isbalanced(root->left);
        pair<int, int> rightAns = isbalanced(root->right);

        pair<int, int> rootAns;
        rootAns.second = 1 + max(leftAns.second, rightAns.second);
        bool rootans = (abs(leftAns.second - rightAns.second) > 1 ? false : true);
        rootAns.first = (leftAns.first && rightAns.first && rootans);

        return rootAns;
    }
    bool isBalanced(TreeNode *root)
    {
        pair<bool, int> ans;

        ans = isbalanced(root);
        return ans.first;
    }
};

// class Solution
// {
// public:
//     int height(TreeNode *root)
//     {
//         if (root == NULL)
//         {
//             return 0;
//         }
//         return max(height(root->left), height(root->right)) + 1;
//     }
//     bool isBalanced(TreeNode *root)
//     {
//         if (root == NULL)
//         {
//             return true;
//         }
//         int leftHeight = height(root->left);
//         int rightHeight = height(root->right);
//         bool leftAns = isBalanced(root->left);
//         bool rightAns = isBalanced(root->right);
//         if (abs(leftHeight - rightHeight) <= 1 && rightAns && leftAns)
//         {
//             return true;
//         }
//         return false;
//     }
// };