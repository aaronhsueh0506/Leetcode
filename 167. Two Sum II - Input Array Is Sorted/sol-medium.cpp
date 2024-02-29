class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int left = 0, right = numbers.size()-1;
        while(right>left){
          if(numbers[left]+numbers[right]==target){
            res.push_back(left+1);
            res.push_back(right+1);
            return res;
          }
          else if(numbers[left]+numbers[right]<target) left++;
          else right--;
        }
      return res;
    }
};
