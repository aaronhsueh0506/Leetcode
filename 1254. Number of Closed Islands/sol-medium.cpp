class Solution {
public:
    int m, n;
    int closedIsland(vector<vector<int>>& grid) {
        int res = 0;
        m = grid.size();
        n = grid[0].size();

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if((i==0 || i==m-1 || j==0 || j==n-1) && grid[i][j]==0)
                    dfs(grid, i, j);
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!=0) continue;
                dfs(grid, i, j);
                res++;
            }
        }
        return res;
    }

    void dfs(vector<vector<int>>& grid, int i, int j){
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]!=0) return;
        grid[i][j] = 2;
        dfs(grid,i-1,j);
        dfs(grid,i,j-1);
        dfs(grid,i+1,j);
        dfs(grid,i,j+1);
    }
};
