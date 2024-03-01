
// Union find, O(n)
class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
      vector<int> root(1001); // 3 <= n == edges.length <= 1000
      for(int i=0;i<1000;i++) root[i] = i;

      for(auto edge: edges){
        int rx = find(root, edge[0]), ry = find(root, edge[1]);
        if(rx == ry) return edge;
        root[ry] = rx;
      }

      return {};
    }

    int find(vector<int>& root, int i){
      return root[i] == i ? i : find(root, root[i]);
    }
};

// DFS
class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
      unordered_map<int, unordered_set<int>> graph;
      for(auto edge: edges){
        if(DFS(graph, edge[0], edge[1], -1)) return edge;

        graph[edge[0]].insert(edge[1]);
        graph[edge[1]].insert(edge[0]);
      }
      return {};
    }

    bool DFS(unordered_map<int, unordered_set<int>>& graph, int cur, int target, int pre){
      if(graph[cur].count(target)) return true; // cur connect to target directly
      for(int next: graph[cur]){
        if( next == pre) continue; // undirected graph 1->2, 2->1 in same time
        if( DFS(graph, next, target, cur) ) return true; // cur connect to target cross some nodes
      }
      return false;
    }
};
