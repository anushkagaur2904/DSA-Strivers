//Iterative Postorder Traversal using 1 Stack 
//https://www.geeksforgeeks.org/problems/postorder-traversal-iterative/1

/*
class Solution {
public:
    vector<int> postOrder(Node* node) {
        vector<int> post;

        if (node == NULL) {
            return post;
        }

        stack<Node*> st;
        Node* curr = node;
        Node* temp;

        while (curr != NULL || !st.empty()) {

            if (curr != NULL) {
                st.push(curr);
                curr = curr->left;
            }
            else {
                temp = st.top()->right;

                // If right child does not exist
                if (temp == NULL) {
                    temp = st.top();
                    st.pop();
                    post.push_back(temp->data);

                    // Check if popped node is right child
                    while (!st.empty() && temp == st.top()->right) {
                        temp = st.top();
                        st.pop();
                        post.push_back(temp->data);
                    }
                }
                else {
                    curr = temp;
                }
            }
        }

        return post;
    }
};
*/