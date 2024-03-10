class Solution {
public:
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        vector<vector<int>> graph(n);
        for(auto& edge: edges){
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }

        vector<int> res(n, 0), nodes(n, 1);
        post(0, -1, res, nodes, graph);
        pre(0, -1, res, nodes, graph, n);
        return res;
    }

    void post(int cur, int parent, vector<int>& res, vector<int>& nodes, vector<vector<int>>& graph){
        for(auto& next: graph[cur]){
            if(next==parent) continue;
            post(next, cur, res, nodes, graph);
            nodes[cur] += nodes[next];
            res[cur] += res[next] + nodes[next];
        }
    }

    void pre(int cur, int parent, vector<int>& res, vector<int>& nodes, vector<vector<int>>& graph, int n){
        for(auto& next: graph[cur]){
            if(next==parent) continue;
            res[next] = res[cur] - nodes[next] + (n - nodes[next]);
            pre(next, cur, res, nodes, graph, n);
        }
    }
};
