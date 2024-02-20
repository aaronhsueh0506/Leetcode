class Solution {
public:
    bool isValid(string s) {
      if(s.size()%2) return false;
      stack<char> s;

      for(int i=0;i<s.size();i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{') st.push(s[i]);
        if(s[i] == ')' && st.top() != '(') return false;
        if(s[i] == ']' && st.top() != '[') return false;
        if(s[i] == '}' && st.top() != '{') return false;
        st.pop();
      }
      return s.empty();
    }
};
