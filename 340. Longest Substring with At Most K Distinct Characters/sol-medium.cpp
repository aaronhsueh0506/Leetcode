class Solution {
public:
    int lengthOfLongestSubstringKDistinct(string s, int k) {
        int res = 0;
        unordered_map<int, int> m;
        int left = 0;

        for(int i=0; i<s.size(); i++){
            ++m[s[i]];
            if(m.size()>k){
                if(--m[s[left]==0]) m.erase(s[left]);
                left++;
            }
            res = max(res, i - left + 1);
        }
        return res;
    }
};
