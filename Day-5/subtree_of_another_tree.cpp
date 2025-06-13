
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
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
    bool isSame(TreeNode *p, TreeNode *q)
    {
        if (p == NULL && q == NULL)
        {
            return true;
        }
        if (p == NULL || q == NULL)
        {
            return false;
        }
        if (p->val != q->val)
        {
            return false;
        }
        bool leftAns = isSame(p->left, q->left);
        bool rightAns = isSame(p->right, q->right);
        return leftAns && rightAns;
    }

    bool isSubtree(TreeNode *root, TreeNode *subRoot)
    {
        if (root == NULL)
            return false; // base case
        if (isSame(root, subRoot))
            return true;
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};