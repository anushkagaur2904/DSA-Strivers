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

//Min/Max in BST
//https://www.geeksforgeeks.org/problems/minimum-element-in-bst/1

/*
class Solution {
  public:
    int minValue(Node* root) {
        // code here
        if(root==NULL){
            return -1;
        }
        while(root->left!=NULL){
            root=root->left;
        }
        return root->data;
    }
};
*/