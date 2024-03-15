class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int stone: stones){
            pq.push(stone);
        }

        while(pq.size()>1){
            int p = pq.top(); pq.pop();
            int q = pq.top(); pq.pop();
            if(p!=q){
                pq.push(p-q);
            }
        }

        return pq.empty()?0:pq.top();
    }
};
