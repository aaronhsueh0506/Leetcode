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
    vector<int> boundaryOfBinaryTree(TreeNode* root) {
        if(!root) return {};
        vector<int> res{root->val};

        traversal(root->left, true, false, res);
        traversal(root->right, false, true, res);
        return res;
    }

    void traversal(TreeNode* root, bool l_bd, bool r_bd, vector<int>& res){
        if(!root) return;
        if(!root->left && !root->right){
            res.push_back(root->val);
            return;
        }
        if(l_bd) res.push_back(root->val);
        traversal(root->left, l_bd && root->left, r_bd && !root->right, res);
        traversal(root->right, l_bd && !root->left, r_bd && root->right, res);
        if(r_bd) res.push_back(root->val);
    }
};
