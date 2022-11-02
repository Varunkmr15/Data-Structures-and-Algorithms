// tc:O(H)
// sc:O(H)
int prevv=INT_MIN;
bool isBST(Node* root)  
{  
    if (root == NULL)  
        return true;  
    
    if(isBST(root->left)==false)return false;
    
    if(root->key<=prevv)return false;
    prevv=root->key;
    
    return isBST(root->right);
}
