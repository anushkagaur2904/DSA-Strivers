//Size of Largest BST in BT
//https://leetcode.com/problems/maximum-sum-bst-in-binary-tree/description/


//TO GET SIZE
/*
class NodeValue{
    public:
    int maxNode,minNode,maxSize;
    NodeValue(int minNode,int maxNode,int maxSize){
        this->maxNode = maxNode;
        this->minNode = minNode;
        this->maxSize = maxSize;
    }
};

class Solution {
public:
    int maxSumBST(TreeNode* root){
        return largestBSTSubtree(root).maxSize;
    }
    int largestBSTSubtree(TreeNode* root) {
        if(!root){
            return NodeValue(INT_MAX,INT_MIN,0);
        }
        //get values from left and right subtree of current tree
        auto left = largestBSTSubtree(root->left);
        auto right = largestBSTSubtree(root->right);

        //current node is greater than max in left and smaller than min right
        if(left.maxNode<root->val && right.minNode>root->val){
            //it is BST
            return NodeValue(min(root->val,left.minNode),max(root->val,right.maxNode),left.maxSize+right.maxSize+1);
        }
        //otherwise return [-inf,inf] so that parent cant be valid BST
        return NodeValue(INT_MIN,INT_MAX,max(left.maxSize,right.maxSize));
    }
};
*/

//TO GET SUM
/*
class NodeValue{
public:
    int minNode;
    int maxNode;
    int sum;

    NodeValue(int minNode,int maxNode,int sum){
        this->minNode=minNode;
        this->maxNode=maxNode;
        this->sum=sum;
    }
};

class Solution {
public:

    int ans=0;

    NodeValue solve(TreeNode* root){

        if(root==NULL)
            return NodeValue(INT_MAX,INT_MIN,0);

        auto left=solve(root->left);
        auto right=solve(root->right);

        if(left.maxNode<root->val &&
           right.minNode>root->val){

            int currSum=
                left.sum+
                right.sum+
                root->val;

            ans=max(ans,currSum);

            return NodeValue(
                min(root->val,left.minNode),
                max(root->val,right.maxNode),
                currSum
            );
        }

        return NodeValue(INT_MIN,INT_MAX,0);
    }

    int maxSumBST(TreeNode* root) {

        solve(root);

        return ans;
    }
};
*/