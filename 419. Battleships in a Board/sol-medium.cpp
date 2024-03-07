// DFS, O(mn) with O(mn) memory
class Solution {
public:
    int m, n;
    int countBattleships(vector<vector<char>>& board) {
        m = board.size();
        n = board[0].size();
        vector<vector<int>> visited(m, vector<int>(n));

        int res = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(board[i][j]=='X' && !visited[i][j]){
                    int hor = 0, ver = 0;
                    DFS(board, i, j, visited, hor, ver);
                    if(hor==i || ver==j) res++;
                }
            }
        }
        return res;
    }

    void DFS(vector<vector<char>>& board, int i, int j, vector<vector<int>>& visited, int& h, int& v){
        if(i<0 || j<0 || i>=m || j>=n || visited[i][j] || board[i][j]=='.') return;
        h |= i;
        v |= j;
        visited[i][j] = 1;
        DFS(board, i+1, j, visited, h, v);
        DFS(board, i-1, j, visited, h, v);
        DFS(board, i, j+1, visited, h, v);
        DFS(board, i, j-1, visited, h, v);
    }
};

// O(mn) with O(1) memory
class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int res = 0;
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[0].size(); j++){
                if(board[i][j]=='X'){
                    if(i>0 && board[i-1][j]=='X') continue;
                    if(j>0 && board[i][j-1]=='X') continue;
                    res++;
                }
            }
        }
        return res;
    }
};
