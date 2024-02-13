class Solution {
public:
    int myAtoi(string s) {
      int sign = 1, res = 0, n = s.size();
      int i = 0;
      
      while(i<n && s[i]==' ') i++; // ignore lead-space
      if(i<n && s[i] == '+' || s[i] == '-') sign = (s[i]=='+') ? 1 : -1; // change sign if '+' or '-'

      while(i<n && s[i] <= '9' && s[i] >= '0'){
        if(res>INT_MAX/10 || (res==INT_MAX/10 && s[i]-'0' > INT_MAX%10) reutrn (sign==1)?INT_MAX:INT_MIN:
        res = res * 10 + s[i] - '0';
      }

      return res * sign;
    }
}

// 1. ignore lead-space
// 2. check sign if '+' or '-'
// 3. avoid overflow
// 4. return res * sign
