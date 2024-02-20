class Solution {
public:
    int search(vector<int>& nums, int target) {
      int left = 0, right = nums.size()-1;
      while(right>left){
        int mid = left + (right-left)/2;
        if(nums[mid] == target) return mid;
        else if(nums[mid] > nums[right]){
          if(nums[mid] < target && nums[right] >= target) left = mid+1;
          else right = mid;
        }
        else{
          if(nums[mid] > target && nums[left] <= target) right = mid;
          else left = mid+1;
        }
      }
      return nums[left]==target? left: -1;
    }
};
