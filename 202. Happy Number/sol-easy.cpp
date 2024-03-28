class Solution {
public:
    
    bool isHappy(int n) {
        unordered_set<int> s;
        while(n!=1){
            if(s.count(n)) return false;
            s.insert(n);
            n=getn(n);
        }
        return true;
    }

    int getn(int x){
        int new_n = 0;
        while(x>0){
            new_n += pow((x%10),2);
            x /= 10;
        }
        return new_n;
    }
};
