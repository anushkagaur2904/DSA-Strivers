//Preorder traversal
//https://leetcode.com/problems/binary-tree-preorder-traversal/

/*
class Solution {
public:

    vector<int> ans;

    void preorder(TreeNode* root) {

        // Base case
        if(root == NULL)
            return;

        // Root
        ans.push_back(root->val);

        // Left subtree
        preorder(root->left);

        // Right subtree
        preorder(root->right);
    }

    vector<int> preorderTraversal(TreeNode* root) {

        preorder(root);

        return ans;
    }
};

TC => O(N)
SC => auxiliary space of height of tree O(N)
*/


//Inorder Traversal
//https://leetcode.com/problems/binary-tree-inorder-traversal/

/*
class Solution {
public:
    vector<int> ans;
    
    void inorder(TreeNode* root){
        if(root==NULL) return;
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return ans;
    }
};
*/

//PostOrder Traversal
//https://leetcode.com/problems/binary-tree-postorder-traversal/description/

/*
class Solution {
public:
    vector<int> ans;
    
    void postorder(TreeNode* root){
        if(root==NULL) return;
        postorder(root->left);
        postorder(root->right);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        postorder(root);
        return ans;
    }
};
*/