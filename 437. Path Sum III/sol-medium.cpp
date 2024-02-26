class Solution {
public:
    int pathSum(TreeNode* root, int targetSum) {
        int res = 0;
        vector<TreeNode*> out;
        DFS(root, targetSum, 0, res, out);
        return res;
    }

    void DFS(TreeNode* root, int targetSum, long cursum, int& res, vector<TreeNode*>& out){
      if(!root) return;
      cursum += root->val;
      out.push_back(root);
      if(targetSum==cursum) res++;

      long t = cursum;
      for(int i=0; i<out.size(); i++){
        t -= out[i];
        if(t==targetSum) res++;
      }

      DFS(root->left, targetSum, cursum, res, out);
      DFS(root->right, targetSum, cursum, res, out);
      out.pop_back();
    }
};
