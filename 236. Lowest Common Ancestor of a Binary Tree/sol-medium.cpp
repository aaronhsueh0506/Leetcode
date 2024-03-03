class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root || p==root || q==root) return root;
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);
        if(left && right) return root;
        return left? left: right;
    }
};

// check 6, 4
// left(5) -> left(6) return 6
//         -> right(2) -> left(7) -> left return null
//                     -> right(4) -> right return 4
//         == root(5) -> left(6), right(4) -> return 5
// right(1) -> null
