class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      int res = 0;
      unordered_set<int> s(nums.begin(), nums.end());

      for(int num:nums){
        if(!s.count(num)) continue;
        s.erase(num);
        int pre = num-1, next = num+1;
        while(s.count(pre)) s.erase(pre--);
        while(s.count(next)) s.erase(next++);
        res = max(res, next - pre - 1);
      }
      return res;
    }
};
