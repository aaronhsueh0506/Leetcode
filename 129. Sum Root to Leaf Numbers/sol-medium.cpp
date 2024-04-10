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
    int sumNumbers(TreeNode* root) {
        return traversal(root, 0);
    }

    int traversal(TreeNode* root, int sum){
        if(!root) return 0;
        sum = sum*10 + root->val;
        if(!root->left && !root->right) return sum;
        return traversal(root->left, sum) + traversal(root->right, sum);
    }
};


class Solution {
public:
    int res = 0;
    int sumNumbers(TreeNode* root) {
        traversal(root, 0);
        return res;
    }

    void traversal(TreeNode* root, int sum){
        if(!root) return;
        
        sum = sum * 10 + root->val;
        if(!root->left && !root->right){
            res += sum;
            return;
        }
        traversal(root->left, sum);
        traversal(root->right, sum);
    }
};
