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
    int maxx=0;
    int curr=0;
    void calHeight(TreeNode* root)
    {
        if(root == nullptr)
        {   
            return;
        }
        curr++;
        if(curr>maxx)
        {
            maxx = curr;
        }
        calHeight(root->left);
        calHeight(root->right);
        curr--;

    }
    int maxDepth(TreeNode* root) {
        calHeight(root);
        return maxx;
    }
};