class Solution {
public:
    vector<int> busiestServers(int k, vector<int>& arrival, vector<int>& load) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq; // {end time, index}
        set<int> s;
        vector<int> request(k);

        for(int i=0; i<k; i++) s.insert(i);
        
        int max_req = 0;
        for(int i=0; i<arrival.size(); i++){
            while(!pq.empty() && pq.top().first <= arrival[i]){
                s.insert(pq.top().second); 
                pq.pop();
            }

            if(s.empty()) continue; // drop

            auto it = s.lower_bound(i%k);
            if(it == s.end()) it = s.begin();
            const int idx = *it;

            max_req = max(max_req, ++request[*it]);
            pq.push({arrival[i]+load[i],*it});
            s.erase(it);
        }

        vector<int> res;
        for(int i=0; i<k; i++){
            if(request[i]==max_req) res.push_back(i);
        }
        return res;
    }
};
