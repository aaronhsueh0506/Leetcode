class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
      vector<vector<bool>> rowflag(9, vector<bool>(9));
      vector<vector<bool>> colflag(9, vector<bool>(9));
      vector<vector<bool>> boxflag(9, vector<bool>(9));

      for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
          if(board[i][j]=='.') continue;
          int c = board[i][j] - '1';
          if(row[i][c] || col[c][j] || box[3 * (i/3) + (j/3)][c]) return false;
          row[i][c] = true;
          col[c][j] = true;
          box[3 * (i/3) + (j/3)][c] = true;
        }
      }
      return true;
    }
};
