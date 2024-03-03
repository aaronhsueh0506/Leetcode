class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return traversal(nums, 0, nums.size()-1);
    }

    TreeNode* traversal(vector<int>& nums, int left, int right){
        if(left>right) return nullptr;
        
        int mid = left + (right-left) / 2;
        TreeNode* cur = new TreeNode(nums[mid]);
        cur->left = traversal(nums, left, mid-1);
        cur->right = traversal(nums, mid+1, right);
        return cur;
    }
};
