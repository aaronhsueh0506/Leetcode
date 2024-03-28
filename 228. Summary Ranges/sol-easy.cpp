class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;

        for(int i=0; i<nums.size(); i++){
            int j = i;
            while(j<nums.size()-1 && nums[j+1]==nums[j]+1) j++;

            string str;
            str += to_string(nums[i]);
            if(j!=i){
                str += "->" + to_string(nums[j]);
                i = j;
            }
            res.push_back(str);
        }
        return res;
    }
};
