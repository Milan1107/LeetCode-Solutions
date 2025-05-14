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
    map<int, map<int, multiset<int>>> nodes; 
    
    void dfs(TreeNode* root, int row, int col) {
        if (root == nullptr) {
            return;
        }
     
        nodes[col][row].insert(root->val);
        
        dfs(root->left, row + 1, col - 1);
        dfs(root->right, row + 1, col + 1); 
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        dfs(root, 0, 0);
        
        vector<vector<int>> result;
        for (auto& [col, rows] : nodes) {
            vector<int> column;
            for (auto& [row, values] : rows) {
                column.insert(column.end(), values.begin(), values.end());
            }
            result.push_back(column);
        }
        
        return result;
    }
};