class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        if(nums.empty()) return 0;

        int left = 0, right = 0, n=nums.size(), res=INT_MAX;
        while(right<n){
            while(target > 0 && right<n){
                target -= nums[right++];
            }

            while(target<=0){
                res = min(res, right-left);
                target += nums[left++];
            }
        }
        return res==INT_MAX?0:res;
    }
};
