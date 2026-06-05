//Minimum time taken to BURN the Binary Tree from a Node
//https://www.geeksforgeeks.org/problems/burning-tree/1

/*
class Solution {
public:

    Node* bfsToMapParents(Node* root,
                          unordered_map<Node*, Node*>& mpp,
                          int target) {

        queue<Node*> q;
        q.push(root);

        Node* res = NULL;

        while (!q.empty()) {

            Node* node = q.front();
            q.pop();

            if (node->data == target)
                res = node;

            if (node->left) {
                mpp[node->left] = node;
                q.push(node->left);
            }

            if (node->right) {
                mpp[node->right] = node;
                q.push(node->right);
            }
        }

        return res;
    }

    int findMaxDistance(unordered_map<Node*, Node*>& mpp,
                        Node* target) {

        queue<Node*> q;
        q.push(target);

        unordered_map<Node*, int> vis;
        vis[target] = 1;

        int maxi = 0;

        while (!q.empty()) {

            int sz = q.size();
            int flag = 0;

            for (int i = 0; i < sz; i++) {

                Node* node = q.front();
                q.pop();

                // Left child
                if (node->left && !vis[node->left]) {
                    flag = 1;
                    vis[node->left] = 1;
                    q.push(node->left);
                }

                // Right child
                if (node->right && !vis[node->right]) {
                    flag = 1;
                    vis[node->right] = 1;
                    q.push(node->right);
                }

                // Parent
                if (mpp[node] && !vis[mpp[node]]) {
                    flag = 1;
                    vis[mpp[node]] = 1;
                    q.push(mpp[node]);
                }
            }

            if (flag)
                maxi++;
        }

        return maxi;
    }

    int minTime(Node* root, int target) {

        unordered_map<Node*, Node*> mpp;

        Node* targetNode =
            bfsToMapParents(root, mpp, target);

        return findMaxDistance(mpp, targetNode);
    }
};
*/