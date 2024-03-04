class Solution {
public:
    int minAreaRect(vector<vector<int>>& points) {
      unordered_map<int, unordered_set<int>> m;
      for(auto point: points){
        m[point[0]].insert(point[1]);
      }

      int res = INT_MAX;
      for(int i=0; i<points.size(); i++){
        for(int j=i; j<points.size(); j++){
          if(points[i][0]==points[j][0] || points[i][1]==points[j][1]) continue;
          if(m[points[i][0]].count(points[j][1]) && m[points[j][0]].count(points[i][1])){
            res = min(res, abs(points[i][0] - points[j][0]) * abs(points[i][1] - points[j][1]));
          }
        }
      }
      return res == INT_MAX ? -1 : res;
    }
};
