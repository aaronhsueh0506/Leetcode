class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
      vector<vector<int>> res{{}};

      for(int num: nums){
        int s = res.size();
        for(int i=0; i<s; i++){
          vector<int> t = res.front();
          res.erase(res.begin());
          for(int j=0; j<=t.size(); j++){
            vector<int> one = t;
            one.insert(one.begin()+j, num);
            res.push_back(one);
          }
        }
      }
      return res;
    }
};
