class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int res = INT_MIN;
        traversal(root, res);
        return res;
    }

    int traversal(TreeNode* root, int& res){
      if(!root) return 0;
      int left = max(traversal(root->left, res),0);
      int right = max(traversal(root->right, res),0);
      res = max(res, left+right+root->val); // subtree, without parent
      return max(left,right) + root->val; // give bigger path to parent (left or right)
    }
};
