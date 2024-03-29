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
    int countNodes(TreeNode* root) {
        traversal(root);
        return res;
    }
    void traversal(TreeNode* root){
        if(!root) return;
        res++;
        if(root->left) traversal(root->left);
        if(root->right) traversal(root->right); 
    }
};
