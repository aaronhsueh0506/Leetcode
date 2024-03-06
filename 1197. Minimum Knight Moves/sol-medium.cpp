class Solution {
public:
    int minKnightMoves(int x, int y) {
        vector<vector<int>> dirs{{2,1},{1,2},{2,-1},{1,-2},{-2,1},{-1,2},{-2,-1},{-1,-2}};

        queue<pair<int, int>> q;
        q.push({0,0});
        unordered_set<string> visited;
        visited.insert("0_0");

        x = abs(x);
        y = abs(y);

        int step = 0;
        while(!q.empty()){
            int s = q.size();
            while(s--){
                auto t = q.front(); q.pop();
                
                int i = t.first, j = t.second;
                if(i==x && j==y) return step;
                for(auto dir:dirs){
                    int ni = i+dir[0], nj = j+dir[1];
                    string key = to_string(ni) + "_" + to_string(nj);
                    if(!visited.count(key) && ni>=-1 && nj>=-1){
                        visited.insert(key);
                        q.push({ni,nj});
                    }
                }
            }
            step++;
        }
        return -1;
    }
};
