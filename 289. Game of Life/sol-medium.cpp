class Solution {
public:
    int m, n;
    void gameOfLife(vector<vector<int>>& board) {
        m = board.size();
        n = board[0].size();
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                search8dirs(board, i, j);
            }
        }

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                board[i][j] >>= 1;
            }
        }
    }

    void search8dirs(vector<vector<int>>& board, int x, int y){
        int count = 0; // live count;
        
        for(int i=-1; i<=1; i++){
            for(int j=-1; j<=1; j++){
                if((i==0 && j==0) || x+i<0 || x+i>=m || y+j<0 || y+j>=n) continue;
                if(board[x+i][y+j] & 1) count++;
            }
        }
        if(board[x][y] && (count==2 || count==3)) board[x][y] |= 2;
        if(!board[x][y] && count==3) board[x][y]|= 2;
    }
};

// for live
// 1. fewer than two live neighbors dies -> under
// 2. two or three live neighbors -> next
// 3. more than three live neighbors dies -> over

// for dead
// three live neighbors becomes a live cell -> reproduct
