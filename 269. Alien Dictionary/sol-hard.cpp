class Solution {
public:
    string alienOrder(vector<string>& words) {
        string res = "";
        unordered_set<int> visited;
        vector<pair<int,int>> s;

        for(auto w:words) visited.insert(w.begin(),w.end());

        for(int i=0;i<words.size()-1;i++){
            int size = min(words[i].size(), words[i+1].size());
            int j=0;
            for(; j<size; j++){
                if(words[i][j]!=words[i+1][j]){
                    s.push_back({words[i][j],words[i+1][j]});
                    break;
                }
            }
            if(j==size && words[i].size() > words[i+1].size()) return "";
        }

        vector<int> in(256);
        queue<int> q;
        for(auto a: s) ++in[a.second];
        for(auto a: visited){
            if(in[a]==0){
                q.push(a);
                res += a;
            }
        }

        while(!q.empty()){
            char c = q.front(); q.pop();
            for(auto p: s){
                if(p.first==c){
                    if(--in[p.second]==0){
                        q.push(p.second);
                        res += p.second;
                    }
                }
            }
        }
        return res.size() == visited.size() ? res : "";
    }
};
