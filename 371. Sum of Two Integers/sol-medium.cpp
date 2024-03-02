class Solution {
public:
    int getSum(int a, int b) {
        while(b!=0){
            unsigned carry = (unsigned)(a&b);
            a ^= b;
            b = carry << 1;
        }
        return a;
    }
};

// XOR 1,0 or 0,1 to 1

// 10
// 11
//101

// while(b>0){
// carry = (a&b)<<1; // 100
// a ^= b; -> a = 001
// b = carry; b = 100
// }

// (a&b) << 1 // 000
// a^=b // 101
// b = 0
