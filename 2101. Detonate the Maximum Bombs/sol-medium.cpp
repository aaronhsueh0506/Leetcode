// O(n^2logn)
class Solution {
public:
    int maximumDetonation(vector<vector<int>>& bombs) {
        sort(bombs.begin(), bombs.end(), cmp);

        int n = bombs.size();
        vector<int> visited(n);

        int res = 0;
        for(int i=0; i<n; i++){
            if(visited[i]) continue;
            int count = BFS(bombs, visited, i);
            res = max(res, count);
        }
        return res;
    }

    int BFS(vector<vector<int>>& bombs, vector<int>& visited, int idx){
        int n = bombs.size(), count = 0;

        queue<int> q{{idx}};
        visited[idx] = 1;
        vector<bool> detonate(n); // for this start bombs
        detonate[idx] = true;

        while(!q.empty()){
            int i = q.front(); q.pop();
            count++;

            for(int j=0; j<n; j++){
                if(detonate[j]) continue;
                long dx = bombs[i][0] - bombs[j][0];
                long dy = bombs[i][1] - bombs[j][1];
                long r = bombs[i][2];
                 if(dx*dx + dy*dy <= r*r){
                     q.push(j);
                     visited[j] = 1;
                     detonate[j] = true;
                 }
            }
        }
        return count;
    }

    static bool cmp(vector<int>& l1, vector<int>& l2){
        return l1[2]>l2[2];
    }
};

// O(n^3)
class Solution {
public:
    int maximumDetonation(vector<vector<int>>& bombs) {
        vector<vector<int>> next(100, vector<int>());
        int n = bombs.size();

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j) continue;
                long dx = bombs[i][0] - bombs[j][0];
                long dy = bombs[i][1] - bombs[j][1];
                long r = bombs[i][2];
                if(dx*dx + dy*dy <= r*r) next[i].push_back(j);
            }
        }

        int res = 0;
        for(int i=0; i<n; i++){
            queue<int> q{{i}};
            vector<int> visit(n);
            visit[i] = 1;

            int count = 1;
            while(!q.empty()){
                int p = q.front(); q.pop();
                for(int t: next[p]){
                    if(visit[t]) continue;
                    visit[t] = 1;
                    q.push(t);
                    count++;
                }
            }
            res = max(res,count);
        }
        return res;
    }
};
