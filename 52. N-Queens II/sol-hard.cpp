class Solution {
public:
    int totalNQueens(int n) {
        int res = 0;
        vector<int> pos(n, -1);
        dfs(pos, 0, res);
        return res;
    }

    void dfs(vector<int>& pos, int row, int& res){
        int n = pos.size();
        if(row==n){
            res++;
            return;
        }

        for(int col=0; col<n; col++){
            if(isvalid(pos, row, col)){
                pos[row] = col;
                dfs(pos, row+1, res);
                pos[row] = -1;
            }
        }
    }

    bool isvalid(vector<int>& pos, int row, int col){
        for(int i=0; i<row; i++){
            if(col==pos[i] || abs(row-i)==abs(col-pos[i])) return false;
        }
        return true;
    }
};

class Solution {
public:
    int totalNQueens(int n) {
        int res = 0;
        vector<bool> cols(n), diag(2*n), anti_diag(2*n);
        dfs(n, 0, cols, diag, anti_diag, res);
        return res;
    }

    void dfs(int n, int row, vector<bool>& cols, vector<bool>& diag, vector<bool>& anti_diag,int& res){
        if(row==n){
            res++;
            return;
        }

        for(int col=0; col<n; col++){
            int idx1 = col - row + n, idx2 = col + row;
            if(cols[col] || diag[idx1] || anti_diag[idx2]) continue;
            cols[col] = diag[idx1] = anti_diag[idx2] = true;
            dfs(n, row+1, cols, diag, anti_diag, res);
            cols[col] = diag[idx1] = anti_diag[idx2] = false;
        }
    }
};
