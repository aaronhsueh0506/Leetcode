class Solution {
public:
    int maxSubarrayLength(vector<int>& nums) {
        stack<int> st;
        // stack put the left side
        for(int i=0; i<nums.size();i++){
            if(st.empty() || nums[st.top()]<nums[i]){
                st.push(i);
            }
        }

        int res = 0;
        // i for right size, if left>i, means satifiy.
        // pop stack until left<i, and i--
        for(int i=nums.size()-1; i>=0; i--){
            while(!st.empty() && nums[i]<nums[st.top()]){
                res = max(res, i - st.top() + 1);
                st.pop();
            }
        }
        return res;
    }
};
