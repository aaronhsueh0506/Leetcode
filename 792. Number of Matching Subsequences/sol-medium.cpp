// Index and binary search 
class Solution {
public:
    unordered_map<string, bool> m;
    unordered_map<char, vector<int>> pos;
    int numMatchingSubseq(string s, vector<string>& words) {
        int res = 0;
        
        for(int i=0; i<s.size(); i++) pos[s[i]].push_back(i);

        for(string word: words){
            res += isMatch(word);
        }
        return res;
    }

    bool isMatch(string word){
        if(m.count(word)) return m[word];

        int prev = -1;
        for(char w: word){
            auto &p = pos[w]; 
            auto it = upper_bound(p.begin(), p.end(), prev);
            if(it==pos[w].end()){
                m[word] = false;
                return false;
            }
            else{
                prev = *it;
            }
        }
        m[word] = true;
        return true;
    }
};

// brute force
class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int res = 0;
        unordered_map<string, bool> m;

        for(string& word: words){
            auto it = m.find(word);
            if(it==m.end()){
                bool match = isMatch(word, s);
                m[word] = match;
                res += match;
            }
            else{
                res += it->second;
            }
        }
        return res;
    }

    bool isMatch(string word, string s){
        int start = 0;
        for(char c: word){
            bool found = false;
            for(int i=start; i<s.size(); i++){
                if(c == s[i]){
                    found = true;
                    start = i+1;
                    break;
                }
            }
            if(!found) return false;   
        }
        return true;
    }
};
