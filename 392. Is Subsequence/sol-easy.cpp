class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m = s.size(), n = t.size();
        if(n<m) return false;
        if(s.empty()) return true;
        
        for(int i=0; i<n; i++){
            if(t[i]==s[0]) return isSubsequence(s.substr(1), t.substr(i+1));
        }
        return false;
    }
};
