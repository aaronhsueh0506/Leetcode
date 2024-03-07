class Solution {
public:
    int numberOfGoodPaths(vector<int>& vals, vector<vector<int>>& edges) {
        int n = vals.size();

        vector<int> sum(n,1);
        vector<int> root(n);
        for(int i = 0; i < n; i++) root[i] = i;

        sort(edges.begin(), edges.end(), [&](vector<int>& a, vector<int>& b){
            return max(vals[a[0]], vals[a[1]]) < max(vals[b[0]], vals[b[1]]);
        }); 

        int res = 0;
        for(int i=0; i<edges.size(); i++){
            int x = find(root, edges[i][0]), y = find(root, edges[i][1]);
            if(vals[x]!=vals[y]){
                if(vals[x]>vals[y]) root[y] = x;
                else root[x] = y;
            }
            else{
                root[x] = y;
                res += sum[x] * sum[y];
                sum[y] += sum[x];
            }
        }
        return res + n;
    }

    int find(vector<int>& root, int i){
        return root[i] == i ? i : root[i]=find(root, root[i]);
    }
};
