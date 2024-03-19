class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>> graph(n);

        for(auto& flight:flights){
            graph[flight[0]].push_back({flight[1], flight[2]});
        }

        return dijkstra(graph, src, dst, k);
    }

    int dijkstra(vector<vector<pair<int,int>>>& graph, int src, int dst, int k){
        vector<vector<int>> dist(graph.size(), vector<int>(k+2, INT_MAX)); // {dst, stop}
        
        using T = tuple<int, int, int>; //{cost, dst, k}
        priority_queue<T, vector<T>, greater<>> q; // min-heap

        q.push({0, src, k+1});
        dist[src][k+1] = 0;

        while(!q.empty()){
            int s = q.size();
            while(s--){
                auto [cost, u, stop] = q.top(); q.pop();
                if(u == dst) return cost; 
                if(stop == 0) continue;
                for(auto& a: graph[u]){
                    if(cost + a.second < dist[a.first][stop-1]){
                        dist[a.first][stop-1] = cost + a.second;
                        q.push({dist[a.first][stop-1], a.first, stop-1});
                    }
                }
            }
        }
        return -1;
    }
};

// heap for unitl dst using cost and how many flights left
// because min-heap, top must be the minimum cost
// 
