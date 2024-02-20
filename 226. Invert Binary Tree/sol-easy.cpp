class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
      if(!root || !root->left && !root->right) return root;

      TreeNode* tmp = root->right;
      root->right = root->left;
      root->left = tmp;

      invertTree(root->left);
      invertTree(root->right);

      return root;
    }
};
