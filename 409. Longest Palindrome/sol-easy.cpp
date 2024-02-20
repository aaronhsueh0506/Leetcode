class Solution {
public:
    int longestPalindrome(string s) {
    // Aa is not acceptable
      vector<int> count(52);

      for(char c: s){
        if(c >= 'A' && c <= 'Z') count[c-'A']++;
        else count[c-'a'+26]++;
      }

      int res = 0;
      for(int i=0;i<52;i++){
        res += count[i];
        if(count[i]%2) res -=1;
      }

      if(res != s.size()) res += 1;
      return res;
    }
};
