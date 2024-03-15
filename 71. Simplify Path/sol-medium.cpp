class Solution {
public:
    string simplifyPath(string path) {
        vector<string> v;
        int n = path.size(), i=0;
        while(i<n){
            while(path[i]=='/' && i<n) i++;
            if(i==n) break;
            int start = i;
            while(path[i]!='/' && i<n) i++;
            int end = i-1;

            string cur = path.substr(start, end-start+1);
            if(cur==".."){
                if(!v.empty()) v.pop_back();
            }
            else if(cur!=".") v.push_back(cur);
        }

        string res;
        for(int i=0; i<v.size(); i++){
            res += '/' + v[i];
        }
        return res.empty()? "/" : res;
    }
};
