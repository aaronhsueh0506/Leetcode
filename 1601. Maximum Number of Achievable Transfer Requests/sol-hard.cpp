class Solution {
public:
    int maximumRequests(int n, vector<vector<int>>& requests) {
        int res = 0;
        vector<int> in(n), out(n);
        backtrace(requests, in, out, res, 0);
        return res;
    }

    void backtrace(vector<vector<int>>& requests, vector<int>& in, vector<int>& out, int& res, int cur){
        if(cur==requests.size()){
            if(in==out) res = max(res, std::accumulate(in.begin(), in.end(), 0));
        }
        else{
            backtrace(requests, in, out, res, cur+1);

            ++out[requests[cur][0]];
            ++in[requests[cur][1]];
            backtrace(requests, in, out, res, cur+1);

            --out[requests[cur][0]];
            --in[requests[cur][1]];
        }
    }
};
