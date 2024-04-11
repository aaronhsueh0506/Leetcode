class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int n = words.size(), len = words[0].size();
        vector<int> res;
        unordered_map<string, int> m;
        for(string& word: words) m[word]++;
        
        for(int i=0; i<len; i++){
            int count = 0;
            unordered_map<string, int> seen = m;
            for(int j=i; j+len <= s.size(); j+=len){
                string str = s.substr(j, len);
                
                seen[str]--;
                if(seen[str]>=0) count++;

                int pop_start = j - n*len; // left boundary
                if(pop_start>=0){
                    string pop_word = s.substr(pop_start,len);
                    seen[pop_word]++;
                    if(seen[pop_word]>0) count--;
                }

                if(count == n) res.push_back(pop_start+len);
            }
        }
        return res;
    }
};
