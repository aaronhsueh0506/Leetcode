class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      int sum = 0, res = 0;
      unordered_map<int, int> m{{0,1}}; // {sum, count}

      for(int i=0; i<nums.size();i++){
        sum += nums[i];
        res += m[sum-k];
        m[sum]++;
      }
      return res;
    }
};

// sum(i,j) = sum(0,j) - sum(0,i)
// sum(0,j) - sum(0,i) == k

// sum is m(0,j)
// sum - k = m(0,i) == m(0,j) - k
