class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> m;
        for(int i=0; i<s.size(); i++){
            if(!m.count(s[i])){
                for(auto p: m){
                    if(p.second==t[i]) return false; // No two characters may map to the same character
                }
                m[s[i]] = t[i];
            }
            else{
                if(m[s[i]]!=t[i]) return false;
            }

        }
        return true;
    }
};
