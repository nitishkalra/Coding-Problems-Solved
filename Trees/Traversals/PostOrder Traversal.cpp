void postOrderTraversal(TreeNode* root, vector<int>& v){
    if(root == NULL) return;

    postOrderTraversal(root->left, v);
    postOrderTraversal(root->right, v);

    v.push_back(root->val);
}
vector<int> postorderTraversal(TreeNode* root) {
    vector<int> postOrder;
        
    postOrderTraversal(root, postOrder);
    return postOrder;
}