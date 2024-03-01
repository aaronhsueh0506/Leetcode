class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        unordered_map<int, vector<pair<int,int>>> graph;
        for(auto time:times){
          graph[time[0]].push_back({time[1],time[2]});
        }

        vector<int> dist(n+1, INT_MAX);
        dist[k] = 0;

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> q;
        q.push({0,k}); //{dist, node}

        while(!q.empty()){
          int s = q.size();
          while(s--){
            auto t = q.top(); q.pop();
            int cost = t.first, u = t.second;
            if(cost > dist[u]) continue; // visited and larger cost

            for(auto a: graph[u]){
              int v = a.first, w = a.second;
              if(cost + w < dist[v]){
                dist[v] = cost + w;
                q.push({cost+w, v});
              }
            }
          }
        }

      int res = 0; // max_delay
      for(int i=1; i<=n; i++){
        if(dist[i]==INT_MAX) return -1;
        res = max(res, dist[i]);
      }
      return res;
    }
};
