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
    int res = 0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        traversal(root, low, high);
        return res;
    }

    void traversal(TreeNode* root, int low, int high){
        if(!(root)) return;

        if(root->val > high) traversal(root->left, low, high);
        else if(root->val < low) traversal(root->right, low, high);
        else {
            res += root->val;
            traversal(root->left, low, high);
            traversal(root->right, low, high);
        }
    }
};
