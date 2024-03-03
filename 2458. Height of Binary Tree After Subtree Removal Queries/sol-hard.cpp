class Solution {
public:
    vector<int> treeQueries(TreeNode* root, vector<int>& queries) {
        vector<int> res;
        DFS(root, 0, 0);

        for(int query: queries){
            res.push_back(valToMaxHeight[query]);
        }    
        return res;
    }

    int getHeight(TreeNode* root){
        if(!root) return 0;
        if(valToHeight.count(root->val)) return valToHeight[root->val];
        return valToHeight[root->val] = (1 + max(getHeight(root->left), getHeight(root->right)));
    }

    void DFS(TreeNode* root, int depth, int maxheight){
        if(!root) return;
        valToMaxHeight[root->val] = maxheight;
        DFS(root->left, depth+1, max(maxheight, depth + getHeight(root->right))); // drop left, max with be depth plus level under right
        DFS(root->right, depth+1, max(maxheight, depth + getHeight(root->left))); // drop right
    }

private:
    unordered_map<int, int> valToMaxHeight;  // the level without node
    unordered_map<int, int> valToHeight; // the level under node
};
