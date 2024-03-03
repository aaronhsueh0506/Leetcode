class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int m = board.size(), n = board[0].size();

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if((i==0 || j==0 || i==m-1 || j==n-1) && board[i][j]=='O') DFS(board, i, j);
            }
        }

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(board[i][j]=='E') board[i][j] = 'O';
                else board[i][j] = 'X';
            }
        }
    }

    void DFS(vector<vector<char>>& board, int x, int y){
        if(x<0 || y<0 || x>=board.size() || y>=board[0].size() || board[x][y]!='O') return;

        board[x][y] = 'E';
        DFS(board, x-1, y);
        DFS(board, x, y-1);
        DFS(board, x+1, y);
        DFS(board, x, y+1);
    }
};
