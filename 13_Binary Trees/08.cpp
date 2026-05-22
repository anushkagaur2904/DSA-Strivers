//Preorder Inorder Postorder Traversals in One Traversal 

/*
vector<int> preInPostTraversal(Node* root){
    stack<pair<Node*,int>> st;
    st.push(root,1);
    vector<int> pre,in,post;
    if(root==NULL) return;

    while(!st.empty()){
        auto it = st.top();
        st.pop();

        //this is part of pre
        //increment 1 to 2
        //push the left side of tree
        if(it.second==1){
            pre.push_back(it.first->val);
            it.second++;
            st.push(it);

            if(it.first->left !=NULL){
                st.push(it.first->left,1);
            }
        }

        //this is part of in
        //increment 2 to 3
        //push the right side of tree
        else if(it.second==2){
            in.push_back(it.first->val);
            it.second++;
            st.push(it);

            if(it.first->right!=NULL){
                st.push(it.first->right,1);
            }
        }
        //dont push it back again
        else{
            post.push_back(it.first->val);
        }
        
    }
};
*/