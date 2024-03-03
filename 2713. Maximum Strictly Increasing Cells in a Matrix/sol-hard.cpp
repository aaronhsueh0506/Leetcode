class Solution {
public:
    int maxIncreasingCells(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();

        vector<vector<int>> p;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                p.push_back({mat[i][j],i,j});
            }
        }

        sort(p.begin(), p.end(), greater<vector<int>>());

        vector<vector<int>> dp(m, vector<int>(n));
        vector<int> row(m), col(n);

        for(int i=0; i<p.size(); i++){
            int j = i;
            while(j<p.size() && p[j][0]==p[i][0]) j++; // skip same value

            for(int k=i; k<j; k++){
                int r_idx = p[k][1], c_idx = p[k][2];
                dp[r_idx][c_idx] = max(row[r_idx], col[c_idx]) + 1;
            }

            for(int k=i; k<j; k++){
                int r_idx = p[k][1], c_idx = p[k][2];
                row[r_idx] = max(row[r_idx], dp[r_idx][c_idx]);
                col[c_idx] = max(col[c_idx], dp[r_idx][c_idx]);
            }
            i = j-1;
        }

        int res = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                res = max(res, dp[i][j]);
            }
        }
        return res;

    }
};
