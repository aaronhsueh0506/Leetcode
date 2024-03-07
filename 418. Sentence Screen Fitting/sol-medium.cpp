class Solution {
public:
    int wordsTyping(vector<string>& sentence, int rows, int cols) {
        string all = "";
        for(string sen: sentence) all += sen + " ";
        int start = 0, len = all.size();

        for(int i=0;i<rows;i++){
            start+=cols;
            if(all[start%len]==' ') start++;
            else{
                while(start%len>0 && all[(start-1)%len]!=' ') start--;
            }
        }
        return start/len;
    }
};
