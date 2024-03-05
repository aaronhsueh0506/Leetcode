class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        int n = tasks.size();
        for(int i=0;i<tasks.size();i++){
            tasks[i].push_back(i);
        }

        sort(tasks.begin(), tasks.end());
      
        vector<int> res;
        priority_queue<pair<int,int>> pq;
        int i=0;
        long t = 0;

        while(res.size()!=n){
            while(i<n && pq.empty() && tasks[i][0]>t){ //idle, update t
                t = tasks[i][0];
            }

            while(i<n && tasks[i][0]<=t){ // start time < t, accroding to processing time & index put in
                pq.push({-tasks[i][1],-tasks[i][2]});
                i++;
            }

            t -= pq.top().first;
            res.push_back(-pq.top().second);
            pq.pop();
        }
        return res;
    }
};
