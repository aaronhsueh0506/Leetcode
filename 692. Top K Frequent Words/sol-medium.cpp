class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
      unordered_map<string, int> m;
      for(string word:words) m[word]++;

      priority_queue<pair<strint, int>, vector<pair<string,int>>, comp> q;
      for(auto w:m){
        q.push(w);
      }

      vector<string> res;
      for(int i=0;i<k;i++){
        res.push_back(q.top().first);
        q.pop();
      }
      return res;
    }

    struct comp{
      bool operater()(pair<string, int>& l1, pair<string, int>& l2){
        if(l1.second == l2.second) return l1.first > l2.first;
        return l1.second < l2.second;
      }
    };
};
