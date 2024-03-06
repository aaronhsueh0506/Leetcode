class Solution {
public:
    int getFood(vector<vector<char>>& grid) {
        queue<pair<int,int>> q;
        int m = grid.size(), n = grid[0].size();

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]=='*'){
                    q.push({i,j});
                    grid[i][j] = 'X';
                }
            }
        }
        
        int res = 1;
        vector<vector<int>> dirs{{0,-1},{-1,0},{0,1},{1,0}};
        while(!q.empty()){
            int s = q.size();
            while(s--){
                auto t = q.front(); q.pop();
                for(auto dir: dirs){
                    int x = t.first + dir[0], y = t.second + dir[1];
                    if(x>=0 && y>=0 && x<m && y<n && grid[x][y]!='X'){
                        if(grid[x][y]=='#') return res;
                        grid[x][y] = 'X';
                        q.push({x,y});
                    }
                }
            }
            res++;
        }
        return -1;
    }
};
