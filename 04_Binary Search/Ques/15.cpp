//Search in Row wise And Column wise Sorted Array

/*
class Solution {
public:

    pair<int,int> searchMatrix(vector<vector<int>>& arr,
                               int key) {

        int n = arr.size();
        int m = arr[0].size();

        // Start from top-right corner
        int i = 0;
        int j = m - 1;

        while(i >= 0 && i < n &&
              j >= 0 && j < m) {

            // Element found
            if(arr[i][j] == key) {

                return {i, j};
            }

            // Move left
            else if(arr[i][j] > key) {

                j--;
            }

            // Move down
            else {

                i++;
            }
        }

        // Element not found
        return {-1, -1};
    }
};
*/