class Solution {
public:
    int lengthOfLastWord(string s) {
        int right = s.size()-1;
        while(right>=0 && s[right]==' ') right--;

        int res = 0;
        while(right>=0 && s[right]!=' '){
            res++; right--;
        }
        return res;
    }
};
