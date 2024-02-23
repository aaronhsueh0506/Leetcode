class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
      vector<int> res;
      traversal(root, res, 0);
      return res;
    }

    void traversal(TreeNode* root, vector<int>& res, int levle){
      if(!root) return;
      if(res.size() <= level) res.push_back(root->val);

      traversal(root->right, res, level+1);
      traversal(root->left, res, level+1);
    }
};
