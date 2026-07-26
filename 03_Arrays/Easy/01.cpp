//largest element in an array
//https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1

//BRUTE
/*
Sort then print arr[n-1]
TC => O(NlogN)
SC => O(1)
*/


//OPTIMAL
/*
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int largest = arr[0];
        int n= arr.size();
        for(int i=1;i<n;i++){
            if(arr[i]>largest){
                largest=arr[i];
            }
        }
        return largest;
        
    }
};
*/
//TC => O(N)

