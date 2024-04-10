class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {
        
        vector<char> gen{'A', 'C', 'G', 'T'};
        unordered_set<string> s{bank.begin(), bank.end()};
        unordered_set<string> visited;
        queue<string> q;
        q.push(startGene);
        
        int res = 0;
        while(!q.empty()){
            int size = q.size();
            while(size--){
                string t = q.front(); q.pop();
                if(t == endGene) return res;
                for(int i=0; i<8; i++){
                    char old = t[i];
                    for(char c: gen){
                        if(c==t[i]) continue;
                        t[i] = c;
                        if(s.count(t) && !visited.count(t)){
                            visited.insert(t);
                            q.push(t);
                        }
                    }
                    t[i] = old;
                }
            }
            res++;
        }
        return -1;
    }
};
