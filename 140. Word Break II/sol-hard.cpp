class Solution {
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string, vector<string>> m;
        return DFS(s, wordDict, m);
    }

    vector<string> DFS(string s, vector<string>& wordDict, unordered_map<string, vector<string>>& m){
        if(m.count(s)) return m[s];
        if(s.empty()) return {""};
        
        vector<string> res;
        for(string word: wordDict){
            if(s.substr(0, word.size())!=word) continue;
            vector<string> rem = DFS(s.substr(word.size()), wordDict, m); // all combination without word
            for(string str: rem){
                res.push_back(word + (str.empty()?"": " ") + str);
            }
        }
        m[s] = res;
        return res;
    }
};
