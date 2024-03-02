class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        vector<int> res;
        vector<pair<int,int>> v; // {num, index}

        for(int i=0; i<nums.size(); i++){
          for(int num: nums[i]){
            v.push_back({num,i});
          }
        }

        sort(v.begin(), v.end());

        int left=0, cnt = 0;
        int diff = INT_MAX;
        unordered_map<int, int> m;

        for(int right = 0; right < v.size(); right++){
          if(m[v[right].second]++==0) cnt++;
          
          while(cnt==nums.size()){
            if(diff > v[right].first - v[left].first){
              diff = v[right].first - v[left].first;
              res = {v[left].first,  v[right].first};
            }
            if(--m[v[left++].second]==0) cnt--;
          }
        }
      return res;
    }
};
