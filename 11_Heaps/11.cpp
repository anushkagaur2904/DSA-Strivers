//Merge K Sorted Arrays
//https://www.geeksforgeeks.org/problems/merge-k-sorted-arrays/1

/*
// Class to store an element along with
// the array number and its index in that array
class data {
public:
    int val;        // Current element
    int arrayPos;   // Which array it belongs to
    int valuePos;   // Index of element in that array

    data(int v, int ap, int vp) {
        val = v;
        arrayPos = ap;
        valuePos = vp;
    }
};

// Comparator for Min Heap
struct myComp {
    bool operator()(const data &d1, const data &d2) const {
        // Element with smaller value gets higher priority
        return d1.val > d2.val;
    }
};

class Solution {
public:
    vector<int> mergeArrays(vector<vector<int>> &mat) {

        vector<int> ans;

        // Min Heap storing objects of class data
        priority_queue<data, vector<data>, myComp> pq;

        int k = mat.size();

        // Push first element of every array into the heap
        for (int i = 0; i < k; i++) {

            // Ignore empty arrays
            if (!mat[i].empty()) {

                // (value, array number, index in array)
                pq.push(data(mat[i][0], i, 0));
            }
        }

        // Continue until heap becomes empty
        while (!pq.empty()) {

            // Get the smallest element
            data curr = pq.top();
            pq.pop();

            // Store it in the answer
            ans.push_back(curr.val);

            int ap = curr.arrayPos;
            int vp = curr.valuePos;

            // If next element exists in the same array,
            // push it into the heap
            if (vp + 1 < mat[ap].size()) {

                pq.push(data(mat[ap][vp + 1], ap, vp + 1));
            }
        }

        return ans;
    }
};
*/