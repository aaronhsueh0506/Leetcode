class Solution {
public:
    int minDifference(vector<int>& nums) {
        if(nums.size()<=4) return 0;

        sort(nums.begin(),nums.end());
        int n = nums.size(), res=INT_MAX;
        for(int i=0;i<4;i++){
            res = min(res, nums[n-1-i] - nums[3-i]);
        }
        return res;
    }
};
