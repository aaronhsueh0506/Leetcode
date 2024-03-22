class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string res;
        int i = n-1, j = n-1;

        while(j>=0){
            while(j>=0 && s[j]==' ') j--;
            if(j<0) break;
            i = j;
            while(i>=0 && s[i]!=' ') i--;

            if(!res.empty()){
                res += ' ';
            }
            res += s.substr(i+1, j-i);
            j = i;
        }
        return res;
    }
};
