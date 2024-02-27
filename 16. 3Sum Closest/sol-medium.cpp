class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int res = nums[0]+nums[1]+nums[2];
        int diff = abs(res-target);

        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size()-2;i++){
          int left = i+1, right=nums.size()-1;
          while(left<right){
            int sum = nums[i] + nums[left] + nums[right];
            if(abs(target - sum) < diff){
              diff = abs(target - sum);
              res = sum;
            } 
            if(sum == target) return target;
            else if(sum>target) right--;
            else left++;
          }
        }
      return res;
    }
};
