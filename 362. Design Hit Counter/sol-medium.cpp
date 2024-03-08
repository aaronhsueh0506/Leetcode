class HitCounter {
public:
    HitCounter() {
        
    }
    
    void hit(int timestamp) {
        q.push(timestamp);
    }
    
    int getHits(int timestamp) {
        while(!q.empty() &&  timestamp - q.front() >= 300){
            q.pop();
        }
        return q.size();
    }
private:
    queue<int> q;
};

// follow-up
class HitCounter {
public:
    HitCounter() {
        times.resize(300);
        hits.resize(300);
    }
    
    void hit(int timestamp) {
        if(times[timestamp%300] != timestamp){
            times[timestamp%300] = timestamp;
            hits[timestamp%300] = 1;
        }
        else{
            hits[timestamp%300]++;
        }
    }
    
    int getHits(int timestamp) {
        int res = 0;
        for(int i=0; i<300; i++){
            if(timestamp - times[i] < 300) res += hits[i];
        }
        return res;
    }
private:
    vector<int> times, hits;
};
