class Solution {
public:
    int calculate(string s) {
      long res=0, num=0;
      stack<int> st;
      int sign = 1; // '+'

      for(int i=0; i<s.size();i++){
        if(s[i] >='0' && s[i]<='9') num = num * 10 + s[i] - '0';
        else if(s[i] == '+' || s[i] == '-'){
          res += sign * num;
          num = 0;
          sign = s[i]=='+'?1:-1;
        }
        else if(s[i] == '('){ // create a new equation
          st.push(num);
          st.push(sign);
          num = 0;
          sign = 1;
        }
        else{ // ')', finish the compute in () and do num op ()
          res += sign * num;
          num = 0;
          res *= st.top(); st.pop();
          res += st.top(); st.pop();
        }
      }
      res += sign * num; // end is not ')'
      return res;
    }
};
