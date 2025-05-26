class Solution {
public:
    // Helper function to check if two trees are identical
    bool isSameTree(TreeNode* s, TreeNode* t) {
        if (!s && !t) return true; // Both trees are empty
        if (!s || !t) return false; // One tree is empty
        return (s->val == t->val) && isSameTree(s->left, t->left) && isSameTree(s->right, t->right);
    }

    // Function to check if subRoot is a subtree of root
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!root) return false; // Reached the end of the main tree
        if (isSameTree(root, subRoot)) return true; // Found a matching subtree
        // Recursively check left and right subtrees
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};
