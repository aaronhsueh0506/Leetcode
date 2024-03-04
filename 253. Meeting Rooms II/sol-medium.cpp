class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        priority_queue<int, vector<int>, greater<>> pq;
        pq.push(intervals[0][1]);

        int res = 1;
        for(int i=1; i<intervals.size(); i++){
            if(pq.top() <= intervals[i][0]) pq.pop();
            pq.push(intervals[i][1]);
            res = max(res, (int)pq.size());
        }
        return res;
    }
};
