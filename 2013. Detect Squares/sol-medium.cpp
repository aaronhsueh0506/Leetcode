class DetectSquares {
public:
    DetectSquares() {
        
    }
    
    void add(vector<int> point) {
        m[point[0]][point[1]]++;
        row[point[0]].insert(point[1]);
    }
    
    int count(vector<int> point) {
        int res = 0;
        int x = point[0], y = point[1];
        for(auto &v: row[x]){
            if(v==y) continue;
            int len = abs(y-v);
            res += m[x][v] * m[x+len][v] * m[x+len][y];
            res += m[x][v] * m[x-len][v] * m[x-len][y];
        }
        return res;
    }
private:
    unordered_map<int, unordered_map<int, int>> m;
    unordered_map<int, unordered_set<int>> row;
};

/**
 * Your DetectSquares object will be instantiated and called as such:
 * DetectSquares* obj = new DetectSquares();
 * obj->add(point);
 * int param_2 = obj->count(point);
 */
