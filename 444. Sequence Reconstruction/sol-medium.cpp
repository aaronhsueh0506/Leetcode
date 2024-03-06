class Solution {
public:
    bool sequenceReconstruction(vector<int>& nums, vector<vector<int>>& sequences) {
        unordered_map<int, int> m, pre; // {num, index}
        
        for(int i=0; i<nums.size(); i++) m[nums[i]] = i;

        for(auto seq: sequences){
            for(int i=0; i<2; i++){
                if(!m.count(seq[i])) return false; // not in nums will not be shortest
                if(i>0 && m[seq[i-1]]>=m[seq[i]]) return false; // pos of prev >= pos of cur

                
                if(!pre.count(seq[i])) pre[seq[i]] = i>0 ? m[seq[i-1]] : -1;
                else pre[seq[i]] = max(pre[seq[i]], i>0 ? m[seq[i-1]] : -1);
            }
        }

        for(int i=0; i<nums.size(); i++){
            if(pre[nums[i]] != i-1) return false;
        }
        return true;
    }
};
