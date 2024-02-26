class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
      // arr is sorted

      int left = 0, right = arr.size()-k;
      while(right>left){
        int mid = left + (right-left)/2;
        if(nums[mid+k] - x > x - nums[mid]) right = mid;
        else left = mid+1;
      }
      return vector<int> (arr.begin()+left, arr.begin()+left+k);
    }
};
