class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> res;
        int n = words.size();
        int i = 0;

        while(i<n){
            int j = i+1, len = words[i].size();
            while(j<n && len+words[j].size()+1 <= maxWidth){
                len += words[j].size()+1;
                j++;
            }

            string cur = words[i];
            if(j!=i+1 && j!=n){ 
                int space = (maxWidth - len) / (j-i-1); // others " " split to each space, len including one " "
                int extra = (maxWidth - len) % (j-i-1); // first `extra` "_" need plus `1`
                for(int k=i+1; k<j; k++)
                    cur += string(space + 1 + ((k-i-1)<extra), ' ') + words[k];
            }
            else{ // only one char or last
                for(int k=i+1; k<j; k++){
                    cur += " " + words[k];
                }
                cur += string(maxWidth - cur.size(), ' ');
            }
            res.push_back(cur);
            i=j;
        }
        return res;
    }
};
