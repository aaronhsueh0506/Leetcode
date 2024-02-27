class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
      
        if(n1>n2) findMedianSortedArrays(nums2, nums1);

        int k = (n1+n2+1)/2; // m1 + m2 = k = (n1+n2+1) / 2
        
        int left = 0, right = n1;
        while(left<right){
          int m1 = left + (right - left) / 2;
          int m2 = k - m1;
          if(nums1[m1] < nums2[m2-1]) left = mid+1; // ideal is nums1[m1-1] and nums2[m2-1], so check nums1[m1] < nums[m2-1], m1 need explore right side
          else right = mid;
        }
        // binary search will stop at nums1[m1] >= nums2[m2-1] 
        
        int m1 = left, m2 = k - left;
        int c1 = max(m1==0? INT_MIN : nums[m1-1], m2==0? INT_MIN: nums[m2-1]);
        if( (n1+n2) % 2 ) return c1;

        int c2 = min(m1==n1 ? INT_MAX: nums[m1], m2==n2? INT_MAX: nums[m2]);
        return (c1+c2)/2;
    }
};

// n1=3, n2=5 (k=4) -> median is number (4,5) 
// n1=4, n2=5 (k=5) -> median is number 5
