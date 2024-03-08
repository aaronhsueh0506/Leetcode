class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char, int> m;
        int n = s.size();
        for(int i=0;i<n;i++) m[s[i]]++;

        priority_queue<pair<int, char>> q;
        for(auto a:m){
            if(a.second > (n+1)/2) return "";
            q.push({a.second, a.first});
        }

        string res = "";
        while(q.size()>=2){
            auto t1 = q.top(); q.pop();
            auto t2 = q.top(); q.pop();
            res += t1.second;
            res += t2.second;
            if(--t1.first>0) q.push(t1);
            if(--t2.first>0) q.push(t2);
        }
        if(q.size()>0) res += q.top().second;
        return res;
    }
};
