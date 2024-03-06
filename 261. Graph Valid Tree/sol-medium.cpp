class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        vector<int> root(n);
        for(int i=0; i<n; i++) root[i] = i;

        for(auto edge: edges){
            int rootx = find(root, edge[0]), rooty = find(root, edge[1]);
            if(rootx==rooty) return false;
            root[rooty] = rootx;
        }
        return edges.size()==n-1;
    }

    int find(vector<int>& root, int i){
        return root[i]==i ? i : find(root, root[i]);
    }
};
