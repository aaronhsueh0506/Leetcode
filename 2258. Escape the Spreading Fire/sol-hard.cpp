class Solution {
public:
    vector<vector<int>> dirs{{-1,0},{1,0},{0,-1},{0,1}};
    int maximumMinutes(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();

        queue<pair<int,int>> q;
        vector<vector<int>> firetime(m, vector<int>(n,-1));

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1) q.push({i,j});
            }
        }

        // go through all fire can reach cell
        int time = 0;
        while(!q.empty()){
            int s = q.size();
            while(s--){
                int x = q.front().first, y = q.front().second; q.pop();
                firetime[x][y] = time;
                for(auto dir: dirs){
                    int nx = x + dir[0], ny = y + dir[1];
                    if(nx<0 || ny<0 || nx>=m || ny>=n || grid[nx][ny]!=0) continue;
                    grid[nx][ny] = 1;
                    q.push({nx,ny});
                }
            }
            time++;
        }

        int res=-1;
        bool reach = false;
        queue<vector<int>> Q;
        Q.push({0,0,INT_MAX}); 
        time = 1;

        while(!Q.empty()){
            int s = Q.size();
            while(s--){
                auto t = Q.front(); Q.pop();
                int x = t[0], y = t[1];
                for(auto dir: dirs){
                    int wait_time = t[2];
                    int nx = x + dir[0], ny = y + dir[1];
                    if(nx<0 || ny<0 || nx>=m || ny>=n || firetime[nx][ny]==INT_MAX || grid[nx][ny]==2) continue;
                    if(firetime[nx][ny]!=-1 && firetime[nx][ny] < time) continue;
                    
                    if(nx==m-1 && ny==n-1) {
                      wait_time = min(wait_time, firetime[nx][ny] - time) ;
                      res = max(res, wait_time);
                      reach = true;
                      continue;
                    }
                    else wait_time = min(wait_time, firetime[nx][ny] - time -1);
                    Q.push({nx,ny,wait_time});
                    if(!(nx==m-1 && ny==n-1)) firetime[nx][ny] = INT_MAX;
                }    
            }
            time++;
        }

        return (reach && grid[0][0] == 0)? 1e9: res;
    }
};
