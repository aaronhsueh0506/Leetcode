class Solution {
public:
    int countPrimes(int n) {
        if(n<3) return 0;
        vector<bool> prime(n, true);
        prime[0] = prime[1] = 0;

        for(int i=2; i<sqrt(n); i++){
            if(!prime[i]) continue;
            for(int j= i*i; j<n; j+=i){
                prime[j] = false;
            }
        }
        return std::accumulate(prime.begin(), prime.end(), 0);
    }
};

// 1*n 
// 2~n-1 -> 2~sqrt(n) 
// 
