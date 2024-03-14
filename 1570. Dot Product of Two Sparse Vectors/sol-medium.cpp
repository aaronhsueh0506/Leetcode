class SparseVector {
public:
    SparseVector(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0)
                m[i] = nums[i];
        }
    }

    // Return the dotProduct of two sparse vectors
    int dotProduct(SparseVector& vec) {
        auto a = m;
        auto b = vec.m;
        if(a.size() > b.size()) swap(a,b);

        int res = 0;
        for(auto& [i, v]: a){
            if(b.count(i)) res += v * b[i];
        }
        return res;
    }

private:
    unordered_map<int, int> m;
};
