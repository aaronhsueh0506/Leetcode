class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.size() < 2) return 0;
        sort(intervals.begin(), intervals.end());
      
        int res = 0, left = 0;

        for(int i=1; i<intervals.size(); i++){
          if(inervals[i][0] < intervals[left][1]){ // overlap
            res++;
            if(intervals[i][1] < intervals[left][1]) left = i; // keep smaller to remove minimum number
          }
          else{
            left = i;
          }
        }
      return res;
    }
};
