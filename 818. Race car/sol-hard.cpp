// BFS O(2^D)
class Solution {
public:
    int racecar(int target) {
        queue<pair<int,int>> q;
        q.push({0,1});
        unordered_set<string> visited;
        visited.insert("0,1");

        int res = 0;
        while(!q.empty()){
            int s = q.size();
            while(s--){
                int pos = q.front().first, speed = q.front().second;
                q.pop();
                if(pos==target) return res;

                int new_pos = pos + speed, new_speed = speed*2; // case A
                
                if(!visited.count(to_string(new_pos)+","+to_string(new_speed))){
                    visited.insert(to_string(new_pos)+","+to_string(new_speed));
                    q.push({new_pos, new_speed});
                }

                new_pos = pos, new_speed = (speed>0)?-1:1;
                if(!visited.count(to_string(new_pos)+","+to_string(new_speed))){
                    visited.insert(to_string(new_pos)+","+to_string(new_speed));
                    q.push({new_pos, new_speed});
                }
            }
            res++;
        }
        return res;
    }
};

// DP
// dp[i] for start from i, need how many step
// cnt1 for forward times, j for forward distance
// two sitiuations: need backward (over target and turn back or turn back and turn back again before need to add 2 steps), 
//                  or only go forward
// dp[i - (j-k)] for resiual distance can directly use, because same distance
// O(target + log(target))
class Solution {
public:
    int racecar(int target) {
        vector<int> dp(target+1, INT_MAX);
        dp[0] = 0;

        for(int i=1; i<=target; i++){
            int j=1, cnt1=1;
            for(;j<i; j=(1<<++cnt1)-1){
                for(int k=0, cnt2=0; k<j; k=(1<<++cnt2)-1){
                    dp[i] = min(dp[i], cnt1+1+cnt2+1+dp[i-(j-k)]);
                }
            }
            dp[i] = min(dp[i], cnt1+(i==j?0:1+dp[j-i])); 
        }
        return dp.back();
    }
};
