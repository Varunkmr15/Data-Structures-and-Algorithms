// TC:O(N)
// SC:O(N)

void printLevel(Node *root){
    if(root==NULL)return;
    queue<Node *>q;
    q.push(root);
    while(q.empty()==false){
        Node *curr=q.front();
        q.pop();
        cout<<curr->key<<" ";
        if(curr->left!=NULL)
            q.push(curr->left);
        if(curr->right!=NULL)
            q.push(curr->right);
    }
}  

vector<int> levelOrder(TreeNode* root) {
        vector<int> ans; 
        if(root == NULL) 
            return ans;  
        queue<TreeNode*> q; 
        q.push(root); 
        while(!q.empty()) {
            TreeNode *temp = q.front(); 
            q.pop(); 
            if(temp->left != NULL) 
                q.push(temp->left); 
            if(temp->right != NULL) 
                q.push(temp->right); 
            ans.push_back(temp->val); 
        }
        return ans; 
    }
