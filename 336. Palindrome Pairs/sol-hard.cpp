class Solution {
public:
    vector<vector<int>> palindromePairs(vector<string>& words) {
        // hash table {word, index}
        vector<vector<int>> res;
        unordered_map<string, int> m;
        for(int i=0; i<words.size(); i++) m[words[i]] = i;
        
        for(int i=0; i<words.size(); i++){
            int l=0, r=0;
            while(l<=r){
                string t = words[i].substr(l, r-l);
                reverse(t.begin(), t.end());
                if(m.count(t) && i!=m[t] && isvalid(words[i].substr(l==0?r:0, l==0?words[i].size()-r:l))){
                    if(l==0) res.push_back({i, m[t]});
                    else res.push_back({m[t], i});
                }
                // reflection must include left or right, so until right==word[i].size(), left can move
                if(r<words[i].size()) r++;
                else l++;
            }
        }
        return res;
    }

    bool isvalid(string s){
        int n = s.size();
        for(int i=0; i<n/2; i++){
            if(s[i]!=s[n-i-1]) return false;
        }
        return true;
    }
};

