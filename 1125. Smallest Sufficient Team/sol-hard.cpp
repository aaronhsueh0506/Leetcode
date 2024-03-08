class Solution {
public:
    vector<int> smallestSufficientTeam(vector<string>& req_skills, vector<vector<string>>& people) {
        int n = req_skills.size();
        unordered_map<int, vector<int>> dp(1<<n);
        dp[0] = {};

        unordered_map<string, int> skillmap(n);
        for(int i=0; i<n; i++) skillmap[req_skills[i]] = i;

        for(int i=0; i<people.size(); i++){
            int skill = 0;
            for(string& str: people[i]){
                skill |= 1 << skillmap[str];
            }

            for(auto& a: dp){
                int combine_bit= a.first;
                int cur = skill | combine_bit;
                if(!dp.count(cur) || dp[cur].size()>1+dp[combine_bit].size()){
                    dp[cur] = a.second;
                    dp[cur].push_back(i);
                }
            }
        }
        return dp[(1<<n) -1];
    }
};
