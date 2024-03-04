class Solution {
public:
    int earliestAcq(vector<vector<int>>& logs, int n) {
        sort(logs.begin(), logs.end());
        vector<int> root(n);
        for(int i=0; i<n; i++) root[i]=i;

        int res = n;
        for(auto log:logs){
            int rootx = find(root, log[1]), rooty = find(root, log[2]);
            if(rootx != rooty){
                root[rooty] = rootx;
                if(--res==1) return log[0];
            }
        }
        return -1;
    }

    int find(vector<int>& root, int i){
        return root[i] == i ? i : find(root, root[i]);
    }
};
