class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
      vector<int> visited(numCourses);
      vector<vector<int>> graph(numCourses, vector<int>());

      for(auto a: prerequisites){
        graph[a[1]].push_back(a[0]);
      }

      for(int i=0;i<numCourses;i++){
        if(!DFS(graph, visited, i)) return false;
      }
      return true;
    }

    bool DFS(vector<vector<int>> &graph, vector<int> &visited, int i){
      if(visited[i]==1) return true;
      if(visited[i]==-1) return false;
      visited[i] = -1;
      for(auto a: graph[i]){
        if(!DFS(graph, visited, a)) return false;
      }
      visited[i]=1;
      return true;
    }
};
