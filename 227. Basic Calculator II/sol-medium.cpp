class Solution {
public:
    int calculate(string s) {
      long res=0, cur=0, num=0;
      char op = '+';
      int n = s.size();

      for(int i=0; i<n; i++){
        if(s[i]>='0' && s[i]<'9') num = num*10 + s[i] - '0';
        else{
          if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i]=='/' || i==n-1){
            if(op == '+') cur += num;
            if(op == '-') cur -= num;
            if(op == '*') cur *= num;
            if(op == '/'){
              if (num==0) return -1;
              else cur /= num;
            }
          }

          if(s[i] == '+' || s[i] == '-' || i==n-1){
            res += cur;
            cur = 0;
          }
          op = s[i];
          num = 0;
        }
      }
      return res;
    }
};
