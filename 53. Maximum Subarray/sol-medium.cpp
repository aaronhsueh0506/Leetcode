class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN, newsum=0;

        for(int i=0;i<nums.size();i++){
            newsum = newsum+nums[i];
            if(sum<newsum){
                sum=newsum;
            }
            if(newsum<0) newsum=0;
        }
        return sum;
    }
};
