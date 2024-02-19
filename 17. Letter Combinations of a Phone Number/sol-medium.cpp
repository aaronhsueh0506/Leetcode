class Solution {
public:
    vector<string> letterCombinations(string digits) {
      if(digits.empty()) return {};

      vector<string> dict{"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
      vector<string> res{""};

      for(char c: digits){
        vector<string> t;
        int index = c - '2';
        for(char s: dict[index]){
          for(string r: res){
            t.push_back(r+s);
          }
        }
        res = t;
      }
      return res;
    }
};
