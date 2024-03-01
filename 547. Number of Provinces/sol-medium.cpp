class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> root(n);
        for(int i=0; i<n; i++) root[i] = i;

        int res = n;
        for(int i=0; i<n; i++){
          for(int j=0; j<n; j++){
            if(isConnected[i][j] && i!=j){
              int rooti = find(root, i);
              int rootj = find(root, j);
              if(rooti != rootj){
                res--;
                root[rootj] = rooti;
              }
            }
          }
        }
      return res;
        
    }

    int find(vector<int>& root, int i){
      return root[i] == i ? i : find(root, root[i]);
    }
};
