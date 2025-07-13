class Solution {
public:
    int findSecondMinimumValue(TreeNode* root) {
        if (!root || !root->left) return -1;

        int leftVal = root->left->val;
        int rightVal = root->right->val;

        if (leftVal == root->val) {
            leftVal = findSecondMinimumValue(root->left);
        }

        if (rightVal == root->val) {
            rightVal = findSecondMinimumValue(root->right);
        }

        if (leftVal != -1 && rightVal != -1) {
            return min(leftVal, rightVal);
        } else if (leftVal != -1) {
            return leftVal;
        } else {
            return rightVal;
        }
    }
};
