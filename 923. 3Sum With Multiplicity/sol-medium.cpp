class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        long res = 0, M = 1e9+7;
        unordered_map<int, long> m;
        for(int a: arr) m[a]++;

        for(auto a: m){
            for(auto b: m){
                int i = a.first, j=b.first, k=target-i-j;
                if(!m.count(k)) continue;
                if(i==j && j==k) res += m[i] * (m[i]-1) * (m[i]-2) / 6;
                else if(i==j && j!=k) res+= m[i] * (m[i]-1) /2 * m[k];
                else if(i<j && j<k) res+=m[i] * m[j] * m[k];
            }
        }
        return res%M;
    }
};
