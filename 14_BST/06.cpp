//Validate BST or NOT
//https://leetcode.com/problems/validate-binary-search-tree/description/

/*
class Solution {
public:
    bool isValidCheck(TreeNode* root,long long minRange,long long maxRange){
        if(root==NULL) return true;
        if(root->val >= maxRange || root->val <= minRange) return false;
        return isValidCheck(root->left,minRange,root->val) 
            && isValidCheck(root->right,root->val,maxRange);
    }
    bool isValidBST(TreeNode* root) {
        return isValidCheck(root,LONG_LONG_MIN,LONG_LONG_MAX);
    }
};
*/