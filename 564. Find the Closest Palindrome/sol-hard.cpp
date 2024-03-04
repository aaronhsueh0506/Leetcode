class Solution {
public:
    string nearestPalindromic(string n) {
        long num = stol(n), min_diff = LONG_MAX, res, len = n.size();
        unordered_set<long> s;
        s.insert(pow(10,len)+1);
        s.insert(pow(10,len+1)-1);
        long prefix = stol(n.substr(0, (len+1)/2));
        for(int i=-1; i<=1; i++){
            string pre = to_string(prefix+i);
            string str = pre + string(pre.rbegin() + (len&1), pre.rend());
            s.insert(stol(str));
        }
        s.erase(num);

        for(auto a:s){
            long diff = labs(a - num);
            if(diff < min_diff){
                min_diff = diff;
                res = a;
            }
            else if(diff == min_diff) res = a;
        }
        return to_string(res);
    }
};
