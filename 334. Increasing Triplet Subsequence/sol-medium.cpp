// time: O(n), space: O(1)
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int smallest = INT_MAX, smaller = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<smallest) smallest = nums[i];
            else if(nums[i]<smaller) smaller = nums[i];
            else{
                return true;
            }
        }
        return false;
    }
};

// time: O(n), space: O(n)
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        vector<int> maxright(n);
        maxright[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--) maxright[i] = max(maxright[i+1], nums[i+1]);

        int minleft = nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]>minleft && nums[i]<maxright[i]) return true;
            minleft = min(minleft, nums[i]);
        }
        return false;
    }
};
