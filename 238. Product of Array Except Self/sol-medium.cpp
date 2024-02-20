class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      int n = nums.size();
      vector<int> L(n,1), R(n,1), res(n);

      for(int i=0; i<n-1; i++){
        L[i+1] = L[i] * nums[i];
        R[n-i-2] = R[n-i-1] * nums[n-i-1];
      }

      for(int i=0; i<n; i++){
        res[i] = L[i] * R[i];
      }
      return res;
    }
};

/*
  0   1  2  3
L     0  01 012
R 123 23 3

*/
