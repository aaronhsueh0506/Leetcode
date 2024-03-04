class Solution {
public:
    int res = 0;
    int averageOfSubtree(TreeNode* root) {
        traversal(root);
        return res;
    }

    pair<int, int> traversal(TreeNode* root){
        if(!root) return {0,0};

        auto left = traversal(root->left);
        auto right = traversal(root->right);
        if((left.first + right.first + root->val) / (left.second + right.second + 1) == root->val) res++;

        return {(left.first + right.first + root->val), (left.second + right.second + 1)};
    }
};
