class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        int n = graph.size();
        int kAns = (1<<n) - 1;
        
        queue<pair<int,int>> q;
        for(int i=0; i<n; i++) q.push({i, 1<<i});

        vector<vector<int>> visited(n, vector<int>(1<<n));

        int res = 0;
        while(!q.empty()){
            int s = q.size();
            while(s--){
                auto t = q.front(); q.pop();
                int node = t.first, state = t.second;
                if(state==kAns) return res;
                if(visited[node][state]) continue;
                visited[node][state] = 1;
                for(auto next: graph[node]){
                    q.push({next, state|(1<<next)});
                }
            }
            res++;
        }
        return res;
    }
};
