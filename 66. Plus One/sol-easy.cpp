class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size()-1;
        digits.back() += 1;

        while(i>=0 && digits[i]>=10){
            digits[i--]%=10;
            
            if(i<0) digits.insert(digits.begin(), 1);
            else digits[i]++;
        }

        return digits;
    }
};
