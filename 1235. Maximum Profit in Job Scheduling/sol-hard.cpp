class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
      // sort by endtime, profit -> map
      vector<vector<int>> jobs;
      map<int, int> dp{{0,0}}; // {end, profit}

      for(int i=0; i<startTime.size();i++){
        jobs.push_back({endTime[i], startTime[i], profit[i]});
      }

      sort(jobs.begin(), jobs.end());

      for(auto& job:jobs){
        int cur = prev(dp.upper_bound(job[1]))->second + job[2]; // before job[1] profit plus this job profit, upper_bound is >, prev becomes <= 
        if(cur>dp->rbegin()->second) dp[job[0]] = cur; 
      }
      return dp.rbegin()->second;
    }
};
