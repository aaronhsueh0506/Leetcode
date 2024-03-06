class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        long long res = 0;
        int last = nums.back();
        int k;

        for(int i=nums.size()-2; i>=0;i--){
            if(nums[i]>last){
                k = nums[i] / last + (nums[i]%last);
                last = nums[i] / k;
                res += k -1; // number of operations need to minus 1.
            }   
            else{
                last = nums[i];
            }
        }
        return res;
    }
};
