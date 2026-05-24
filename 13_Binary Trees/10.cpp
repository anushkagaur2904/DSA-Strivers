//Check for Balanced Binary Tree
//https://leetcode.com/problems/balanced-binary-tree/description/

//+++++++BRUTE++++++++
/*
Bool check(Node){
    if node==null return;

    Lh = findHLeft(node->left);
    Rh = findHRight(node->right);

    if(abs(Rh-Lh)>1) return false;

    Bool left = check(node->left);
    Bool right = check(node->right);

    if(!left || !right) return false;

    return true;
}
TC => O(N)*O(N)

*/

//++++++++OPTIMAL++++++++++
/*
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return dfsHeight(root)!=-1;
        //if function returns -1 then not balanced
        //if it returns height then balanced
    }
    int dfsHeight(TreeNode *root){
        if(root == NULL) return 0;

        int leftHeight = dfsHeight(root->left);
        if(leftHeight == -1) return -1;
        int rightHeight = dfsHeight(root->right);
        if(rightHeight == -1) return -1;

        if(abs(leftHeight-rightHeight)>1) return -1;
        return max(leftHeight,rightHeight)+1;
    }
};
*/