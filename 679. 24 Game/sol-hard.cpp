class Solution {
public:
    double eps = 1e-3;
    bool res = false;
    bool judgePoint24(vector<int>& cards) {
        vector<double> arr(cards.begin(), cards.end());
        DFS(arr);
        return res;
    }

    void DFS(vector<double>& arr){
        if(res) return;
        if(arr.size()==1){
            if(abs(arr[0]-24) < eps) res = true;
            return;
        }

        for(int i=1; i<arr.size(); i++){
            for(int j=0; j<i; j++){
                double p = arr[i], q = arr[j];
                vector<double> t{p+q, p-q, q-p, p*q};
                if(p>eps) t.push_back(q/p);
                if(q>eps) t.push_back(p/q);
                arr.erase(arr.begin()+i);
                arr.erase(arr.begin()+j);
                
                for(double d: t){
                    arr.push_back(d);
                    DFS(arr);
                    arr.pop_back();
                }
                arr.insert(arr.begin()+j, q);
                arr.insert(arr.begin()+i, p);
            }
        }
    }
};
