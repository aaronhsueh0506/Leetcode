class Solution {
public:
    int visibleMountains(vector<vector<int>>& peaks) {
        int n = peaks.size();

        vector<pair<int, int>> intervals;
        for (auto &p: peaks) intervals.push_back({p[0] - p[1], -(p[0] + p[1])});
        sort(intervals.begin(), intervals.end());

        int i=0, res=0;
        while(i<intervals.size()){
            if(i==n-1 || intervals[i].first < intervals[i+1].first 
                      || (intervals[i].first == intervals[i+1].first && -intervals[i].second > -intervals[i+1].second))
                res++;
            
            int next = i+1;
            while(next<n && -intervals[next].second <= -intervals[i].second) ++next; // inside or lies
            i = next;
        }
        return res;
    }
};
