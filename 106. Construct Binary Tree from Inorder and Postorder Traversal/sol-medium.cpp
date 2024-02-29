class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
      return build(inorder, postorder, 0, inorder.size()-1, 0, postorder.size()-1);
    }

    TreeNode* build(vector<int>& inorder, vector<int>& postorder, int ileft, int iright, int pleft, int pright){
      if(ileft > iright || pleft > pright) return nullptr;
      int i;
      for(i=ileft; i<iright; i++){
        if(inorder[i] == postorder[pright]) break;
      }

      TreeNode* cur = new TreeNode(postorder[pright]);
      cur->left = build(inorder, postorder, ileft, i-1, pleft, pleft+i-ileft-1);
      cur->right = build(inorder, postorder, i+1, iright, pleft+i-ileft, pright-1);
      return cur;
    } 
};

    
