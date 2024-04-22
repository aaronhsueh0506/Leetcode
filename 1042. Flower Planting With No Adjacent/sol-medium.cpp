class Solution {
public:
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        vector<int> res(n+1);
        unordered_map<int, vector<int>> graph(n+1);
        
        for(auto& p: paths){
            graph[p[0]].push_back(p[1]);
            graph[p[1]].push_back(p[0]);
        }
        
        for(int i=1; i<=n; i++){
            vector<bool> color(5);

            for(int& neighbor: graph[i]){
                if(res[neighbor]!=0){
                    color[res[neighbor]] = true;
                }
            }

            for(int c = 1; c<=4; c++){
                if(!color[c]){
                    res[i] = c;
                    break;
                }
            }
        }
        
        return vector<int>(res.begin()+1, res.end());
    }
};
