class Solution {
public:
    string minWindow(string s, string t) {
      vector<int> count(128);
      for(char c: t) count[c]++;

      int left = 0;
      int start = -1, res_len = INT_MAX;
      int cnt = 0; 
      
      for(int i=0; i<s.size(); i++){
        if(--count[s[i]]>=0) cnt++;
        while(cnt == t.size()){
          if( i - left + 1 < res_len){
            res_len = i-left+1;
            start=left;
          }

          if(++count[s[left]]>0) cnt--;
          left++;
        }
      }
      return start==-1 ? "" : s.substr(start, res_len);
    }
};
