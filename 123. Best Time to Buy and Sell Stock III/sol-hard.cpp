class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        //  j transactions over the first i days and not holding any stock on the i-th day.
        vector<vector<int>> g(n, vector<int>(3)); 

        //  j transactions over the first i days and holding any stock on the i-th day.
        vector<vector<int>> l(n, vector<int>(3)); 

        for(int i=1; i<n; i++){
            int diff = prices[i] - prices[i-1];
            for(int j=1; j<=2; j++){
                l[i][j] = max(g[i-1][j-1] + max(diff,0), l[i-1][j]+diff);
                g[i][j] = max(g[i-1][j], l[i][j]);
            }
        }
        return g[n-1][2];
    }
};
