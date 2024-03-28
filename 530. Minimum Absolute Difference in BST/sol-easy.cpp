/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int getMinimumDifference(TreeNode* root) {
        int res = INT_MAX;
        traversal(root, res, INT_MIN, INT_MAX);
        return res;
    }

    void traversal(TreeNode* root, int& res, int low, int high){
        if(!root) return;
        if(low!=INT_MIN) res = min(res, root->val - low);
        if(high!=INT_MAX) res = min(res, high - root->val);

        traversal(root->left, res, low, root->val);
        traversal(root->right, res, root->val, high);
    }
};
