class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
      int m = heights.size(), n = heights[0].size();
      vector<vector<int>> res;
      vector<vector<bool>> pacific(m, vector<bool>(n));
      vector<vector<bool>> atlantic(m, vector<bool>(n));

      for(int i=0;i<m;i++){
        DFS(heights, pacific, -1, i, 0);
        DFS(heights, atlantic, -1, i, n-1);
      }

      for(int i=0;i<n;i++){
        DFS(heights, pacific, -1, 0, i);
        DFS(heights, atlantic, -1, m-1, i);
      }

      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
          if(pacific[i][j] && atlantic[i][j]) res.push_back({i,j});
        }
      }
      return res;
    }

    void DFS(vector<vector<int>>& heights, vector<vector<bool>>& visited, int pre, int x, int y){
      if(x<0 || x>=heights.size() || y<0 || y>=heights[0].size() || visited[x][y] || heights[x][y]<pre) return;
      visit[x][y] = true;
      DFS(heights, visited, height[x][y], x-1, y);
      DFS(heights, visited, height[x][y], x, y-1);
      DFS(heights, visited, height[x][y], x+1, y);
      DFS(heights, visited, height[x][y], x, y+1);
    }
};
