class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
      vector<int> res;
      vector<int> visited(numCourses);
      vector<vector<int>> graph(numCourses, vector<int>());

      for(auto a: prerequisites){
        graph[a[0]].push_back(a[1]);
      }

      for(int i=0; i<numCourses; i++){
        if(visited[i]!=1 && !DFS(graph, visited, i, res)) return {};
      }

      return res;
    }

    bool DFS(vector<vector<int>>& graph, vector<int>& visited, int i, vector<int>& res){
      if(visited[i]==1) return true;
      if(visited[i]==-1) return false;
      visited[i] = -1;
      for(int a: graph[i]){
        if(!DFS(graph, visited, a, res)) return false;
      }
      visited[i] = 1;
      res.push_back(i);
      return true;
    }
};
