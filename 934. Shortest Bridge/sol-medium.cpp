class Solution {
public:
    int shortestBridge(vector<vector<int>>& grid) {
        int n = grid.size();

        queue<pair<int,int>> q;
        int found = false;
        for(int i=0; i<n && !found; i++){
            for(int j=0; j<n && !found; j++){
                if(grid[i][j]==1){
                    DFS(grid, i, j, q);
                    found = true;
                }
            }
        }

        vector<vector<int>> dirs{{-1,0},{1,0},{0,-1},{0,1}};
        int res = 0;
        while(!q.empty()){
            int s = q.size();
            while(s--){
                auto t = q.front(); q.pop();
                for(auto dir:dirs){
                    int x = t.first + dir[0], y = t.second+dir[1];
                    if(x<0 || y<0 || x>=n || y>=n || grid[x][y]==2) continue;
                    if(grid[x][y]==1) return res;
                    
                    q.push({x, y});
                    grid[x][y] = 2;
                }
            }
            res++;
        }
        return res;
    }

    void DFS(vector<vector<int>>& grid, int i, int j, queue<pair<int,int>>& q){
        if(i<0 || j<0 || i>=grid.size() || j>=grid.size() || grid[i][j]!=1) return;
        grid[i][j] = 2;
        q.push({i,j});

        DFS(grid, i-1, j, q);
        DFS(grid, i, j-1, q);
        DFS(grid, i+1, j, q);
        DFS(grid, i, j+1, q);
    }
};
