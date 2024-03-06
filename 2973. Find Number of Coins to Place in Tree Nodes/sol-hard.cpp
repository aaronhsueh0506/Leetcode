class Solution {
public:
    vector<vector<int>> graph;
    vector<long long> placedCoins(vector<vector<int>>& edges, vector<int>& cost) {
        int n = cost.size();
        graph = vector<vector<int>>(n);
        
        for(auto& edge: edges){
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }

        vector<long long> res(n,1);
        DFS(res, cost, 0, -1);
        return res;
    }

    vector<int> DFS(vector<long long>& res, vector<int>& cost, int cur, int parent){
        vector<int> tmp{cost[cur]};
        for(auto next: graph[cur]){
            if(next==parent) continue;
            auto t = DFS(res, cost, next, cur);
            tmp.insert(tmp.end(), t.begin(), t.end());
        }

        sort(tmp.begin(), tmp.end());

        int n = tmp.size();
        if(n>=3){
            res[cur] = max(0LL, max(1LL*tmp[n-1]*tmp[n-2]*tmp[n-3], 1LL*tmp[0]*tmp[1]*tmp[n-1]));
        }
        if(n>=5){
            tmp = {tmp[0], tmp[1], tmp[n-3], tmp[n-2], tmp[n-1]};
        }
        return tmp;
    }
};
