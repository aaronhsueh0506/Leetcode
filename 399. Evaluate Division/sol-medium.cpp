class Solution {
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        vector<double> res;
        for(int i=0; i<equations.size(); i++){
            m[equations[i][0]][equations[i][1]] = values[i];
            m[equations[i][1]][equations[i][0]] = 1.0 / values[i];
        }

        for(auto query: queries){
            unordered_set<string> visited;
            double t = dfs(query[0], query[1], visited);
            res.push_back((t>0) ? t : -1);
        }
        return res;
    }

    double dfs(string up, string down, unordered_set<string>& visited){
        if(m[up].count(down)) return m[up][down];
        for(auto a: m[up]){
            if(visited.count(a.first)) continue;
            visited.insert(a.first);
            double t = dfs(a.first, down, visited);
            if(t>0) return t * a.second;
        }
        return -1.0;
    }
private:
    unordered_map<string, unordered_map<string, double>> m;
};
