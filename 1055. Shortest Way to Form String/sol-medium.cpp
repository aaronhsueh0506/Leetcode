class Solution {
public:
    int shortestWay(string source, string target) {
        int res = 0, j = 0, m = source.size(), n = target.size();

        while(j<n){
            int pre = j;
            for(int i=0; i<m; i++){
                if(j<n && source[i]==target[j]) j++;
            }
            if(j==pre) return -1; // all char not in source
            ++res;
        }
        return res;
    }
};
