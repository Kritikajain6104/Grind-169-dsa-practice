
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
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        // if(root==NULL){
        //     return NULL;
        // }
        // if(root->val==p->val || root->val==q->val){
        //     return root;
        // }
        // root->left=lowestCommonAncestor(root->left,p,q);
        // root->right=lowestCommonAncestor(root->right,p,q);

        // if(root->left && root->right){
        //     return root;
        // }
        // if(root->left){
        //     return root->left;
        // }
        // if(root->right){
        //     return root->right;
        // }
        // return NULL;

        // if ((root -> val > p -> val) && (root -> val > q -> val)) {
        //     return lowestCommonAncestor(root -> left, p, q);
        // }
        // if ((root -> val < p -> val) && (root -> val < q -> val)) {
        //     return lowestCommonAncestor(root -> right, p, q);
        // }
        // return root;
    }
};