class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> queen(n, string(n, '.'));

        DFS(0, queen, res);
        return res;
    }

    void DFS(int row, vector<string>& queen, vector<vector<string>>& res){
        int n = queen.size();
        if(row == n){
            res.push_back(queen);
            return;
        }
        for(int i=0;i<n;i++){
            if(isvalid(queen, row, i)){
                queen[row][i] = 'Q';
                DFS(row+1, queen, res);
                queen[row][i] = '.';
            }
        }
    }

    bool isvalid(vector<string>& queen, int row, int col){
        for(int i=0; i<row; i++){
            if(queen[i][col]=='Q') return false;
        }
        for(int i=row-1, j=col-1; i>=0 && j>=0; i--,j--){
            if(queen[i][j]=='Q') return false;
        }

        for(int i=row-1, j=col+1; i>=0 && j<queen.size(); i--,j++){
            if(queen[i][j]=='Q') return false;
        }
        return true;
    }
};
