// tc: O(N)
// sc: O(N)


int height(TreeNode* root){
        if(root==NULL)return 0;

        int lh=height(root->left);
        int rh=height(root->right);

        if((abs(lh-rh)>1) || (lh==-1 || rh==-1))return -1;

        return max(lh,rh)+1;
    }

    bool isBalanced(TreeNode* root) {
        if(height(root)==-1)return 0;
        else return 1;
    }

