class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
      if(n==1) return {0};
      vector<int> res;
      vector<unordered_set<int>> graph(n);
      queue<int> q;

      for(auto edge:edges){
        graph[edge[0]].insert(edge[1]);
        graph[edge[1]].insert(edge[0]);
      }

      for(int i=0; i<n; i++){
        if(graph[i].size() == 1) q.push(i);
      }

      while(n>2){
        int s = q.size(); 
        n -= s;
        while(s--){
          int t = q.front(); q.pop();
          for(auto a: graph[t]){
            graph[a].erase(t);
            if(graph[a].size()==1) q.push(a);
          }
        }
      }

      while(!q.empty()){
        res.push_back(q.front());
        q.pop();
      }

      return res;
    }
};
