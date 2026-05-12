//Search an element in bitonic array

/*
class Solution {
public:

    // Find peak element index in bitonic array
    int findPeak(vector<int>& arr) {

        int n = arr.size();

        int low = 0;
        int high = n - 1;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            // Peak element found
            if(mid > 0 && mid < n - 1) {

                if(arr[mid] > arr[mid - 1] &&
                   arr[mid] > arr[mid + 1]) {

                    return mid;
                }

                // Move left
                else if(arr[mid - 1] > arr[mid]) {

                    high = mid - 1;
                }

                // Move right
                else {

                    low = mid + 1;
                }
            }

            // First element
            else if(mid == 0) {

                if(arr[0] > arr[1])
                    return 0;

                else
                    return 1;
            }

            // Last element
            else if(mid == n - 1) {

                if(arr[n - 1] > arr[n - 2])
                    return n - 1;

                else
                    return n - 2;
            }
        }

        return -1;
    }

    // Binary Search on Ascending Array
    int binarySearchAsc(vector<int>& arr,
                        int low,
                        int high,
                        int target) {

        while(low <= high) {

            int mid = low + (high - low) / 2;

            if(arr[mid] == target) {

                return mid;
            }

            else if(arr[mid] < target) {

                low = mid + 1;
            }

            else {

                high = mid - 1;
            }
        }

        return -1;
    }

    // Binary Search on Descending Array
    int binarySearchDesc(vector<int>& arr,
                         int low,
                         int high,
                         int target) {

        while(low <= high) {

            int mid = low + (high - low) / 2;

            if(arr[mid] == target) {

                return mid;
            }

            // Reverse logic because descending
            else if(arr[mid] < target) {

                high = mid - 1;
            }

            else {

                low = mid + 1;
            }
        }

        return -1;
    }

    // Search element in bitonic array
    int searchBitonic(vector<int>& arr, int target) {

        int n = arr.size();

        // Step 1: Find peak index
        int peak = findPeak(arr);

        // Step 2: Search in ascending part
        int left = binarySearchAsc(arr,
                                   0,
                                   peak,
                                   target);

        if(left != -1) {

            return left;
        }

        // Step 3: Search in descending part
        return binarySearchDesc(arr,
                                peak + 1,
                                n - 1,
                                target);
    }
};
*/