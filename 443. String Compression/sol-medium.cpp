class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> res;
        int i=0, j=0;
        while(i<chars.size()){
            char c = chars[i];
            int count = 1;
            while(i+1<chars.size() && chars[i+1]==c){
                count++;
                i++;
            }
            chars[j++] = c;
            if(count>1) {
                for(char n: to_string(count)) chars[j++] = n;
            }
            i++;
        }
        return j;
    }
};
