class Solution {
public:
    map<int, vector<pair<int,int>>> m;
    vector<vector<int>> verticalOrder(TreeNode* root) {
        DFS(root, 0, 0);

        vector<vector<int>> res;
        for(auto& [_, v]: m){
            sort(v.begin(), v.end(), cmp);
            vector<int> t;
            for(auto& x: v){
                t.push_back(x.second);
            }
            res.push_back(t);
        }
        return res;
    }

    static bool cmp(pair<int,int>& l1, pair<int,int>& l2){
        return l1.first<l2.first;
    }

    void DFS(TreeNode* root, int level, int pos){
        if(!root) return;
        m[pos].push_back({level, root->val});
        DFS(root->left, level+1, pos-1);
        DFS(root->right, level+1, pos+1);
    }
};
