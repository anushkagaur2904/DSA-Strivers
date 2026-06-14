//Floor in BST
//https://www.geeksforgeeks.org/problems/closest-neighbor-in-bst/1

/*
class Solution {
  public:
    int findMaxFork(Node* root, int k) {
        // code here
        int floor = -1;
        while(root){
            if(root->data==k){
                floor=root->data;
                return floor;
            }
            if(k>root->data){
                floor = root->data;
                root=root->right;
            }
            else{
                root=root->left;
            }
        }
        return floor;
    }
};
*/