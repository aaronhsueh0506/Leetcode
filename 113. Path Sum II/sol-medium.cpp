class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
      vector<vector<int>> res;
      vector<int> out;
      traversal(root, targetSum, res, out);
      return res;
    }

    void traversal(TreeNode* root, int target, vector<vector<int>>& res, vector<int>& out){
      if(!root) return;
      out.push_back(root->val);
      if(target == root->val && !root->left && !root->right) res.push_back(out);
      traversal(root->left, target-root->val, res, out);
      traversal(root->right, target-root->val, res, out);
      out.pop_back();
    }
};
