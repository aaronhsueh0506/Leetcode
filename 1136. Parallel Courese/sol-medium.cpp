class Solution {
public:
    int minimumSemesters(int n, vector<vector<int>>& relations) {
      vector<vector<int>> graph(n+1);
      vector<int> indeg(n+1); // number of prev classes for i class

      for(auto a: relations){
        graph[a[0]].push_back(a[1]);
        indeg[a[1]]++;
      }

      queue<int> q;
      for(int i=1; i<=n; i++){
        if(indeg[i]==0) q.push(i);
      }

      int sem = 0, cnt = 0;

      while(!q.empty()){
        int s = q.size();
        cnt += s;
        while(s--){
          int cur = q.front(); q.pop();
          for(int next: graph[cur]){
            if(--indeg[next]==0) q.push(next); 
          }
        }
        sem++;
      }
      return cnt == n ? sem : -1;
    }
};
