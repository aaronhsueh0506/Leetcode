class Solution {
public:
    bool isPalindrome(string s) {
      int left = 0, right = s.size()-1;
      while(right>left){
        if(!isacceptable(s[left])) left++;
        else if(!isacceptable(s[right])) right--;
        else if(s[right] == s[left]){
          left++; right--;
        }
        else return false;
      }
      return true;
    }

    bool isacceptable(char &c){
      if (c>='0' && c<='9') return true;
      else if(c>='a' && c<='z') return true;
      else if (c>='A' && c<='Z'){
        c = c - 'A' + 'a';
        return true;
      }
      return false;
    }
};
