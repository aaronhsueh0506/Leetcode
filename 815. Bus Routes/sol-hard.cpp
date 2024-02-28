class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        if(source == target) return 0;
      
        // hash table for {bus, route}
        unordered_map<int, vector<int>> m;
        unordered_set<int> visited;

        for(int i=0; i<routes.size();i++){
          for(int j: routes[i]){
            m[j].push_back(i);
          }
        }

        queue<int> q;
        q.push(source);
        int res = 1;
        while(!q.empty()){
          int s = q.size();
          while(s--){
            int t = q.front(); q.pop();
            for(int route: m[t]){
              if(visited.count(route)) continue;
              visited.insert(route);
              for(int stop: routes[route]){
                if(stop == target) return res;
                q.push(stop);
              }
            }
          }
          res++;
        }
      return -1;
    }
};
