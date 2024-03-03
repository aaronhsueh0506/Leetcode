class Solution {
public:
    Solution(vector<int>& w) {
        sum = w;
        for(int i=1; i<w.size(); i++){
            sum[i] = sum[i-1] + w[i];
        }
    }
    
    int pickIndex() {
        int x = rand() % sum.back();
        int left = 0, right = sum.size() - 1;
        while(right>left){
            int mid = left + (right-left) /2;
            if(sum[mid] <= x) left = mid + 1;
            else right = mid;
        }
        return right;
    }

private:
    vector<int> sum;
};
