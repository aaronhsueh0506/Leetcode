class RandomizedSet {
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(m.count(val)) return false;
        nums.push_back(val);
        m[val] = nums.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(!m.count(val)) return false;
        int last = nums.back();
        m[last] = m[val]; // last index change to val index
        nums[m[val]] = last; // nums[index_val] change to last_val

        nums.pop_back(); 
        m.erase(val);
        return true;
    }
    
    int getRandom() {
        int x = rand() % nums.size();
        return nums[x];
    }
private:
    unordered_map<int, int> m;
    vector<int> nums;
};
