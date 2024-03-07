class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        unordered_map<string, vector<string>> graph;
        unordered_map<string, int> indeg;
        for(int i=0; i<recipes.size(); i++){
            for(auto& ingredient: ingredients[i]){
                graph[ingredient].push_back(recipes[i]);
            }
            indeg[recipes[i]] = ingredients[i].size();;

        }

        queue<string> q;
        for(auto& s: supplies) q.push(s);

        vector<string> res;
        while(!q.empty()){
            int s = q.size();
            while(s--){
                string t = q.front(); q.pop();
                for(auto& r: graph[t]){ 
                    if(--indeg[r]==0){
                        q.push(r);
                        res.push_back(r);
                    }
                }
            }
        }
        return res;
    }
};
