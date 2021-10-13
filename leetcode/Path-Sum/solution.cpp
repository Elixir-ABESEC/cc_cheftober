// https://leetcode.com/problems/path-sum/

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == nullptr) 
            return false;
        else if(root->left == nullptr && root->right == nullptr && targetSum-root->val == 0)
            return true;
        else 
            return hasPathSum(root->left, targetSum-root->val) || hasPathSum(root->right, targetSum-root->val);
        
    }
};