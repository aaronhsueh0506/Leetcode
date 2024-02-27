class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
      unordered_set<string> wordset(wordList.begin(), wordList.end());
      if(!wordset.count(beginWord) && !wordset.count(endWord)) return 0;

      // BFS
      queue<string> q;
      q.push(beginWord);
      int res = 1;

      while(!q.empty()){
        int s = q.size();
        while(s--){
          string word = q.front(); q.pop();
          for(int i=0; i<word.size(); i++){
            char ch = word[i];
            for(char j = 'a'; j <='z'; j++){
              if(j == ch) continue;
              word[i] = j;
              if(word == endWord) return res + 1;
              if(wordset.count(word)){
                q.push(word);
                wordset.erase(word);
              }
            }
            word[i] = ch;
          }
        }
        res++;
      }
      return 0;
    }
};
