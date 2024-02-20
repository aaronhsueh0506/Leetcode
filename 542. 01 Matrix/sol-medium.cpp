class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
      int m = mat.size(), n = mat[0].size();
      vector<vector<int>> DP(m, vector<int>(n));
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
          if(mat[i][j]==0) DP[i][j]=0;
          else{
            if(i>0) DP[i][j] = min(DP[i][j], DP[i-1][j]+1);
            if(j>0) DP[i][j] = min(DP[i][j], DP[i][j-1]+1);
          }
        }
      }

      for(int i=m-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
          if(i<m-1) DP[i][j] = min(DP[i][j], DP[i+1][j]+1);
          if(j<n-1) DP[i][j] = min(DP[i][j], DP[i][j+1]+1);
        }
      }
      return DP;
    }
};
