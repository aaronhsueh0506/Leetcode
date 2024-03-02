class Solution {
public:
    int singleNumber(vector<int>& nums) {
      int res = 0;
      
      for(int num:nums){
        res ^= num;
      }
      return res;
    }
};

// XOR (0,0) and (1,1) are false, (0,1) and (1, 0) are true;
