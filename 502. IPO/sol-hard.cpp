class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        priority_queue<int> maxH;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> minH;

        for(int i=0; i<capital.size(); i++){
            minH.push({capital[i], profits[i]});
        }

        for(int i=0; i<k; i++){
            while(!minH.empty() && minH.top().first<=w){ // put all project capital less than w into maxH
                auto t = minH.top(); minH.pop();
                maxH.push(t.second);
            }
            if(maxH.empty()) break;
            w += maxH.top(); maxH.pop(); // only choose the largest profits for this time
        }
        return w;
    }
};
