// DFS
class Solution {
public:
    int beauty = 0;
    long res = 0;
    long M = 1e9+7;
    int countKSubsequencesWithMaxBeauty(string s, int k) {
        vector<int> count(26);
        for(auto c: s) count[c-'a']++;

        sort(count.begin(), count.end(), greater<int>()); // large to small
        if(count.size()<k) return 0;
        
        for(int i=0; i<k; i++){
            beauty += count[i];
        }

        dfs(0,0,0,1,count,k);
        return res;
    }

    void dfs(int cur_idx, int pick, int curbeauty, long sum_combination, vector<int>& count, int k){
        if(pick>k) return;
        if(curbeauty>beauty) return;

        if(curbeauty==beauty && pick==k){
            res = (res+sum_combination)%M;
            return;
        }

        if(curbeauty + std::accumulate(count.begin()+cur_idx, count.end(), 0) < beauty) return;

        for(int i=cur_idx; i<count.size(); i++){
            dfs(i+1, pick+1, curbeauty+count[i], sum_combination*count[i]%M, count, k);
        }
    }
};
