class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
      int m = matrix.size(), n = matrix[0].size();
      vector<vector<int>> dp(m, vector<int>(n));
      int res = 0;

      for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
          if(i==0 || j==0) dp[i][j] = matrix[i][j] - '0';
          else{
           if(matrix[i][j]=='1') dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1])) + 1; 
          }
          res = max(res, dp[i][j]);
        }
      }
      return res;
    }
};
