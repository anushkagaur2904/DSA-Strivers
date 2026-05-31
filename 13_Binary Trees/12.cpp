//Maximum Path Sum
//https://leetcode.com/problems/binary-tree-maximum-path-sum/description/

/*
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        maxPathDown(root,maxi);
        return maxi;
    }
    int maxPathDown(TreeNode* node,int &maxi){
        if(node==NULL) return 0;
        int left = max(0,maxPathDown(node->left,maxi));
        //if negative return 0
        int right = max(0,maxPathDown(node->right,maxi));
        maxi = max(maxi,left+right+node->val);
        return max(left,right)+node->val;
    }
};
*/