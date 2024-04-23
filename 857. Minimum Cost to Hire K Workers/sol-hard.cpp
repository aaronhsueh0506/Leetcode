class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        double res = DBL_MAX, qsum = 0, n = quality.size();
        
        vector<pair<double, int>> workers;
        priority_queue<int> pq;
        for(int i=0; i<n; i++){
            workers.push_back({double(wage[i]) / quality[i], quality[i]});
        }
        
        sort(workers.begin(), workers.end());
        
        for(auto worker: workers){
            qsum += worker.second;
            pq.push(worker.second);
            
            if(pq.size()>k){
                qsum -= pq.top(); pq.pop();
            }
            if(pq.size()==k){
                res = min(res, qsum * worker.first);
            }
        }
        return res;
    }
};
