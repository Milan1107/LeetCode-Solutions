// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     vector<int>ans;
//     int maxdepth = 0;
//     int currdepth = 0;
//     void rightView(TreeNode* root){
//         if(root==nullptr)
//         {
//             return;
//         }
        
//         currdepth++;

//         if(maxdepth<currdepth){
//             ans.push_back(root->val);
//             maxdepth = currdepth;
//         }

//         if(root->right!=nullptr && maxdepth==currdepth){
//             rightView(root->right);
//         }
//         else if(root->right!=nullptr && currdepth<maxdepth){
//             root = root->right;
//             rightView(root);
//         }

//         if(root->left!=nullptr && maxdepth==currdepth){
//             rightView(root->left);
//         }
//         else if(root->left!=nullptr && currdepth<maxdepth){
//             root = root->left;
//             rightView(root);
//         }
//         currdepth--;
//     }
//     vector<int> rightSideView(TreeNode* root) {
//         rightView(root);
//         return ans;
//     }
// };


class Solution {
public:
    vector<int> ans;

    void dfs(TreeNode* root, int depth) {
        if (root == nullptr) {
            return;
        }

        if (depth == ans.size()) {
            ans.push_back(root->val);
        }

        dfs(root->right, depth + 1);
        dfs(root->left, depth + 1);
    }

    vector<int> rightSideView(TreeNode* root) {
        dfs(root, 0);
        return ans;
    }
};
