class Solution {
public:
    int divide(int dividend, int divisor) {
      if(dividend==INT_MIN && divisor==-1) return INT_MAX;
      long m = labs(dividend), n = labs(divisor);
      int sign = (dividend<0) ^ (divisor<0); // XOR 

      if(n==1) return (sign==0)?m:-m;
      int res = 0;
      while(m>=n){
        long t = n, p = 1;
        while( m >= (t<<1) ){
          p <<= 1;
          t <<= 1;
        }
        m -= t;
        res += p;
      }
      return (sign==0)? res: -res;
    }
};

// 20, 3
// t: 3 6 12
// p: 1 2 4

// 8, 3
// t: 3 6
// p: 1 2

// 2, 3
