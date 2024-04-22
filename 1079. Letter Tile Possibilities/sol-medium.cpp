class Solution {
public:
    int numTilePossibilities(string tiles) {
        vector<int> count(26);
        for(char c: tiles) count[c-'A']++;
        return helper(count);
    }

    int helper(vector<int>& cnt){
        int res = 0;
        for (int i = 0; i < 26; ++i) {
            if (cnt[i] == 0) continue;
            ++res;
            --cnt[i];
            res += helper(cnt);
            ++cnt[i];
        }
        return res;
    }
};
