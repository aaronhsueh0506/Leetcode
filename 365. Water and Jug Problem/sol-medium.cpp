class Solution {
public:
    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity) {
        if(jug1Capacity+jug2Capacity<targetCapacity) return false;
        if(jug1Capacity+jug2Capacity==targetCapacity) return true;
        
        queue<int> q{{0}};
        unordered_set<int> visited;
        visited.insert(0);

        vector<int> step{-jug1Capacity,jug1Capacity,-jug2Capacity,jug2Capacity};

        while(!q.empty()){
            int p = q.front(); q.pop();
            for(int s: step){ 
                if(p+s ==targetCapacity) return true;
                if(visited.count(p+s) || p+s < 0 || p+s > jug1Capacity+jug2Capacity) continue;
                visited.insert(p+s);
                q.push(p+s);
            }
        }
        return false;
    }
};
