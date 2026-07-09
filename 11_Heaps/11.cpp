//Merge K Sorted Arrays
//https://www.geeksforgeeks.org/problems/merge-k-sorted-arrays/1

/*
class Node {
public:
    int val;
    int arrayPos;
    int valuePos;

    Node(int v, int ap, int vp) {
        val = v;
        arrayPos = ap;
        valuePos = vp;
    }
};

struct myComp {
    bool operator()(const Node &d1, const Node &d2) const {
        return d1.val > d2.val;   // Min Heap
    }
};

class Solution {
public:
    vector<int> mergeArrays(vector<vector<int>> &mat) {

        vector<int> ans;

        priority_queue<Node, vector<Node>, myComp> pq;

        int k = mat.size();

        // Push first element of each array
        for(int i = 0; i < k; i++) {
            if(!mat[i].empty()) {
                pq.push(Node(mat[i][0], i, 0));
            }
        }

        while(!pq.empty()) {

            Node curr = pq.top();
            pq.pop();

            ans.push_back(curr.val);

            int ap = curr.arrayPos;
            int vp = curr.valuePos;

            // Push next element from the same array
            if(vp + 1 < mat[ap].size()) {
                pq.push(Node(mat[ap][vp + 1], ap, vp + 1));
            }
        }

        return ans;
    }
};
*/