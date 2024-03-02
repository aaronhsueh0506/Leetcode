class Solution {
public:
    int longestSubstring(string s, int k) {
        vector<int> count(26);
        for(char c: s) count[c - 'a']++;

        int left = 0, res = 0;
        bool flag = true; // check all char in s are satisfy >= k

        for(int i=0; i<s.size(); i++){
            if(count[s[i]-'a']<k){
                flag = false;
                if(i>left) res = max(res, longestSubstring(s.substr(left, i-1),k));
                left = i+1;
            }
        }
        return flag? s.size() : max(res, longestSubstring(s.substr(start, s.size()-n),k));
    }
};
