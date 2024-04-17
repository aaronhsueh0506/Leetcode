class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;

        int i=0;

        for(int push: pushed){
            st.push(push);
            while(!st.empty() && st.top()==popped[i]){
                st.pop();
                i++;
            }
        }

        return st.empty();
    }
};
