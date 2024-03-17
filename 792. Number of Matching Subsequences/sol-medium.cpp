// Index and binary search 
// Time complexity is O(n + m * k * logn) // n for length of s, m for number of words, and k for the longest word
// Spaec complexity is O(m)
class Solution {
public:
    unordered_map<string, bool> m;
    
    int numMatchingSubseq(string s, vector<string>& words) {
        int res = 0;
        vector<vector<int>> pos(26);
        
        for(int i=0; i<s.size(); i++) pos[s[i]-'a'].push_back(i);

        for(string& word: words){
            res += isMatch(word, pos);
        }
        return res;
    }

    bool isMatch(string& word, vector<vector<int>>& pos){
        if(m.count(word)) return m[word];

        int prev = -1;
        for(char w: word){
            auto &p = pos[w-'a']; 
            auto it = upper_bound(p.begin(), p.end(), prev);
            if(it==pos[w-'a'].end()){
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
// Time complexity is O(m * k * n) // n for length of s, m for number of words, and k for the longest word
// Spaec complexity is O(m)
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
