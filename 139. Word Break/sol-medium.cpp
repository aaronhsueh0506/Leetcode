class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
      int n = s.size();
      vector<bool> dp(n+1);
      unordered_map<char, vector<string>> m;
      for(auto word: wordDict){
        m[word[0]].push_back(word);
      }

      dp[0] = true;

      for(int i=0;i<n;i++){
        if(!dp[i]) continue;
        for(auto element: m[s[i]]){
          if(s.substr(i, element.size()) == element) dp[i+element.size()] = true;
        }
      }
      return dp.back();
    }
};
