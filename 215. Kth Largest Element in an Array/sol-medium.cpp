class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int left = 0, right = nums.size()-1;
        while(true){
            int pos = partition(nums, left, right);
            if(pos == k-1) return nums[pos];
            if(pos>k-1) right = pos - 1;
            else left = pos + 1;
        }
    }

    int partition(vector<int>& nums, int left, int right){
        int pivot = nums[left], l = left+1, r = right;
        // the part of index < r will >= pivot
        // the part of index > l will <= pivot
        // need l=r, because don't know nums[l] is less or greater than pivot
        while(l <= r){
            if(nums[l] < pivot && nums[r] > pivot){
                swap(nums[l++],nums[r--]);
            }
            if(nums[l] >= pivot) l++; 
            if(nums[r] <= pivot) r--;
        }
        swap(nums[left], nums[r]);
        return r;
        // using r because l may be n, will overflow
    }
};
