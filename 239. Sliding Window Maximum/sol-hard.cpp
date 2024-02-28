class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        priority_queue<pair<int, int>> q; //{val, index}

        for(int i=0; i<nums.size(); i++){
            while(!q.empty() && i - q.top().second >= k) q.pop(); 
            q.push({nums[i], i});
            if(i >= k-1) res.push_back(q.top().first);
        }
        return res;
    }
};
