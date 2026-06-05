//Children Sum Property
//https://www.geeksforgeeks.org/problems/children-sum-parent/1

/*
class Solution {
  public:
    bool isSumProperty(Node *root) {

        // Empty tree or leaf node
        if (root == NULL ||
            (root->left == NULL && root->right == NULL))
            return true;

        int sum = 0;

        if (root->left)
            sum += root->left->data;

        if (root->right)
            sum += root->right->data;

        return (root->data == sum) &&
               isSumProperty(root->left) &&
               isSumProperty(root->right);
    }
};
*/

//Convert Binary Tree to Children Sum Property
/*
class Solution {
public:

    void reorder(Node* root) {

        if (root == NULL)
            return;

        int child = 0;

        if (root->left)
            child += root->left->data;

        if (root->right)
            child += root->right->data;

        // Top-down approach
        if (child >= root->data) {
            root->data = child;
        }
        else {
            if (root->left)
                root->left->data = root->data;

            if (root->right)
                root->right->data = root->data;
        }

        reorder(root->left);
        reorder(root->right);

        // Bottom-up approach
        int total = 0;

        if (root->left)
            total += root->left->data;

        if (root->right)
            total += root->right->data;

        if (root->left || root->right)
            root->data = total;
    }
};
*/