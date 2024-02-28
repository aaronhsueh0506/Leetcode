// Trie 
// time: O(sum(l) + 4^max(l)), space: O(sum(l) + l)
class Solution {
public:
    struct TrieNode{
        TrieNode* child[26];
        string str;
    };

    struct Trie{
        TrieNode *root;
        Trie(): root(new TrieNode()) {}

        void insert(string word){
            TrieNode *p = root;
            for(auto &a:word){
                int i = a - 'a';
                if(!p->child[i]) p->child[i] = new TrieNode();
                p = p->child[i];
            }
            p->str = word;
        }
    };

    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        m = board.size();
        n = board[0].size();

        vector<string> res;
        Trie T;
        for(string &word: words) T.insert(word);

        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(T.root->child[board[i][j] - 'a'])
                    DFS(board, T.root->child[board[i][j] - 'a'], i, j, res);
            }
        }
        
        return res;
    }

    void DFS(vector<vector<char>>& board, TrieNode* p, int i, int j, vector<string>& res){
        if(!p->str.empty()){
            res.push_back(p->str);
            p->str.clear();
        }

        char cur = board[i][j];
        board[i][j] = '#';
        for(auto dir: dirs){
            int x = i + dir[0], y = j + dir[1];
            if(x>=0 && y>=0 && x<m && y<n && board[x][y]!='#' && p->child[board[x][y]-'a']){
                DFS(board, p->child[board[x][y]-'a'], x, y, res);
            }
        }
        board[i][j] = cur;
    }

private:
    int m, n;
    vector<vector<int>> dirs{{-1,0},{0,-1},{1,0},{0,1}};
};

// DFS, TLE ( for test case 62, same prefix)
// time: O(sum(m*n*4^l)), space: O(l)
class Solution {
public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        m = board.size();
        n = board[0].size();

        vector<string> res;
        
        for(string word: words){
            bool found_word = false;
            for(int i=0; i<m; i++){
                for(int j=0; j<n; j++){
                    if(!found_word && DFS(board, word, 0, i, j)){
                        res.push_back(word);
                        found_word = true;
                    }
                }
            }
        }
        return res;
    }

    bool DFS(vector<vector<char>>& board, string& word, int idx, int x, int y){
        if(x<0 || y<0 || x>=m || y>=n || word[idx]!=board[x][y]) return false;
        
        if(idx == word.size()-1) return true;

        char cur = board[x][y];
        board[x][y] = '#';
        bool found = DFS(board, word, idx+1, x-1, y) ||
                     DFS(board, word, idx+1, x, y-1) ||
                     DFS(board, word, idx+1, x+1, y) ||
                     DFS(board, word, idx+1, x, y+1);
        board[x][y] = cur;
        return found;
    }

private:
    int m, n;
};
