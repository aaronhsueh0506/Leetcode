class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size(), start = 0, end = -1;
        int mn = nums[n-1], mx = nums[0];

        for(int i=0; i<n; i++){
            mn = min(mn, nums[n-i-1]);
            mx = max(mx, nums[i]);
            if(mx>nums[i]) end = i; // current nums[i] is less than previous, means not sort
            if(mn<nums[n-i-1]) start = n-i-1; // current nums[n-i-1] is greater than previous, means not sort
        }
        return end-start+1;
    }
};
