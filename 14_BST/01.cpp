//Search in BST
//https://leetcode.com/problems/search-in-a-binary-search-tree/description/

/*
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        while(root !=NULL && root->val!=val){
            if(root->val > val){
                root=root->left;
            }
            else{
                root=root->right;
            }
        }
        return root;
    }
};
*/