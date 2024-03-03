class Solution {
public:
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        vector<TreeNode*> res;
        unordered_set<int> s(to_delete.begin(), to_delete.end());
        traversal(root, s, res, true);
        return res;
    }

    TreeNode* traversal(TreeNode* root, unordered_set<int>& s, vector<TreeNode*>& res, bool isroot){
        if(!root) return nullptr;
        bool deleted = s.count(root->val);
        if(isroot && !deleted) res.push_back(root);
        root->left = traversal(root->left, s, res, deleted); // if root is deleted, leaf will become root
        root->right = traversal(root->right, s, res, deleted); // if root is deleted, leaf will become root
        return deleted ? nullptr: root;
    }
};
