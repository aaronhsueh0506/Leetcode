class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());

        int last = points[0][1];
        int res = points.size();

        for(int i=1; i<points.size(); i++){
            if(points[i][0]<=last){
                last = min(last, points[i][1]);
                res--;
            }
            else last = points[i][1];
        }
        return res;
    }
};
