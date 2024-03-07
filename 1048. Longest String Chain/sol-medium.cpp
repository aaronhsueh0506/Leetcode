class Solution {
public:
    int longestStrChain(vector<string>& words) {
        int n = words.size();
        unordered_map<string, int> dp;
        sort(words.begin(), words.end(), cmp);

        int res = 1;
        for(string word: words){
            if(!dp[word]) dp[word] = 1;
            for(int i=0; i<word.size(); i++){
                string pre = word.substr(0,i) + word.substr(i+1);
                if(dp.count(pre)){
                    dp[word] = max(dp[word], dp[pre]+1);
                    res = max(res, dp[word]);
                }
            }
        }
        return res;
    }

    static bool cmp(string& l1, string& l2){
        return l1.size()<l2.size();
    }
};
