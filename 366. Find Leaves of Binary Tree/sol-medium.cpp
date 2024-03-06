class Solution {
public:
    vector<vector<int>> findLeaves(TreeNode* root) {
        vector<vector<int>> res;
        traversal(root, res);
        return res;
    }

    int traversal(TreeNode* root, vector<vector<int>>& res){
        if(!root) return -1;
        int level = 1 + max(traversal(root->left, res), traversal(root->right, res));
        if(res.size() <= level) res.push_back({});
        res[level].push_back(root->val);
        return level;
    }
};
