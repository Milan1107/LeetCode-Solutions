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
    vector<int>ans;
    void preorderSolution(TreeNode* root){
        if(root==nullptr) return;
        ans.push_back(root->val);
        preorderSolution(root->left);
        preorderSolution(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        preorderSolution(root);
        return ans;
    }
};