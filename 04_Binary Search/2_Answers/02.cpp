//Nth Root of a Number Using Binary Search
//https://www.geeksforgeeks.org/problems/find-nth-root-of-m5843/1

/*
class Solution {
  public:

    // Function to calculate num^n
    long long multiply(int num, int n) {

        long long ans = 1;

        for(int i = 0; i < n; i++) {

            ans *= num;
        }

        return ans;
    }

    int nthRoot(int n, int m) {
        
        if(m == 0)
        return 0;
        
        int low = 1;
        int high = m;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            long long value = multiply(mid, n);

            // Perfect nth root found
            if(value == m) {

                return mid;
            }

            // Search right half
            else if(value < m) {

                low = mid + 1;
            }

            // Search left half
            else {

                high = mid - 1;
            }
        }

        // No integer nth root exists
        return -1;
    }
};
*/