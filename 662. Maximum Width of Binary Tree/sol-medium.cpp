class Solution {
public:
    vector<int> lefts;

    int widthOfBinaryTree(TreeNode* root) {
        return traversal(root, 0, 1);
    }

    int traversal(TreeNode* root, int level, unsigned id){
      if(!root) return 0;
      if(depth == left.size()) lefts.push_back(id);
      unsigned subtree = max(traversal(root->left, level+1, id<<1), traversal(root->right, level+1, id<<1 + 1));
      return max(subtree, id - left[level] + 1);
};
