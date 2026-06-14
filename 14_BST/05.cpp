//Kth Largest
//https://www.geeksforgeeks.org/problems/kth-largest-element-in-bst/1

/*
class Solution {
public:

    int countNodes(TreeNode* root) {

        if(root == NULL)
            return 0;

        return 1 +
               countNodes(root->left) +
               countNodes(root->right);
    }

    int cnt = 0;
    int ans = 0;

    void inorder(TreeNode* root, int k) {

        if(root == NULL)
            return;

        inorder(root->left, k);

        cnt++;

        if(cnt == k) {
            ans = root->val;
            return;
        }

        inorder(root->right, k);
    }

    int kthLargest(TreeNode* root, int K) {

        int N = countNodes(root);

        int kthSmallestPos = N - K + 1;

        inorder(root, kthSmallestPos);

        return ans;
    }
};
*/