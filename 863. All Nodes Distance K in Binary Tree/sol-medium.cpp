class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
      vector<vector<int>> G;
      G = vector<vector<int>>(501);
      buildgraph(G, nullptr, root);

      queue<int> q;
      vector<int> res;
      vector<int> visited(501);
      q.push(target->val);
      visited[target->val] = 1;
      int count = 0;
      
      while(!q.empty() && count<=k){
        int s = q.size();
        while(s--){
          int t = q.front(); q.pop();
          if(count==k) res.push_back(t);
          for(int node: G[t]){
            if(visited[node]) continue;
            visited[node] = 1;
            q.push(node);
          }
        }
        count++;
      }
      return res;
    }

    void buildgraph(vector<vector<int>>& G, TreeNode* parent, TreeNode* child){
      if(parent){
        G[parent->val].push_back(child->val);
        G[child->val].push_back(parent->val);
      }
      if(child->left) buildgraph(G, child, child->left);
      if(child->right) buildgraph(G, child, child->right); 
    }
};
