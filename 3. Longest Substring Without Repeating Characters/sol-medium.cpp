class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty()) return 0;
        unordered_map<char,int> m;
        int res = 0, left = -1;
        for(int i=0; i<s.size(); i++){
          if(m.count(s[i]) && m[s[i]] > left) left = m[s[i]];
          m[s[i]] = i;
          res = max(res, i - left);
        }
      return res;
    }
};

// everytime update res, if s[i] have seem, update left if m[s[i]] large than left
