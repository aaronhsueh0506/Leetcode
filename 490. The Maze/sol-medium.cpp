// for each cell, the complexity is 4, so total is O(mn * 4)
// DFS
class Solution {
public:
    vector<vector<int>> dirs{{0,-1},{0,1},{-1,0},{1,0}};
    int m, n;
    bool hasPath(vector<vector<int>>& maze, vector<int>& start, vector<int>& destination) {
        m = maze.size(), n = maze[0].size();
        return DFS(maze, start[0], start[1], destination[0], destination[1]);
    }

    bool DFS(vector<vector<int>>& maze, int x, int y, int dx, int dy){
        if(x==dx && y==dy) return true;
        maze[x][y]=-1;
        bool res=false;
        for(auto dir: dirs){
            int nx = x, ny = y;
            while(nx>=0 && ny>=0 && nx<m && ny<n && maze[nx][ny]!=1){ // find the first invaild position
                nx+=dir[0]; ny+=dir[1];
            }
            nx -= dir[0]; ny-=dir[1]; // back to valid position
            if(maze[nx][ny]!=-1) res |= DFS(maze, nx, ny, dx, dy);
        }
        return res;
    }
};

// BFS
class Solution {
public:
    vector<vector<int>> dirs{{0,-1},{0,1},{-1,0},{1,0}};
    int m, n;
    bool hasPath(vector<vector<int>>& maze, vector<int>& start, vector<int>& destination) {
        m = maze.size(), n = maze[0].size();
        queue<pair<int,int>> q;
        q.push({start[0], start[1]});
        vector<vector<bool>> visited(m, vector<bool>(n));

        while(!q.empty()){
            auto t = q.front(); q.pop();
            if(t.first == destination[0] && t.second == destination[1]) return true;
            for(auto dir: dirs){
                int nx = t.first, ny = t.second;
                while(nx>=0 && ny>=0 && nx<m && ny<n && maze[nx][ny]!=1){
                    nx += dir[0]; ny+= dir[1];
                }
                nx-=dir[0]; ny-=dir[1];
                if(visited[nx][ny]) continue;
                visited[nx][ny]=true;
                q.push({nx,ny});
            }
        }
        return false;
    }
};
