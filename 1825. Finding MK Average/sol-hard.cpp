class MKAverage {
public:
    MKAverage(int m, int k):m(m), k(k), n(m-2*k), sum(0){
        
    }
    
    void addElement(int num) {
        if(q.size()==m){
            remove(q.front());
            q.pop();
        }
        q.push(num);
        add(num);
    }
    
    int calculateMKAverage() {
        return (q.size()<m)?-1:sum/n;
    }
private:
    queue<int> q;
    multiset<int> left, right, mid;
    int m, k ,n;
    long sum;

    void add(int x){
        left.insert(x);

        if(left.size()>k){
            auto it = prev(left.end());
            sum += *it;
            mid.insert(*it);
            left.erase(it);
        }

        if(mid.size()>n){
            auto it = prev(mid.end());
            sum -= *it;
            right.insert(*it);
            mid.erase(it);
        }
    }
    void remove(int x){
        if(x <= *left.rbegin()){
            left.erase(left.find(x));
        }
        else if(x <= *mid.rbegin()){
            sum -= x;
            mid.erase(mid.find(x));
        }
        else{
            right.erase(right.erase(x));
        }

        if(left.size()<k){
            auto it = mid.begin();
            sum -= *it;
            left.insert(*it);
            mid.erase(it);
        }

        if(mid.size()<n){
            auto it = right.begin();
            sum += *it;
            mid.insert(*it);
            right.erase(it);
        }
    }
};
