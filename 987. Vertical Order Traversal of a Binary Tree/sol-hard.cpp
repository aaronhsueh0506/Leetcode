class Solution {
public:
    vector<vector<int>> nodes;
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        DFS(root, 0, 0);

        sort(nodes.begin(), nodes.end());
        
        vector<vector<int>> res;
        int prev = INT_MIN;
        for(auto& x: nodes){
            if(x[0]!=prev){
                res.push_back({});
                prev = x[0];
            }
            res.back().push_back(x[2]);
        }
        return res;
    }

    void DFS(TreeNode* root, int pos, int level){
        if(!root) return;
        nodes.push_back({pos, level, root->val});
        DFS(root->left, pos-1, level+1);
        DFS(root->right, pos+1, level+1);
    }
};
