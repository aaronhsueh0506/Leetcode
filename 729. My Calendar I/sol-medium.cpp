class MyCalendar {
public:
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        int cur = 0;
        
        for(auto t: v){
            if(end<=t.first){
                cur++;
            }
            else if(start>=t.second){
                continue;
            }
            else{
                return false;
            }
        }
        v.insert(v.begin()+cur, {start,end});
        return true;
    }
private:
    vector<pair<int,int>> v;
};
