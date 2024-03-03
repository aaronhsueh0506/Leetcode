class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end());

        priority_queue<int, vector<int>, greater<>> availableroom;
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> busyroom;

        for(int i=0; i<n; i++) availableroom.push(i);
        vector<int> count(n);

        for(auto meeting: meetings){
            while(!busyroom.empty() && busyroom.top().first<=meeting[0]){
                availableroom.push(busyroom.top().second);
                busyroom.pop();
            }

            if(!availableroom.empty()){
                auto room = availableroom.top(); availableroom.pop();
                busyroom.push({meeting[1], room});
                count[room]++;
            }
            else{
                auto t = busyroom.top(); busyroom.pop();
                count[t.second]++;
                busyroom.push({t.first + meeting[1] - meeting[0], t.second});
            }
        }

        int res_max = 0, res = -1;
        for(int i=0; i<n; i++){
            if(res_max < count[i]){
                res = i;
                res_max = count[i];
            }
        }
        return res;
    }
};
