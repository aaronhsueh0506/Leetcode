class Solution {
public:
    int minOperations(int n) {
        int res = 0;
        while(n){
            if((n&3)==3){
                n++;
                res++;
            }
            else if((n&1) == 1){
                n--;
                res++;
            }
            n >>= 1;
        }
        return res;
    }
};
