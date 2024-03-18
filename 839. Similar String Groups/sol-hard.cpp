// Union find
// if vaild , become a same root, and res minus 1
// Time O(n^2)
class Solution {
public:
    int numSimilarGroups(vector<string>& strs) {
        int res = strs.size(), n = strs.size();
        vector<int> root(n);
        for(int i=0;i<n;i++) root[i] = i;

        for(int i=1; i<n; i++){
            for(int j=0; j<i; j++){
                if(!isSimilar(strs[i], strs[j])) continue;
                int x = find(root, i), y = find(root, j); 
                if(x!=y) {
                    root[y] = x;
                    res--;
                }
            }
        }
        return res;
    }

    int find(vector<int>& root, int i){
        return root[i] == i ? i : root[i]=find(root, root[i]);
    }

    bool isSimilar(string& s1, string& s2){
        int count = 0;
        for(int i=0; i<s1.size(); i++){
            if(s1[i]==s2[i]) continue;
            if(++count>2) return false;
        }
        return true;
    }
};

// DFS
// Time complexity O(n^2 * m)
class Solution {
public:
    int numSimilarGroups(vector<string>& strs) {
        int res = 0, n = strs.size();
        unordered_set<string> visited;
        for(string str: strs){
            if(visited.count(str)) continue;
            res++;
            DFS(strs, str, visited);
        }
        return res;
    }

    void DFS(vector<string>& strs, string& str, unordered_set<string>& visited){
        if(visited.count(str)) return;
        visited.insert(str);
        for(string word: strs){
            if(isSimilar(word, str)){
                DFS(strs, word, visited);
            }
        }
    }

    bool isSimilar(string& word, string& str){
        int count = 0;
        for(int i=0; i<word.size(); i++){
            if(word[i]==str[i]) continue;
            if(++count>2) return false;
        }
        return true;
    }
};
