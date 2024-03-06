class Solution {
public:
    vector<string> findStrobogrammatic(int n) {
        vector<string> res{""};
        if(n%2) res = {"0","1","8"};

        for(int i=2 + n%2; i<=n; i+=2){
            vector<string> t;
            for(auto r: res){
                if(i!=n) t.push_back("0" + r + "0");
                t.push_back("1" + r + "1");
                t.push_back("6" + r + "9");
                t.push_back("8" + r + "8");
                t.push_back("9" + r + "6");
            }
            res = t;
        }
        return res;
    }
};
