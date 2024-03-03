// DFS
class WordDictionary {
public:
    WordDictionary() {
        
    }
    
    void addWord(string word) {
        s.insert(word);
        m[word.size()].insert(word);
    }
    
    bool search(string word) {
        if(word.find('.')==string::npos) return s.count(word);

        for(string w: m[word.size()]){
            if(match(w, word)) return true;
        }
        return false;
    }

    bool match(string& s, string& p){
        for(int i=0; i<s.size(); i++){
            if(p[i]=='.') continue;
            else if(s[i]!=p[i]) return false;
        }
        return true;
    }
private:
    unordered_map<int, unordered_set<string>> m;
    unordered_set<string> s;
};

// Trie
class WordDictionary {
public:
    struct TrieNode{
        TrieNode* child[26];
        bool isword;

        TrieNode(): isword(false){
            for(auto& a:child) a = nullptr;
        }
    };

    WordDictionary() {
        root = new TrieNode();
    }
    
    void addWord(string word) {
        TrieNode* p = root;

        for(auto& a: word){
            int i = a - 'a';
            if(!p->child[i]) p->child[i] = new TrieNode();
            p = p->child[i];
        }
        p->isword = true;
    }
    
    bool search(string word) {
        return searchWord(word, root, 0);
    }

    bool searchWord(string word, TrieNode* p, int i){
        if(i==word.size()) return p->isword;

        int idx = word[i] - 'a';
        if(word[i]=='.'){
            for(auto& a: p->child){
                if(a && searchWord(word, a, i+1)) return true;
            }
            return false;
        }
        else{
            return p->child[idx] && searchWord(word, p->child[idx], i+1);
        }
    }
private:
    TrieNode* root;
};
