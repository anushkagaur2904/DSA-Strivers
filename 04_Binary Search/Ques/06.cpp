//Searching in a Nearly Sorted Array
//https://www.geeksforgeeks.org/problems/search-in-an-almost-sorted-array/1

/*
// User function Template for C++
class Solution {
  public:
    int findTarget(vector<int>& arr, int target) {
        // code here
        int start = 0;
        int end = arr.size()-1;
        while(start<=end){
            int mid = (start) + (end-start)/2;
            
            if(arr[mid]==target) return mid;
            if(mid-1>=start && arr[mid-1]==target) return mid-1;
            if(mid+1<=end && arr[mid+1]==target) return mid+1;
            
            if(target<arr[mid]) end = mid-2;
            else start = mid+2;
        }
            return -1;
    }

};
*/