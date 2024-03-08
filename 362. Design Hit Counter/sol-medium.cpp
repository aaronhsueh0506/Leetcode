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
