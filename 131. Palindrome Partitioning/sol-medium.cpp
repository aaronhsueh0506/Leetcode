class Solution {
public:
    vector<vector<string>> partition(string s) {
      vector<vector<string>> res;
      vector<string> out;
      DFS(s, 0, res, out);
      return res;
    }

    void DFS(string s, int start, vector<vector<string>> &res, vector<string> &out){
      if(start == s.size()){
        res.push_back(out);
        //return;
      }
      
      for(int i=start; i<s.size(); i++){
        if(!isvalid(s, start, i)) continue;
        out.push_back(s.substr(start, i-start+1));
        DFS(s, i+1, res, out);
        out.pop_back();
      }
    }

    bool isvalid(string s, int start, int end){
      while(end>start){
        if(s[start]!=s[end]) return false;
        start++; end--;
      }
      return true;
    }

};
