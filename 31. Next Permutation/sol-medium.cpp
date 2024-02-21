class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      int i = nums.size()-1;
      while(i>0 && nums[i-1]>=nums[i]) i--;
  
      if(i==0){
        sort(nums.begin(), nums.end());
        return;
      }
      i--;

      int j = num.size()-1;
      while(nums[j] <= nums[i]) j--;
      swap(nums[i], nums[j]);

      sort(nums.begin() + i + 1, nums.end());
      return;
    }
};

// 1 2 3 4 5 -> 1 2 3 5 4 -> (l,r) = (4,5) -> nothing to swap
// 1 2 3 4 6 5 -> 1 2 3 5 4 6 -> (l,r) = (4,5) -> swap(4,5) , sort others
// 1 2 3 4 6 5 4 -> 1 2 3 5 4 4 6 -> (l,r) = (4,5) -> swap(4,5), sort others 

// find swap left & right
// left for preiouse one of first greater than next one
// right for first large than left
// sort index left+1 to end
