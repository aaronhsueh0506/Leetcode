class Solution {
public:
    int maxArea(vector<int>& height) {
      int left = 0, right = height.size()-1;
      int res = 0;
      while(right>left){
        res = max(res, min(height[left], height[right]) * (right-left));
        if(height[left]>height[right]) right--;
        else left++;
      }
      return res;
    }
};
