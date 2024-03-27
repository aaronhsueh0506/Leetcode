class Solution {
public:
    string addBinary(string a, string b) {
        int m = a.size()-1, n = b.size()-1;
        int carry = 0, tmp;
        string res;

        while(m>=0 || n>=0 || carry>0){
            tmp = carry;
            if(m>=0 && a[m]=='1') tmp++;
            if(n>=0 && b[n]=='1') tmp++;

            if(tmp%2) res += '1';
            else res += '0';

            carry = tmp/2;
            m--;n--;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
