/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        height(root, diameter); // Update diameter during height calculation
        return diameter;
    }

private:
    int height(TreeNode* root, int &diameter) {
        if (root == nullptr) {
            return 0; // Base case
        }

        int lh = height(root->left, diameter);  // Left subtree height
        int rh = height(root->right, diameter); // Right subtree height

        // Update the diameter: maximum path length through the current node
        diameter = max(diameter, lh + rh);

        // Return height of current node
        return 1 + max(lh, rh);
    }
};
