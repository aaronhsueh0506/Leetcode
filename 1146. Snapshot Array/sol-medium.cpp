class SnapshotArray {
public:
    SnapshotArray(int length) {
        for(int i=0; i<length; i++){
            m[i] = {{0,0}};
        }
    }
    
    void set(int index, int val) {
        m[index][snapid]=val;
    }
    
    int snap() {
        return snapid++;
    }
    
    int get(int index, int snap_id) {
        auto it = m[index].upper_bound(snap_id);
        return it == m[index].begin() ? 0 : prev(it)->second;
    }
private:
    int snapid = 0;
    unordered_map<int, map<int,int>> m;
};
