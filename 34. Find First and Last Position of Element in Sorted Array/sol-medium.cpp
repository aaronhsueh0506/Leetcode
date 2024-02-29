class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
      vector<int> res(2,-1);
      int left = 0, right = nums.size();
      while(right>left){
        int mid = left + (right - left) / 2;
        if(nums[mid]<target) left = mid+1;
        else right = mid;
      }
      if(right==nums.size() || nums[right]!=target) return res;
      res[0] = right;

      left = 0, right = nums.size();
      while(right>left){
        int mid = left + (right - left) / 2;
        if(nums[mid]<=target) left = mid+1;
        else right = mid;
      }
      res[1] = left - 1;
      return res;
    }
};
