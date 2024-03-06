class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<int> root(n);
        for(int i=0;i<n;i++) root[i] = i;
        
        int res = n;
        for(auto edge:edges){
            int x = find(root, edge[0]), y = find(root, edge[1]);
            if(x!=y){
                root[y] = x;
                res--;
            }
        }
        return res;
    }

    int find(vector<int>& root, int i){
        return root[i]==i?i:find(root,root[i]);
    }
};
