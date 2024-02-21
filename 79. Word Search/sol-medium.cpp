class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
      int m = board.size(), n = board[0].size();
      vector<vector<bool>> visited(m, vector<int>(n));
      for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
          if(DFS(board, word, visited, 0, i, j)) return true;
        }
      }
      return false;
    }

    bool DFS(vector<vector<char>>& board, string word, vector<vector<bool>> &visited, int idx, int x, int y){
      if(idx == word.size()) return true;
      if(x<0 || y<0 || x>=board.size() || y>=board[0].size() || visit[x][y] || board[x][y]!=word[idx]) return false;
      visited[x][y] = true;
      bool res = DFS(board, word, visited, idx+1, x-1, y) || 
                 DFS(board, word, visited, idx+1, x, y-1) || 
                 DFS(board, word, visited, idx+1, x+1, y) || 
                 DFS(board, word, visited, idx+1, x, y+1);
      visited[x][y] = false;
      return res;
    }
};
