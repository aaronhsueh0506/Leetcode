class Solution {
public:
    int sortArray(vector<int>& nums) {
        n = nums.size();
        int normal = count(nums, 0);
        
        vector<int> arr = nums;
        for(int& v: arr) v = (v-1+n)%n;
        int adjust = count(arr, n-1);

        return min(adjust, normal);
    }

    int count(vector<int>& nums, int start){
        vector<bool> visited(n);
        int cnt = 0;

        for(int i=0; i<n; i++){
            if(i==nums[i] || visited[i]) continue;
            int cur = i;
            ++cnt;
            while(!visited[cur]){
                visited[cur] = true;
                ++cnt;
                cur = nums[cur];
            }
        }
        if(nums[start]!=start) cnt-=2;
        return cnt;
    }
private:
    int n;
};
