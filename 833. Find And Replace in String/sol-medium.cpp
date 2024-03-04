class Solution {
public:
    string findReplaceString(string s, vector<int>& indices, vector<string>& sources, vector<string>& targets) {
        string res = "";
        unordered_map<int, int> m;
        for(int i=0; i<indices.size(); i++){
            if(s.substr(indices[i], sources[i].size()) == sources[i]) m[indices[i]] = i;
        }

        for(int i=0; i<s.size();){
            if(m.count(i)){
                res += targets[m[i]];
                i += sources[m[i]].size();
            }
            else{
                res += s[i];
                i++;
            }
        }
        return res;
    }
};
