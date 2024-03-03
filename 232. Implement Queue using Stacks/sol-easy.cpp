class MyQueue {
public:
    MyQueue() {
    }
    
    void push(int x) {
        stack<int> tmp;
        while(!st.empty()){
            tmp.push(st.top()); 
            st.pop();
        }
        st.push(x);
        while(!tmp.empty()){
            st.push(tmp.top());
            tmp.pop();
        }
    }
    
    int pop() {
        int val = st.top(); st.pop();
        return val;
    }
    
    int peek() {
        return st.top();
    }
    
    bool empty() {
        return st.empty();
    }
private:
    stack<int> st;
};
