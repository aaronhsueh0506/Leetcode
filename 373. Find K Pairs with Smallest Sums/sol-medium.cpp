class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> res;

        auto comp = [&nums1, &nums2](const pair<int,int>&a, const pair<int,int>&b){
            return nums1[a.first]+nums2[a.second] > nums1[b.first]+nums2[b.second];
        };

        priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(comp)> pq(comp);

        for(int i=0; i< min(k, (int)nums1.size()); i++) pq.push({i,0});

        while(res.size()<k && !pq.empty()){
            auto [idx1, idx2] = pq.top(); pq.pop();

            res.push_back({nums1[idx1], nums2[idx2]});

            if(idx2+1<nums2.size()) pq.push({idx1, idx2+1});
        }
        return res;
    }
};
