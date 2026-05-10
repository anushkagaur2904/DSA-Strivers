//Number of Times a Sorted array is Rotated
//https://www.geeksforgeeks.org/problems/rotation4723/1


/*
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        int start = 0;
        int end = n-1;
        
        while(start<=end){
            //already sorted
            if(arr[start] <= arr[end])
                return start;
            int mid = (start+end)/2;
            int next = (mid+1)%n;
            int prev = (mid+n-1)%n;
            
            if(arr[mid]<=arr[next] && arr[mid]<=arr[prev]){
                return mid;
            }
            else if(arr[start]<=arr[mid]){
                start=mid+1;
            }
            else if(arr[mid]<=arr[end]){
                end=mid-1;
            }
        }
        return 0;
    }
};

*/