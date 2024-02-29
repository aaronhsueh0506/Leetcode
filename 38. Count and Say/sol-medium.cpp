class Solution {
public:
    string countAndSay(int n) {
      string res = "1";
      for(int i=1; i<n; i++){
        res = revursive(res);
      }
      return res;
    }

    string revursive(string& in){
      string out = "";
      
      for(int i=0; i<in.size(); i++){
        char c = in[i];
        int count = 1;
        while( i+1 < in.size() && in[i+1]==c){
          count++;
          i++;
        }
        out += to_string(count) + c;
      }
      return out;
    }
};
