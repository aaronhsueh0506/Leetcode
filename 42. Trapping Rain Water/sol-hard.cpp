class Solution {
public:
    int trap(vector<int>& height) {
      int res = 0;
      int left = 0, right = height.size()-1;
      int left_m = height[0], right_m = height.back();

      while(right>left){
        if(left_m > right_m){
          right_m = max(right_m, height[right-1]);
          res += right_m - height[right--];
        }
        else{
          left_m = max(left_m, height[left++]);
          res += left_m - height[left++];
        }
      }
      return res;
    }
};
