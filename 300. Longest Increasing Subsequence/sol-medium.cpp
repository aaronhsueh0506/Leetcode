// O(n^2)
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
      vector<int> dp(nums.size(),1);
      int res = 1;

      for(int i=0; i<nums.size(); i++){
        for(int j=0; j<i; j++){
          if(nums[i] > nums[j]){
            dp[i] = max(dp[i], dp[j]+1);
            res = max(res, dp[i]);
          }
        }
      }
      return res;
    }
};

// O(nlogn)
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
      vector<int> dp;

      for(int i=0; i<nums.size(); i++){
        int left = 0, right = dp.size();
        while(left<right){
          int mid = left + (right-left)/2;
          if(dp[mid]<nums[i]) left= mid+1;
          else right = mid;
        }
        if(right == dp.size()) dp.push_back(nums[i]);
        else dp[right] = nums[i];
      }
      return dp.size();
    }
};
