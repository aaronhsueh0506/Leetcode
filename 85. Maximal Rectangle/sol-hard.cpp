class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int res = 0, m = matrix.size(), n = matrix[0].size();
        vector<int> height(n+1);
        for(int i=0; i<m; i++){
            stack<int> st;
            for(int j=0; j<n+1; j++){
                if(j<n){
                    height[j] = matrix[i][j]=='1' ? height[j]+1 : 0;
                }
                while(!st.empty() && height[st.top()]>=height[j]){
                    int cur = st.top(); st.pop();
                    res = max(res, height[cur] * (st.empty() ? j : (j - st.top() -1)));
                }
                st.push(j);
            }
        }
        return res;
    }
};
