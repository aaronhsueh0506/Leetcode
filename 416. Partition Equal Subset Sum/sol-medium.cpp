class Solution {
public:
    bool canPartition(vector<int>& nums) {
      int sum = std::accumulate(nums.begin(), nums.end());
      if(sum%2) return false;

      vector<bool> dp(sum+1);
      dp[0] = true;

      for(int num:nums){
        for(int i = sum; i>=0; i--){
          if(dp[i]) dp[i+num] = true;
        }
        if(sum/2) return true;
      }
      return false;
    }
};
