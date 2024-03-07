class Solution {
public:
    vector<vector<int>> dirs{{0,-1},{0,1},{-1,0},{1,0}};
    int shortestPath(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size();
        queue<vector<int>> q;
        q.push({0,0,0});
        vector<vector<int>> visited(m, vector<int>(n,INT_MAX));
        visited[0][0] = 0;

        int step = 0;
        while(!q.empty()){
            int s = q.size();
            while(s--){
                auto t = q.front(); q.pop();
                int x = t[0], y = t[1], z = t[2];
                if(x == m-1 && y == n-1) return step;
                for(auto dir:dirs){
                    int nx = x + dir[0], ny = y + dir[1];
                    if(nx>=0 && ny>=0 && nx<m && ny<n){
                        int r = z + grid[nx][ny];
                        if(r>k || r>=visited[nx][ny]) continue;
                        q.push({nx,ny,r});
                        visited[nx][ny]=r;
                    }
                }
            }
            step++;
        }
        return -1;
    }
};
