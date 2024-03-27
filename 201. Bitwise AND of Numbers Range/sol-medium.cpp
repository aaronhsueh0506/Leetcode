class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        while(right>left){
            right &= right-1;
        }
        return right;
    }
};

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int res = 0;
        for(int i=31; i>=0; i--){
            if((left & (1<<i)) == (right & (1<<i)))
                res |= (left & (1<<i));
            else 
                break;
        }
        return res;
    }
};
