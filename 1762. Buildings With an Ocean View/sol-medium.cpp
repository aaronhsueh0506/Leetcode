class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
        int n = heights.size();
        int max_height = heights.back();
        vector<int> res{n-1};

        for(int i=n-2; i>=0; i--){
            if(heights[i]>max_height) res.push_back(i);
            max_height = max(max_height, heights[i]);
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
};
