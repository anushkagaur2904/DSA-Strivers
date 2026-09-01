//Find out how many times the array is rotated
//https://www.geeksforgeeks.org/problems/rotation4723/1

/*
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        int l=0,r=n-1;

        while(l<r){
            int mid = l + (r-l)/2;

            if(arr[mid]>arr[r]){
                l=mid+1;
            }
            else{
                r=mid;
            }
        }
        return r;
    }
};

*/