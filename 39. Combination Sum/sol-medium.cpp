class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      vector<vector<int>> res;
      vector<int> out;
      DFS(candidates, target, res, out);
      return res;
    }

    void DFS(vector<int>& candidates, int target, vector<vector<int>> &res, vector<int> &out){
      if(target<0) return;
      if(target==0){
        res.push_back(out);
        return;
      }

      for(int i=index; i<candidates.size(); i++){
        out.push_back(candidates[i]);
        DFS(candidates, target-candidates[i], i, res, out);
        out.pop_back();
      }
    }
};
