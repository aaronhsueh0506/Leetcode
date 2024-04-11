class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = std::accumulate(nums.begin(), nums.end(), 0);

        int curMin = 0, curMax = 0;
        int maxsum = INT_MIN, minsum = INT_MAX;

        for(int& num:nums){
            curMax = max(num, curMax+num);
            curMin = min(num, curMin+num);

            maxsum = max(curMax, maxsum);
            minsum = min(curMin, minsum);
        }

        return total == minsum ? maxsum : max(maxsum, total - minsum); // total-minsum for two subarray from head and end
    }
};
