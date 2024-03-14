class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int i=0, j=0;
        int m = word.size(), n = abbr.size();
        int num = 0;

        while(j<n && i<m){
            if(abbr[j]>='0' && abbr[j]<='9'){
                if(abbr[j]=='0' && num==0) return false;
                num = num*10 + abbr[j] - '0';
            }
            else{
                if(num>0){
                    i+=num;
                    num = 0;
                }
                if(abbr[j]!=word[i]) return false;
                i++;
            }
            j++;
        }
        i+=num;
        return (i==m && j==n) ? true : false;
    }
};
