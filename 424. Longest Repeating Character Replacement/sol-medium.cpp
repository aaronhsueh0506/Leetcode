class Solution {
public:
    int characterReplacement(string s, int k) {
      vector<int> count(26);
      int left = 0, max_count = 0;
      int res = 0;
      
      for(int i=0;i<s.size();i++){
        max_count = max(max_count, ++count[s[i] - 'a']);
        if(i - left + 1 - max_count > k){
          --count[s[left]-'a'];
          left++;
        }
        res = max(res, i - left + 1);
      }
      return res;
    }
};
