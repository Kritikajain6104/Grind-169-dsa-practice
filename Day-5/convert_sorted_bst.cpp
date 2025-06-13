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
    TreeNode *rec(int l, int r, vector<int> &nums)
    {
        if (l > r)
        {
            return NULL;
        }
        TreeNode *root;
        int mid = l + (r - l) / 2;
        root = new TreeNode(nums[mid]);
        root->left = rec(l, mid - 1, nums);
        root->right = rec(mid + 1, r, nums);
        return root;
    }

    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        TreeNode *root;
        root = rec(0, nums.size() - 1, nums);
        return root;
    }
};