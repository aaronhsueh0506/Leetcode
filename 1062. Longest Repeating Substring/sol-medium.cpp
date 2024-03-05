class Solution {
public:
    int longestRepeatingSubstring(string s) {
        int n = s.size(), res = 0;
        vector<vector<int>> dp(n, vector<int>(n));

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(s[i]==s[j]) {
                    dp[i][j] = i>0? dp[i-1][j-1]+1 : 1;
                    res = max(res, dp[i][j]);
                }
            }
        }
        return res;
    }
};
