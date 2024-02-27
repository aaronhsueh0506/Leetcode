class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), comp);
        if(nums[0]==0) return "0";

        string res = "";
        for(int num:nums){
         res += to_string(num); 
        }
      return res;
    }

    static bool comp(int& l1, int& l2){
      string s1 = to_string(l1);
      string s2 = to_string(l2);
      return (s1+s2)>(s2+s1);
    }
};
