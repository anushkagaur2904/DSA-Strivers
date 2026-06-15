//BST Iterator
//https://leetcode.com/problems/binary-search-tree-iterator/description/

/*
class BSTIterator {
public:
    stack<TreeNode*> myStack;
    void pushAll(TreeNode* node){
        for(;node!=NULL;myStack.push(node),node=node->left);
    }
    BSTIterator(TreeNode* root) {
        pushAll(root);
    }
    
    int next() {
        TreeNode* topNode = myStack.top();
        myStack.pop();
        pushAll(topNode->right);
        return topNode->val;
    }
    
    bool hasNext() {
        return !myStack.empty();
    }
};
*/