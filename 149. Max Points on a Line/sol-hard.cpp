class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int res = 0;
        //sort(points.begin(), points.end());
        for(int i=0; i<points.size(); i++){
          map<pair<int, int>, int> m; 
          int duplicate = 1;
          for(int j = i+1; j<points.size(); j++){
            if(points[i][0]==points[j][0] && points[i][1]==points[j][1]){
              duplicate++; continue;
            }
            int dx = points[j][0] - points[i][0];
            int dy = points[j][1] - points[i][1];
            int d = gcd(dx, dy);
            ++m[{dx/d, dy/d}];
          }
          res = max(res, duplicate); // same points must in line
          for(auto it = m.begin(); it != m.end(); ++it){
            res = max(res, it->second + duplicate);
          }
        }
      return res;
    }
    int gcd(int a, int b) {
        return (b == 0) ? a : gcd(b, a % b); 
        // dy == 0, d is dx
        // dy < 0, d will be negative
    }
};
