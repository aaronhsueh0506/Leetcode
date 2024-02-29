class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
      return build(preorder, inorder, 0, preorder.size()-1, 0, inorder.size()-1);
    }

    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int pleft, int pright, int ileft, int iright){
      if(pleft > pright || ileft > iright) return nullptr;
      int i;
      for(i=ileft; i<iright; i++){
        if(preorder[pleft] == inorder[i]) break;
      }

      TreeNode* cur = new TreeNode(preorder[pleft]);
      cur->left = build(preorder, inorder, pleft+1, pleft+i-ileft, ileft, i-1); // inorder[ileft] ~inorder[i-1] is left subtree
      cur->right = build(preorder, inorder, pleft+i-ileft+1, pright, i+1, iright); // inorder[i+1] ~ inorder[iright] is right tree
      return cur;
    }
};
