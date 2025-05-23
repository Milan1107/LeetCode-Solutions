class Solution {
public:
    void makeflatten(TreeNode* root, TreeNode*& prev) {
        if (root == nullptr) {
            return;
        }
        makeflatten(root->right, prev); 
        makeflatten(root->left, prev);  
        root->right = prev;            
        root->left = nullptr;         
        prev = root;                   
    }

    void flatten(TreeNode* root) {
        TreeNode* prev = nullptr; 
        makeflatten(root, prev);
    }
};
