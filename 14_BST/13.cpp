//Construct BST from given keys
// OR Sorted Array to Balanced BST
//https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/

/*
class Solution {
public:
    TreeNode* helper(vector<int> &nums,int st,int end){
        if(st>end){
            return NULL;
        }
        int mid = st + (end-st)/2;
        TreeNode* root = new TreeNode(nums[mid]);

        root->left = helper(nums,st,mid-1);
        root->right = helper(nums,mid+1,end);

        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums,0,nums.size()-1);
    }
};
*/