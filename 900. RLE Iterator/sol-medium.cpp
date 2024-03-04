class RLEIterator {
public:
    RLEIterator(vector<int>& encoding) {
        for(int i=0; i<encoding.size(); i+=2){
            if(encoding[i]!=0) seq.push_back({encoding[i+1], encoding[i]});
        }
    }
    
    int next(int n) {

        for(auto& p: seq){
            if(p.second == 0) continue;
            else if(p.second >= n){
                p.second -= n;
                return p.first;
            }
            n -= p.second;
            p.second = 0;
        }
        return -1;
    }
private:
    vector<pair<int,int>> seq;
};

/**
 * Your RLEIterator object will be instantiated and called as such:
 * RLEIterator* obj = new RLEIterator(encoding);
 * int param_1 = obj->next(n);
 */
