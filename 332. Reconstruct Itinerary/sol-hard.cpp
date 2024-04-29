class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        unordered_map<string, multiset<string>> graph;
        for(auto& ticket: tickets) graph[ticket[0]].insert(ticket[1]);
        
        vector<string> res;
        dfs("JFK", graph, res);

        return vector<string>(res.rbegin(), res.rend());
    }

    void dfs(string u, unordered_map<string, multiset<string>>& graph, vector<string>& res){
        while(graph[u].size()){
            string v = *graph[u].begin();
            graph[u].erase(graph[u].begin());
            dfs(v, graph, res);
        }
        res.push_back(u);
    }
};
