class Solution {
public:
    int countPyramids(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int res = 0;
        vector<vector<int>> dp(m, vector<int>(n));

        for(int i=m-2; i>=0; i--){
            for(int j=1; j<n-1; j++){
                if(grid[i][j] && grid[i+1][j-1] && grid[i+1][j] && grid[i+1][j+1]) 
                    dp[i][j] = min(dp[i+1][j], min(dp[i+1][j-1], dp[i+1][j+1]))+1;
                res += dp[i][j];
            }
        }
        
        dp = vector<vector<int>>(m, vector<int>(n));
        for(int i=1; i<m; i++){
            for(int j=1; j<n-1; j++){
                if(grid[i][j] && grid[i-1][j-1] && grid[i-1][j] && grid[i-1][j+1]) 
                    dp[i][j] = min(dp[i-1][j], min(dp[i-1][j-1], dp[i-1][j+1]))+1;
                res += dp[i][j];
            }
        }
        return res;
    }
};
