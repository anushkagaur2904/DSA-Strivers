//Iterative Preorder Traversal in Binary Tree
//https://www.geeksforgeeks.org/problems/preorder-traversal-iterative/1

/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

/*
class Solution {
  public:
    vector<int> preOrder(Node* root) {
        // code here
        vector<int> preorder;
        if(root==NULL) return preorder;
        
        stack<Node*> st;
        st.push(root);
        
        while(!st.empty()){
            root=st.top();
            st.pop();
            preorder.push_back(root->data);
            if(root->right!=NULL){
                st.push(root->right);
            }
            if(root->left!=NULL){
                st.push(root->left);
            }
        }
        return preorder;
    }
};
*/
