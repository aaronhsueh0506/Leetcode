class Solution {
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<int> count(n,1);
        vector<int> root(n);
        for(int i=0; i<n; i++) root[i] = i;
        for(auto& edge: edges){
            int rx = find(root, edge[0]), ry = find(root, edge[1]);
            if(rx!=ry){
                root[ry] = rx;
                count[rx] += count[ry];
            }
        }
        long long res = 0;
        for(int i=0; i<n; i++){
            res += n - count[find(root,i)];
        }
        return res/2;
    }

    int find(vector<int>& root, int i){
        return root[i]==i?i:find(root,root[i]);
    }
};
