class StockPrice {
public:
    StockPrice() {
        
    }
    
    void update(int timestamp, int price) {
        if(m.count(timestamp)){
            s.erase(s.find(m[timestamp]));
        }
        m[timestamp] = price;
        s.insert(price);
        last = max(last, timestamp);
    }
    
    int current() {
        return m[last];
    }
    
    int maximum() {
        return *s.rbegin();
    }
    
    int minimum() {
        return *s.begin();
    }

private:
    unordered_map<int, int> m; // {time, val}
    multiset<int> s;
    int last=0;
};
