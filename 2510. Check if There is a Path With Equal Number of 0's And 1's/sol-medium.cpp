class Solution {
public:
    int m, n;
    unordered_map<string, bool> dp;
    bool isThereAPath(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        if((m+n)%2==0) return false;

        return helper(grid, 0, 0, 0);
    }

    bool helper(vector<vector<int>>& grid, int row, int col, int sum){
        if(row>=m || col>=n) return false;

        string key = to_string(row) + "," + to_string(col) + "," + to_string(sum);
        if(dp.count(key)) return dp[key];

        sum+= grid[row][col] == 1 ? 1 : -1;
        if(row == m-1 && col == n-1) return sum==0;
        dp[key]=helper(grid, row+1, col, sum) || helper(grid, row, col+1, sum);
        return dp[key];
    }
};
