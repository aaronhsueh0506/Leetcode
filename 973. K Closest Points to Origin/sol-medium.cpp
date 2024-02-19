class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
      vector<vector<int>> res;
      priority_queue<pair<int, int>> pq; // {distance, index}, large to small

      for(int i=0; i<points.size(); i++){
        int dis = points[i][0] * points[i][0] + points[i][1] * points[i][1];
        pq.push({dis, i});
        if(pq.size()>k) pq.pop();
      }

      for(int i=0; i<k; i++){
        auto t = pq.top(); pq.pop();
        res.push_back(points[t.second]);
      }
      return res;
    }
};
