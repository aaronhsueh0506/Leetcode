class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> m;
        vector<string> str;

        int left = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i]==' '){
                str.push_back(s.substr(left, i-left));
                left = i+1;
            }
            else if(i==s.size()-1){
                str.push_back(s.substr(left, i-left+1));
            }
        }
        
        if(pattern.size() != str.size()) return false;

        for(int i=0; i<pattern.size(); i++){
            if(!m.count(pattern[i])){
                for(auto a: m){
                    if(a.second == str[i]) return false;
                }
                m[pattern[i]] = str[i];
            }
            else{
                if(m[pattern[i]]!=str[i]) return false;      
            }
        }
        return true;
    }
};
