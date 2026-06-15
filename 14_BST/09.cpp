//Inorder Successor in BST
//https://www.geeksforgeeks.org/problems/inorder-successor-in-bst/1

/*
  class Solution {
  public:
    int inOrderSuccessor(Node *root, Node *k) {
        // code here
        int successor = -1;
        while(root!=NULL){
            if(k->data >= root->data){
                root=root->right;
            }
            else{
                successor=root->data;
                root=root->left;
            }
        }
        return successor;
    }
};

*/