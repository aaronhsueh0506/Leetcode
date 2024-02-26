class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
      return traversal(root, k);
    }

    int traversal(TreeNode* root, int& k) {
      if(!root) return -1;
      int val = traversal(root->left, k);
      if(k==0) return val;
      if(--k==0) return root->val;
      return traversal(root->right, k);
    }
};
