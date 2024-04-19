class Solution {
public:
    vector<vector<int>> minScore(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<tuple<int,int,int>> q;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                q.push_back({grid[i][j], i, j});
            }
        }
        sort(q.begin(), q.end());

        vector<int> r(m), c(n);
        for(auto [_, i, j]: q){
            grid[i][j] = max(r[i], c[j]) + 1 ;
            r[i] = grid[i][j];
            c[j] = grid[i][j];
        }
        return grid;
    }
};
