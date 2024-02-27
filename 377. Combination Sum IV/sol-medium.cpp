class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target+1, 0);
        dp[0] = 1;

        for(int i=1; i<=target; i++){
          for(int num:nums){
            if(i-num>0) dp[i]+=dp[i-num];
          }
        }
        return dp.back();
    }
};

class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
      int res = 0;
      unordered_map<int, int> m; // {target, combination}
      
      for(int i=0; i<nums.size(); i++){
        if(target >= nums[i])
          res += combinationSum4(nums, target - nums[i]); // find all combination of target
      }
      m[target] = res; // update 'target' number of combination
      return res;
    }
};
