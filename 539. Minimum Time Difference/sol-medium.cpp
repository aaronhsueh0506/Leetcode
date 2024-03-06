// O(n)
class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int res=INT_MAX;
        int first=INT_MAX, last=INT_MIN, pre=0;
        vector<bool> mask(1440);

        for(auto time:timePoints){
            int h = stoi(time.substr(0,2)), m = stoi(time.substr(3,2));
            if(mask[h*60+m]) return 0;
            mask[h*60+m] = true;
        }

        for(int i=0;i<1440;i++){
            if(mask[i]){
                if(first!=INT_MAX){
                    res = min(res, i-pre);
                }
                first = min(first, i);
                last = max(last, i);
                pre = i;
            }
        }
        return min(res, 1440+first-last);
    }
};

// O(nlogn)

class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
      int res = INT_MAX;
      vector<int> nums;
      for(auto time:timePoints){
            int h = stoi(time.substr(0,2)), m = stoi(time.substr(3,2));
            nums.push_back(h*60+m);
      }
      sort(nums.begin(), nums.end());
      for(int i=1;i<nums.size();i++){
        res = min(res, nums[i]-nums[i-1]);
      }
      return min(res, nums[0]-nums.back()+1440);
    }
};
