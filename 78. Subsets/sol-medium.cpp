class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
      vector<vector<int>> res(1);

      for(int num:nums){
        int size = res.size();
        for(int i=0; i<size; i++){
          res.push_back(res[i]);
          res.back().push_back(num);
        }
      }
      return res;
    }
}:

// [] -> [], [] -> [], [1]
// [], [1] -> [], [1], [] -> [], [1], [2]
//         -> [], [1], [2], [1] -> [], [1], [2], [1,2]
