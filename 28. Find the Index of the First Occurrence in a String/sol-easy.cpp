class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size() < needle.size()) return -1;

        int n = needle.size();
        for(int i=0; i<=haystack.size()-n; i++){
            if(haystack[i]==needle[0]){
                if(haystack.substr(i,n) == needle) return i;
            }
        }
        return -1;
    }
};
