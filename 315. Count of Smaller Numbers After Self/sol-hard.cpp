// O(nlogn), merge sort
class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        vector<int> res(nums.size());
        vector<pair<int,int>> v;
        for(int i=0; i<nums.size();i++){
            v.push_back({nums[i],i});
        }

        merge_sort(v, res, 0, nums.size()-1);
        return res;
    }

    void merge_sort(vector<pair<int,int>>& v, vector<int>& res, int low, int high){
        if(low>=high) return;
        int mid = low + (high-low)/2;
        merge_sort(v, res, low, mid);
        merge_sort(v, res, mid+1, high);
        merge(v, res, low, mid, high);
    }

    void merge(vector<pair<int,int>>& v, vector<int>& res, int low, int mid, int high){
        vector<pair<int,int>> tmp(high-low+1);
        int i = low, j = mid+1, k=0;
        while(i<=mid && j<=high){
            if(v[i].first <= v[j].first){
                tmp[k++] = v[j++];
            }
            else{
                res[v[i].second] += high-j+1;
                tmp[k++] = v[i++];
            }
        }

        while(i<=mid){
            tmp[k++] = v[i++];
        }
        while(j<=high){
            tmp[k++] = v[j++];
        }
        for(int i=low; i<=high; i++) v[i] = tmp[i-low];
    }
};

// Binary search in array O(nlogn) ~ O(n^2), because insert O(n)
class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        vector<int> t, res(nums.size());
        for(int i=nums.size()-1; i>=0; i--){
            int left = 0, right = t.size();
            while(left<right){
                int mid = left + (right - left) / 2;
                if(t[mid]>=nums[i]) right = mid;
                else left = mid + 1;
            }
            res[i] = right;
            t.insert(t.begin() + right, nums[i]);
        }
        return res;
    }
};
