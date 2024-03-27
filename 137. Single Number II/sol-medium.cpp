class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> count(32);
        int res = 0;
        for(int num: nums){
            for(int i=0; i<32; i++){
                if(num & (1<<i)) count[i]++;
            }
        }

        for(int i=0; i<32; i++){
            if(count[i]%3) res|=(1<<i);
        }
        return res;
    }
};
