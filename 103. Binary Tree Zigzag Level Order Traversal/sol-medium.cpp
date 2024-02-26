class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        traversal(root, 0, res);
        return res;
    }

    void traversal(TreeNode* root, int level, vector<vector<int>>& res){
      if(!root) return;
      if(res.size() <= level) res.push_back({});
      if(level%2) res[level].insert(res[level].begin(), root->val);
      else res.push_back(root->val);

      traversal(root->left, level+1, res);
      traversal(root->right, level+1, res);
    }
};
