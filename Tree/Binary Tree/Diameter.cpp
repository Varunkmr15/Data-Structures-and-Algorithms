TC:O(n)
SC:O(n)

int height(TreeNode* root,int &dm){
        if(root==NULL)return 0;

        int lh=height(root->left,dm);
        int rh=height(root->right,dm);
        dm=max(dm,lh+rh);
        return 1+max(lh,rh);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int dm=0;
        int var=height(root,dm);
        return dm;
    }
