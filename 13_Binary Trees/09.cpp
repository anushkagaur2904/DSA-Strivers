//Maximum Depth of Binary Tree
//https://leetcode.com/problems/maximum-depth-of-binary-tree/

/*
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr) return 0;

        int leftHeight = maxDepth(root->left);
        int rightHeight = maxDepth(root->right);
        
        return 1+max(rightHeight,leftHeight);
    }
};
*/