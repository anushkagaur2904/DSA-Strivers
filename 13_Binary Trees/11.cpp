//Diameter of BT
//https://leetcode.com/problems/diameter-of-binary-tree/description/

//+++++++BRUTE++++++++++
/*
class Solution {
public:
    // Global variable to
    // store the diameter
    int diameter = 0;  

    // Function to calculate
    // the height of a subtree
    int calculateHeight(Node* node) {
        if (node == nullptr) {
            return 0;
        }

        // Recursively calculate the
        // height of left and right subtrees
        int leftHeight = calculateHeight(node->left);
        int rightHeight = calculateHeight(node->right);

        // Calculate the diameter at the current
        // node and update the global variable
        diameter = max(diameter, leftHeight + rightHeight);

        // Return the height
        // of the current subtree
        return 1 + max(leftHeight, rightHeight);
    }

    // Function to find the
    // diameter of a binary tree
    int diameterOfBinaryTree(Node* root) {
        // Start the recursive
        // traversal from the root
        calculateHeight(root);

        // Return the maximum diameter
        // found during traversal
        return diameter;
    }
};

*/

//+++++++OPTIMAL+++++++++++
/*
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        height(root,diameter);
        return diameter;
    }
private:
    int height(TreeNode* node,int& diameter){
        if(!node){
            return 0;
        }
        int lh = height(node->left,diameter);
        int rh = height(node->right,diameter);
        diameter = max(diameter,lh+rh);
        return 1 + max(lh,rh);
    }
};
*/