class Solution {
public:
    vector<vector<int>> dirs{{0,1},{0,-1},{1,0},{-1,0}};
    int swimInWater(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> q; // min-heap
        unordered_set<int> visited;
        q.push({grid[0][0],0});
        visited.insert(0);
        int res = grid[0][0]; // res for water level

        while(!q.empty()){
            auto t = q.top(); q.pop();
            int x = t.second / n, y = t.second % n;
            res = max(res, t.first);
            if(x == m-1 && y == n-1) return res;
            for(auto& dir: dirs){
                int nx = x + dir[0], ny = y + dir[1];
                if(nx>=0 && ny>=0 && nx<m && ny<n && !visited.count(nx*n+ny)){
                    visited.insert(nx*n+ny);
                    q.push({grid[nx][ny], nx*n+ny});
                }
            }
        }
        return res;
    }
};
