// TC:O(N)
// SC:O(H)

int getMax(Node *root){
    if(root==NULL)
        return INT_MIN;
    else
        return max(root->key,max(getMax(root->left),getMax(root->right)));
} 
