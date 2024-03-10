class Solution {
public:
    int maximumLength(string s) {
        int left = 0, n = s.size(), right = n;
        while(left<right){
            int mid = left + (right - left) / 2;
            if(isvalid(s, mid)){
                left = mid+1;
            }
            else{
                right = mid;
            }
        }
        return left == 0 ? -1 : left-1;
    }

    bool isvalid(string& s, int length){
        if(length == 0) return false;
        int n = s.size();
        vector<int> count(26);
        for(int i=0; i<n;){
            int j = i+1;
            while(j<n && s[j]==s[i]) j++;

            int c = s[i] - 'a';
            count[c] += max(0, (j-i) - (length-1));
            if(count[c]>=3) return true;
            i = j;
        }
        return false;
    }
};
