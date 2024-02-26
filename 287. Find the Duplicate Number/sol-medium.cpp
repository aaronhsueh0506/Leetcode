// time complexity O(n*logn)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      int left = 1, right = nums.size();
      while(left<right){
        int mid = left + (right-left)/2;
        int cnt = 0;
        for(int num:nums){
          if(num>nums[mid]) cnt++;
        }
        if(cnt <= mid) left = mid+1;
        else right = mid;
      }
      return right;
    }
};

// Linked List Cycle II, Floyd cycle detection
// time complexity O(n)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      int slow = 0, fast = 0;
      while(true){
        slow = nums[slow];
        fast = nums[nums[fast]];
        if(slow==fast) break;
      }
      int res = 0;
      while(true){
        slow = nums[slow];
        res = nums[res];
        if(res == slow) break;
      }
      return res;
    }
};
