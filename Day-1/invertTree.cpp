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
    TreeNode *invertTree(TreeNode *root)
    {
        // root==NULL
        if (root == NULL)
            return NULL;
        // call for left Nodes
        invertTree(root->left);
        // call for right Nodes
        invertTree(root->right);

        // root swap left and right pointer
        TreeNode *temp;
        temp = root->left;
        root->left = root->right;
        root->right = temp;
        return root;
    }
};