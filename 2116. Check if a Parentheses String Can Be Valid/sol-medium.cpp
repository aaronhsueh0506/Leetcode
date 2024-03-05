class Solution {
public:
    bool canBeValid(string s, string locked) {
      int n = s.size();
      if(n%2) return false;

      int x = 0;

      // check x for (
      for(int i=0; i<n; i++){
        if(s[i]=='(' || locked[i]=='0')  x++;
        else x--;
        if(x<0) return false;
      }

      x = 0;
      for(int i=n-1; i>=0; i--){
        if(s[i]==')' || locked[i]=='0')  x++;
        else x--;
        if(x<0) return false;
      }
      return true;
    }
};
