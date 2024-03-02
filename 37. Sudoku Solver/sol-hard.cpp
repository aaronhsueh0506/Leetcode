class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {   
        row = vector<vector<bool>>(9, vector<bool>(9));
        col = vector<vector<bool>>(9, vector<bool>(9));
        box = vector<vector<bool>>(9, vector<bool>(9));
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j]!='.'){
                    row[i][board[i][j]-'1'] = true;
                    col[j][board[i][j]-'1'] = true;
                    box[3 * (i/3) + j/3][board[i][j]-'1'] = true;
                }
            }
        }

        fill(board, 0, 0);
    }

    bool fill(vector<vector<char>>& board, int x, int y){
        if(x==9) return true;

        // next
        int ny = (y+1) % 9;
        int nx = (ny==0) ? x+1: x;

        if(board[x][y] != '.') return fill(board, nx, ny);

        for(int i=0; i<9; i++){
            if(!row[x][i] && !col[y][i] && !box[3*(x/3)+y/3][i]){
                board[x][y] = i + '1';
                row[x][i] = true;
                col[y][i] = true;
                box[3*(x/3)+y/3][i] = true;
                if(fill(board, nx, ny)) return true;
                board[x][y] = '.';
                row[x][i] = false;
                col[y][i] = false;
                box[3*(x/3)+y/3][i] = false;
            }
        }
        return false;
    }
private:
    vector<vector<bool>> row, col, box;
};
