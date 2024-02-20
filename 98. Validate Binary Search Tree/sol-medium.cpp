class Solution {
public:
    bool isValidBST(TreeNode* root) {
      return BST(root, nullptr, nullptr);
    }

    bool BST(TreeNode* root, TreeNode* max_node, TreeNode* min_node){
      if(root==NULL) return true;
      if(max_node && root->val >= max_node->val) return false;
      if(min_node && root->val <= min_node->val) return false;
      return BST(root->left, root, min_node) && BST(root->right, max_node, root);
    }
};
