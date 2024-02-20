class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
      vector<vector<int>> res;
      traversal(root, res, 0);
      return res;
    }

    void traversal(TreeNode* root, vector<vector<int>> &res, int level){
      if(!root) return;
      if(res.size()<=level) res.push_back({});
      res[level].push_back(root->val);

      if(root->left) traversal(root->left, res, level+1);
      if(root->right) traversal(root->right, res, level+1);
    }
};
