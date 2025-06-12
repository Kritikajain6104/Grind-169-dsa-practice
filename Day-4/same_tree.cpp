
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
        int leftAns = isSameTree(p->left, q->left);
        int rightAns = isSameTree(p->right, q->right);
        return leftAns && rightAns;
    }
};