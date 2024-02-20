class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      if(str.empty()) return "";
      if(str.size()==1) return strs[0];

      string prefix = strs[0];
      for(int i=1; i<strs.size();i++){
        if(strs[i].empty()) return "";
        string s = strs[i];
        prefix = prefix.substr(0, min(prefix.size(), s.size());

        for(int j=0; j<prefix.size(); j++){
          if(prefix[j] != s[j]){
            prefix = prefix.substr(0, j);
            break;
          }
        }
      }
      return prefix;
    }
};
