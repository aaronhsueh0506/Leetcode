class Solution {
public:
    int trailingZeroes(int n) {
        int res = 0;
        while(n){
            n /= 5;
            res += n;
        }
        return res;
    }
};

// 5 10
// 15 20
// 25 (5^2)
// 30 35 .... 50 (2*5^2)
//... 75 (3*5^2)
