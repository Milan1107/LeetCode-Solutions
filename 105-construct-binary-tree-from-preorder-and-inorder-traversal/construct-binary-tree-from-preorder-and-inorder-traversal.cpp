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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return buildTreeHelper(preorder,inorder,0,0,inorder.size()-1);
    }
private:
    TreeNode* buildTreeHelper(const vector<int>&preorder,const vector<int>&inorder,int preStart, int inStart, int inEnd){
        if(preStart>=preorder.size()||inStart>inEnd)
        {
            return nullptr;
        }
        int rootVal = preorder[preStart];
        TreeNode* root = new TreeNode(rootVal);

        int rootInd = inStart;
        while(rootInd<=inEnd && inorder[rootInd]!=rootVal)
        {
            rootInd++;
        }
        int leftTreeSize = rootInd - inStart;
        root->left = buildTreeHelper(preorder,inorder,preStart+1,inStart,rootInd-1);
        root->right = buildTreeHelper(preorder,inorder,preStart+leftTreeSize+1,rootInd+1,inEnd);

        return root;
    }
};

