class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> res(ratings.size(),1);

        for(int i=0; i<ratings.size()-1; i++){
            if(ratings[i+1]>ratings[i]) res[i+1] = res[i]+1;
        }

        for(int i=ratings.size()-1;i>0; i--){
            if(ratings[i-1]>ratings[i]) res[i-1] = max(res[i-1], res[i]+1);
        }
        return std::accumulate(res.begin(), res.end(),0);
    }
};
