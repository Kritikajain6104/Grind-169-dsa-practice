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
    bool isSameTree(TreeNode *p, TreeNode *q)
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
        bool leftAns = isSameTree(p->left, q->left);
        bool rightAns = isSameTree(p->right, q->right);
        return leftAns && rightAns;
    }
    TreeNode *invertTree(TreeNode *root)
    {
        if (root == NULL)
        {
            return NULL;
        }
        root->left = invertTree(root->left);
        root->right = invertTree(root->right);
        TreeNode *temp;
        temp = root->left;
        root->left = root->right;
        root->right = temp;
        return root;
    }

    bool isSymmetric(TreeNode *root)
    {
        TreeNode *left;
        left = root->left;
        left = invertTree(left);
        return isSameTree(left, root->right);
    }
};

class Solution
{
public:
    bool isSymmetric(TreeNode *root)
    {
        return isMirror(root->left, root->right);
    }

private:
    bool isMirror(TreeNode *n1, TreeNode *n2)
    {
        if (n1 == nullptr && n2 == nullptr)
        {
            return true;
        }

        if (n1 == nullptr || n2 == nullptr)
        {
            return false;
        }

        return n1->val == n2->val && isMirror(n1->left, n2->right) && isMirror(n1->right, n2->left);
    }
};