class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size();
        int res = 0;

        queue<int> q;
        q.push(1);
        vector<bool> visited(n*n+1);

        while(!q.empty()){
            int s = q.size();
            while(s--){
                int t = q.front(); q.pop();
                if(t == n*n) return res;
                for(int i=1; i<=6; i++){
                    if(t+i>n*n) continue;
                    int next = getboardvalue(board, t+i);
                    if(next==-1) next = t+i;
                    if(visited[next]) continue;
                    visited[next] = true;
                    q.push(next);
                }
            }
            res++;
        }
        return -1;
    }

    int getboardvalue(vector<vector<int>>& board, int num){
        int n = board.size();
        int x = (num-1) / n, y = (num-1)%n;
        if(x%2==1) y = n - 1 - y;
        x = n - 1 - x;
        return board[x][y];
    }
};
