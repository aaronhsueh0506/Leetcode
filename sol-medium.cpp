class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        stack<int> st;
        long long res = 0;
        int now, left;
        for(int i=0; i<nums.size(); i++){
            while(!st.empty() && nums[st.top()] <= nums[i]){
                now = st.top(); st.pop();
                left = st.empty()? -1 : st.top();
                res += (long long)nums[now] * (now - left) * (i - now);
            }
            st.push(i);
        }

        while(!st.empty()){
            now = st.top(); st.pop();
            left = st.empty()? -1 : st.top();
            res += (long long)nums[now] * (now - left) * (nums.size() - now);
        }

        for(int i=0; i<nums.size(); i++){
            while(!st.empty() && nums[st.top()] >= nums[i]){
                now = st.top(); st.pop();
                left = st.empty()? -1 : st.top();
                res -= (long long)nums[now] * (now - left) * (i - now);
            }
            st.push(i);
        }
        
        while(!st.empty()){
            now = st.top(); st.pop();
            left = st.empty()? -1 : st.top();
            res -= (long long)nums[now] * (now - left) * (nums.size() - now);
        }
        return res;
    }
};
