
// 2D DP
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

// 1D DP
// Because updating a state for a larger j (number of transactions) relies on the data from i-1 days.
// If j starts from a smaller number, it might be overwritten by the state of i, j, not i-1, j.
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        //  j transactions over the first i days and not holding any stock on the i-th day.
        vector<int> g(3); 

        //  j transactions over the first i days and holding any stock on the i-th day.
        vector<int> l(3); 

        for(int i=1; i<n; i++){
            int diff = prices[i] - prices[i-1];
            for(int j=2; j>=1; j--){
                l[j] = max(g[j-1] + max(diff,0), l[j]+diff);
                g[j] = max(g[j], l[j]);
            }
        }
        return g[2];
    }
};

// 2 transactions
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> leftp(n), rightp(n);
        int minp = prices[0], maxp = prices[n-1];

        // first one transaction before i day
        for(int i=1; i<n; i++){
            leftp[i] = max(leftp[i-1], prices[i] - minp);
            minp = min(minp, prices[i]);
        }

        // second one transaction after i day
        for(int i=n-2; i>=0; i--){
            rightp[i] = max(rightp[i+1], maxp - prices[i]);
            maxp = max(maxp, prices[i]);
        }

        int res = 0;
        // combine
        for(int i=1; i<n; i++){
            res = max(res, leftp[i] + rightp[i]);
        }
        return res;
    }
};
