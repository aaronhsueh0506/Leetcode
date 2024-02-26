class Solution {
public:
    string decodeString(string s) {
      stack<int> s_num;
      stack<string> s_str;
      string res = "";
      int times = 0;

      for(int i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9') times = times * 10 + s[i] - '0';
        else if(s[i] == '['){
          s_num.push(times);
          s_str.push(res);
          times = 0;
          res.clear();
        }
        else if(s[i] == ']'){
          int k = s_num.top(); s_num.pop();
          for(int i=0; i<k; i++) s_str.top() += res;
          res = s_str.top(); s_str.pop();
        }
        else{
          res += s[i];
        }
      }
      return res;
    }
};
