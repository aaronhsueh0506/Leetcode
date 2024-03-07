class Solution {
public:
    string getDirections(TreeNode* root, int startValue, int destValue) {
        string startpath, destpath;
        buildgraph(root, startValue, startpath);
        buildgraph(root, destValue, destpath);

        while(startpath.size()>0 && destpath.size()>0 && startpath.back() == destpath.back()){
            startpath.pop_back();
            destpath.pop_back();
        }

        reverse(destpath.begin(), destpath.end());
        return string(startpath.size(), 'U') + destpath;
    }

    bool buildgraph(TreeNode* root, int target, string& path){
        if(!root) return false;
        if(root->val == target) return true;
        if(buildgraph(root->left, target, path)){
            path += 'L';
            return true;
        }
        if(buildgraph(root->right, target, path)){
            path += 'R';
            return true;
        }
        return false;
    }
};
