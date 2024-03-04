class Solution {
public:
    vector<vector<int>> dirs{{-1,0},{0,-1},{1,0},{0,1}};
    void cleanRoom(Robot& robot) {
        unordered_set<string> visited;
        DFS(0, 0, 0, robot, visited);
    }

    void DFS(int x, int y, int dir, Robot& robot, unordered_set<string>& visited){
        robot.clean();

        visited.insert(to_string(x) + "-" + to_string(y));

        for(int i=0; i<4; i++){
            int cur = (i+dir)%4, nx = x + dirs[cur][0], ny = y + dirs[cur][1];
            if(!visited.count(to_string(nx) + "-" + to_string(ny)) && robot.move()){
                DFS(nx, ny, cur, robot, visited);
                
                robot.turnRight();
                robot.turnRight();
                robot.move();
                robot.turnLeft();
                robot.turnLeft();
            }
            robot.turnRight();
        }
    }
};
