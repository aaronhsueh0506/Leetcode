class Solution {
public:
    int longestValidParentheses(string s) {
      stack<int> st; // record index
      int start = -1, res = 0;

      for(int i=0;i<s.size();i++){
        if(s[i]=='(') st.push(i);
        else{
          if(st.empty()) start = i;
          else{
            st.pop();
            res = max(res, st.empty()? i - start: i - st.top());
          }
        }
      }
      return res;
    }
};

// () 1 - start(0) + 1 = 2
// (() 2 - 0 = 2
// )() 2 - start(1) + 1 = 2
