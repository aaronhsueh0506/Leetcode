// 2D DP
class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        //  j transactions over the first i days and not holding any stock on the i-th day.
        vector<vector<int>> g(n, vector<int>(k+1)); 

        //  j transactions over the first i days and holding any stock on the i-th day.
        vector<vector<int>> l(n, vector<int>(k+1)); 

        for(int i=1; i<n; i++){
            int diff = prices[i] - prices[i-1];
            for(int j=1; j<=k; j++){
                l[i][j] = max(g[i-1][j-1] + max(diff,0), l[i-1][j]+diff);
                g[i][j] = max(g[i-1][j], l[i][j]);
            }
        }
        return g[n-1][k];
    }
};

// 1D DP
class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        //  j transactions over the first i days and not holding any stock on the i-th day.
        vector<int> g(k+1); 

        //  j transactions over the first i days and holding any stock on the i-th day.
        vector<int> l(k+1); 

        for(int i=1; i<n; i++){
            int diff = prices[i] - prices[i-1];
            for(int j=k; j>=1; j--){
                l[j] = max(g[j-1] + max(diff,0), l[j]+diff);
                g[j] = max(g[j], l[j]);
            }
        }
        return g[k];
    }
};

