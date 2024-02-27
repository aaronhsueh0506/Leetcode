class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int res = INT_MIN;
        traversal(root, res);
        return res;
    }

    int traversal(TreeNode* root, int& res){
      if(!root) return 0;
      int left = traversal(root->left, res);
      int right = traversal(root->right, res);
      res = max(res, left+right+root->val); // subtree, without parent
      return max(left,right) + root->val; // give bigger path to parent (left or right)
    }
};
