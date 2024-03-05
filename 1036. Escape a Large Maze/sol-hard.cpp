class Solution {
public:
    vector<vector<int>> dirs{{-1,0},{0,1},{1,0},{0,-1}};
    long N = 1e6;
    bool isEscapePossible(vector<vector<int>>& blocked, vector<int>& source, vector<int>& target) {
      unordered_set<long> visiteds, visitedt;

      for(auto block: blocked){
        visiteds.insert(block[0] * N + block[1]);
        visitedt.insert(block[0] * N + block[1]);
      }

      return BFS(visiteds, source, target, 0) && BFS(visitedt, target, source, 0);
    }

    bool BFS(unordered_set<long>& visited, vector<int> source, vector<int>& target, int step){
      
      if(target==source || step>=20000) return true;
      int x = source[0], y = source[1];
      if(x<0 || y<0 || x>=N || y>=N || visited.count(x*N+y)) return false;
      visited.insert((long)(x*N+y));

      return BFS(visited, {x-1,y}, target, step+1) || 
             BFS(visited, {x,y-1}, target, step+1) || 
             BFS(visited, {x+1,y}, target, step+1) || 
             BFS(visited, {x,y+1}, target, step+1);
    }
};
