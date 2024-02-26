class LRUCache {
public:
    LRUCache(int capacity) {
        cap = capacity;
    }
    
    int get(int key) {
        auto it = m.find(key);
        if(it==m.end()) return -1;
        l.splice(l.begin(), l, it->second);
        return it->second->second;
    }
    
    void put(int key, int value) {
        auto it = m.find(key);
        if(m!=m.end()) l.erase(it->second);
        l.push_front(make_pair(key, value));
        m[key] = l.begin();
        if(m.size() > cap){
          int k = l.rbegin()->first;
          l.pop_back();
          m.erase(k);
        }
    }
private:
  int cap;
  list<pair<int, int>> l;  // {key, value}
  unordered_map<int, pair<int, int>::iterator> m; // {key, list of address}
};
