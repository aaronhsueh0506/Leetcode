class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int n = nums.size();
        vector<int> l(n), r(n);
        for(int i=1; i<n; i++){
            l[i] = l[i-1] + ((i%2==1)?nums[i-1]:-nums[i-1]);
            r[n-i-1] = r[n-i] + (((n-i-1)%2==1)?nums[n-i]:-nums[n-i]);
        }

        int res = 0;
        for(int i=0; i<n; i++){
            if(l[i]==r[i]) res++;
        }
        return res;
    }
};
