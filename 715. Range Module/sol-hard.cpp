class RangeModule {
public:
    RangeModule() {
        
    }
    
    void addRange(int left, int right) {
        vector<pair<int,int>> res;
        int cur = 0;
        for(auto p: v){
            if(p.second<left){
                res.push_back(p);
                cur++;
            }
            else if(p.first>right){
                res.push_back(p);
            }
            else{
                left = min(p.first,left);
                right = max(p.second,right);
            }
        }
        res.insert(res.begin()+cur, {left, right});
        v = res;
    }
    
    bool queryRange(int left, int right) {
        for(auto p: v){
            if(left>=p.first && right<=p.second) return true;
        }
        return false;
    }
    
    void removeRange(int left, int right) {
        vector<pair<int,int>> res, t;
        int n = v.size(), cur =0;
        for(int i=0; i<n; i++){
            if(v[i].second<=left){
                res.push_back(v[i]);
                cur++;
            }
            else if(v[i].first>=right){
                res.push_back(v[i]);
            }
            else{
                if(v[i].first<left) t.push_back({v[i].first, left});
                if(v[i].second>right) t.push_back({right, v[i].second});
            }
        }
        res.insert(res.begin()+cur, t.begin(), t.end());
        v = res;
    }

private: 
    vector<pair<int,int>> v;
};
