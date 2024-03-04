class Solution {
public:
    bool parseBoolExpr(string expression) {
        stack<char> st;
        for(int i=0; i<expression.size();i++){
            if(expression[i]==')'){
                unordered_set<char> s;
                while(!st.empty() && st.top()!='('){
                    s.insert(st.top()); st.pop();
                }
                st.pop(); // pop '('
                char op = st.top(); st.pop();
                if(op=='&') st.push(s.count('f')?'f':'t');
                else if(op=='|') st.push(s.count('t')?'t':'f');
                else if(op=='!') st.push(s.count('t')?'f':'t');
            }
            else if(expression[i]!=',') st.push(expression[i]);
        }
        return st.top() == 't';
    }
};
