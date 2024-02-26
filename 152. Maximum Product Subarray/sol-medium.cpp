class Solution {
public:
    int maxProduct(vector<int>& nums) {
      int _max = nums[0], _min = nums[0];
      int res = nums[0];

      for(int i=1; i<nums.size();i++){
        int temp_max = _max, temp_min = _min;
        _max = max(nums[i], max(nums[i] * temp_max, nums[i] * temp_min));
        _min = min(nums[i], min(nums[i] * temp_max, nums[i] * temp_min));
        res = max(res, _max);
      }
      return res;
    }
};
