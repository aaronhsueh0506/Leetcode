/*
// Definition for an Interval.
class Interval {
public:
    int start;
    int end;

    Interval() {}

    Interval(int _start, int _end) {
        start = _start;
        end = _end;
    }
};
*/

class Solution {
public:
    vector<Interval> employeeFreeTime(vector<vector<Interval>> schedule) {
        vector<Interval> res;
        vector<pair<int, int>> v;

        for(auto a: schedule){
            v.push({a.start, a.end});
        }
        sort(v.begin(), v.end(), cmp);

        int t = v[0].second;
        for(int i=1; i<v.size(); i++){
            if(v[i].first>t){
                res.push_back(Interval(t,v[i].first));
            }
            t = max(v[i].first, t);
        }
        return res;
    }

    static bool cmp(pair<int,int>& l1, pair<int,int>& l2){
        if(l1.first == l2.first) return l1.second < l2.second;
        return l1.first < l2.first;
    }
};
