//Median in a row-wise sorted Matrix
//https://www.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1

/*
“INT_MAX and INT_MIN are used as initial extremes to correctly compute the minimum and maximum matrix values.”

class Solution {
  public:

    // Function to find upper bound
    // Returns first index having value > x
    int upperBound(vector<int> &arr,
                   int x,
                   int n) {

        int low = 0;
        int high = n - 1;

        // Default answer
        // If no greater element exists,
        // answer will be n
        int ans = n;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            // Possible upper bound found
            if(arr[mid] > x) {

                ans = mid;

                // Search left side
                // for smaller index
                high = mid - 1;
            }

            else {

                // Move right
                low = mid + 1;
            }
        }

        return ans;
    }


    // Counts how many elements
    // are <= x in matrix
    int countSmallEqual(vector<vector<int>> &mat,
                        int x) {

        int n = mat.size();
        int m = mat[0].size();

        int cnt = 0;

        // Traverse every row
        for(int i = 0; i < n; i++) {

            // upperBound gives count
            // of elements <= x
            cnt += upperBound(mat[i], x, m);
        }

        return cnt;
    }


    // Function to find median
    int median(vector<vector<int>> &mat) {

        int n = mat.size();
        int m = mat[0].size();

        int low = INT_MAX;
        int high = INT_MIN;

        // Find minimum and maximum
        // element in matrix
        for(int i = 0; i < n; i++) {

            // First element of row
            // is minimum in that row
            low = min(low, mat[i][0]);

            // Last element of row
            // is maximum in that row
            high = max(high, mat[i][m - 1]);
        }

        // Required position of median
        int req = (n * m) / 2;

        // Binary search on values
        while(low <= high) {

            int mid = low + (high - low) / 2;

            // Count elements <= mid
            int smallEqual =
                countSmallEqual(mat, mid);

            // Median lies on right side
            if(smallEqual <= req) {

                low = mid + 1;
            }

            // Median lies on left side
            else {

                high = mid - 1;
            }
        }

        // Final answer
        return low;
    }
};
*/