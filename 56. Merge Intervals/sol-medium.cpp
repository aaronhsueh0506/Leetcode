class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
      if(intervals.size() < 2) return intervals;

      sort(intervals.begin(), intervals.end());
      vector<vector<int>> res;
      res.push_back(intervals[0]);

      for(int i=1;i<intervals.size();i++){
        if(intervals[i][0] > res.back()[1]){
          res.push_back(intervals[i]);
        }
        else{
          res.back()[1] = max(res.back()[1], intervals[i][1]);
        }
      }
      return res;
    }
};
