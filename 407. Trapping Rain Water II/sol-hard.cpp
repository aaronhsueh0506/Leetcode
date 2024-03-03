class Solution {
public:
    int trapRainWater(vector<vector<int>>& heightMap) {
      int m = heightMap.size(), n = heightMap[0].size();
      priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> q;
      vector<vector<bool>> visited(m, vector<bool>(n));
      vector<vector<int>> dirs{{0, -1}, {-1, 0}, {0, 1}, {1, 0}};

      for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
          if(i==0 || j==0 || i==m-1 || j==n-1){
              q.push({heightMap[i][j], {i, j}});
              visited[i][j] = true;
          }
        }
      }

      int res = 0, mx = 0; // mx is sea level
      while(!q.empty()){
        auto t = q.top(); q.pop();
        int h = t.first;
        mx = max(mx, h);
        for(auto dir: dirs){
          int x = t.second.first + dir[0], y = t.second.second + dir[1];
          if(x>=0 && y>=0 && x<m && y<n && !visited[x][y]){
            visited[x][y] = true;
            if(mx > heightMap[x][y]) res += mx - heightMap[x][y];
            q.push({heightMap[x][y], {x, y}});
          }
        }
      }

      return res;
    }
};
