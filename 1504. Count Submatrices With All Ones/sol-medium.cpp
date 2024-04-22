class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size(), res = 0;
        vector<int> height(n);
        
        for(int i=0; i<m; i++){
            stack<int> st;
            vector<int> sum(n);
            for(int j=0; j<n; j++){
                if(mat[i][j]) height[j]++;
                else height[j] = 0;

                while(!st.empty() && height[st.top()]>=height[j]) st.pop();

                if(!st.empty()){
                    int prev = st.top();
                    sum[j] = sum[prev] + height[j] * (j - st.top());
                }
                else {
                    sum[j] += height[j] * (j+1);
                }

                st.push(j);
                res += sum[j];
            }
        }
        return res;
    }
};
