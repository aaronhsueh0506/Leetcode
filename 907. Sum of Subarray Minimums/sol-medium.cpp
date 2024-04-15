#define MOD 100000007
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        stack<int> st;
        int res = 0, M = 1e9+7;
        int now, left;
        for(int i=0; i<arr.size(); i++){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                now = st.top(); st.pop();
                left = st.empty()? -1 : st.top();
                res = (res + arr[now] * (now - left) * (i - now)) % M;
            }
            st.push(i);
        }

        while(!st.empty()){
            now = st.top(); st.pop();
            left = st.empty()? -1 : st.top();
            res = (res + arr[now] * (now - left) * (arr.size() - now)) % M;
        }
        return res;
    }
};
