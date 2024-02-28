// heap O(nlogn)
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

// dequeue O(n)
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        deque<int> q;

        for(int i=0; i<nums.size(); i++){
            if(!q.empty() && q.front() == i-k) q.pop_front();
            while(!q.empty() && nums[q.back()] < nums[i]) q.pop_back(); // previous less than i can remove, because the max must be i
            q.push_back(i);
            if(i >= k-1) res.push_back(nums[q.front()]);
        }
        return res;
    }
};
