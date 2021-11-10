void postOrderTraversal(TreeNode* root, vector<int>& v){
        if(root == NULL) return;
        
        v.push_back(root->val);

        postOrderTraversal(root->left, v);
        postOrderTraversal(root->right, v);
    }
vector<int> postorderTraversal(TreeNode* root) {
    vector<int> postOrder;
        
    postOrderTraversal(root, postOrder);
    return postOrder;
}