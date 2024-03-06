class Solution {
public:
    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
        TreeNode* res = nullptr;
        while(root){
            if(root->val <= p->val){
                root = root->right;
            }
            else{
                res = root;
                root = root->left;
            }
        }
        return res;
    }
};
