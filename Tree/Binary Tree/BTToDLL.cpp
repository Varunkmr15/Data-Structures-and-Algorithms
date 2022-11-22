// TC:O(N)
// SC:O(H)

Node *BTToDLL(Node *root){
    if(root==NULL)return root;
    static Node* prev = NULL;
    Node *head=BTToDLL(root->left);
    if(prev==NULL){head=root;}
    else{
        root->left=prev;
        prev->right=root;
    }
    prev=root;
    BTToDLL(root->right);
    return head;
}  
