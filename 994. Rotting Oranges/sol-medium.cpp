class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
      int m = grid.size(), n = grid[0].size();
      int fresh = 0, time = 0;
      queue<pair<int,int>> q;
      
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
          if(grid[i][j]==1) fresh++;
          else if(grid[i][j]==2) q.push({i,j});
        }
      }

      while(!q.empty() && fresh>0){
        int s = q.size();
        while(s--){
          auto cur = q.front(); q.pop();
          spread(grid, cur.first-1, cur.second, fresh, q);
          spread(grid, cur.first, cur.second-1, fresh, q);
          spread(grid, cur.first+1, cur.second, fresh, q);
          spread(grid, cur.first, cur.second+1, fresh, q);
        }
        time++;
      }
      return fresh>0?-1:time;
    }

    void spread(vector<vector<int>>& grid, int x, int y, int& fresh, queue<pair<int,int>>& q){
      if(x<0 || x>=grid.size() || y<0 || y>=grid[0].size() || grid[x][y]!=1) return;
      grid[x][y]=2;
      fresh--;
      q.push({x,y});
    }
};
