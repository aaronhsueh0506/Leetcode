class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
      vector<vector<int>> res;
      if(nums.size() < 4) return res;

      sort(nums.begin(), nums.end());

      for(int i=0; i<nums.size() - 3; i++){
        if(i>0 && nums[i-1] == nums[i]) continue;
        for(int j=i+1; j<nums.size() -2; j++){
          if(j > i+1 && nums[j] == nums[j-1]) continue;
          int left = j+1, right = nums.size()-1;
          long cur_tar = (long)target - nums[i] - nums[j];
          while(left<right){
            if(nums[left] + nums[right] == cur_tar){
              res.push_back({nums[i], nums[j], nums[left], nums[right]});
              while(left < right && nums[left+1] == nums[left]) left++;
              while(left < right && nums[right-1] == nums[right]) right--;
              left++; right--;
            }
            else if(nums[left] + nums[right] < cur_tar) left++;
            else right--;
          }
        }
      }
      return res;
    }
};
