class Solution {
public:
    vector<vector<int>> dirs = {{0,-1}, {-1, 0}, {0, 1}, {1, 0}};
    int longestIncreasingPath(vector<vector<int>>& matrix) {
      int res = 1, m = matrix.size(), n = matrix[0].size();

      vector<vector<int>> dp(m, vector<int>(n));
      
      for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
          res = max(res, dfs(matrix, dp, i, j));
        }
      }
      return res;
    }

    int dfs(vector<vector<int>>& matrix, vector<vector<int>>& dp, int i, int j){
      if(dp[i][j]) return dp[i][j];
      int mx = 1;
      for(auto dir: dirs){
        int x = i + dir[0], y = j + dir[1];
        if(x<0 || y<0 || x>=matrix.size() || y>=matrix[0].size() || matrix[x][y]<=matrix[i][j]) continue;
        int len = 1 + dfs(matrix, dp, x, y);
        mx = max(mx, len)
      }
      dp[i][j] = mx;
      return mx;
    }
};
