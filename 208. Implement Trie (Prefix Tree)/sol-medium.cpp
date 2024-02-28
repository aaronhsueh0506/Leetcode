class Trie {
public:
    struct TrieNode{
        TrieNode* child[26];
        bool isword;
        TrieNode(): isword(false){
            for(auto &a:child) a = nullptr;
        }
    };

    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode *p = root;
        for(auto &a: word){
            int i = a - 'a';
            if(!p->child[i]) p->child[i] = new TrieNode();
            p = p->child[i];
        }
        p->isword = true;
    }
    
    bool search(string word) {
        TrieNode *p = root;
        for(auto &a: word){
            int i = a - 'a';
            if(!p->child[i]) return false;
            p = p->child[i];
        }
        return p->isword;
    }
    
    bool startsWith(string prefix) {
        TrieNode *p = root;
        for(auto &a: prefix){
            int i = a - 'a';
            if(!p->child[i]) return false;
            p = p->child[i];
        }
        return true;
    }
private:
    TrieNode* root;
};
