class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        recursive(n, n, "", res);
        return res;
    }

    void recursive(int left, int right, string out, vector<string>& res){
      if(left>right) return;
      
      if(left == 0 && right == 0) res.push_back(out);
    
      if(left>0) recursive(left-1, right, out + "(", res);
      if(right>0) recursive(left, right-1, out + ")", res);
      
    }
};
