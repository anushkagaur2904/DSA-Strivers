//Move all negative elements to one side of array
//https://www.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1

/*
“We need to move all negative numbers to the end while preserving order,
so I’ll use a stable approach with extra space, then copy back (in-place modification of array).”

class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // code here
        vector<int> temp;
        for(int x:arr){
            if(x>=0){
                temp.push_back(x);
            }
        }
        for(int x:arr){
            if(x<0){ // do not do x<=0 here 
                temp.push_back(x);
            }
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=temp[i];
        }
    }
};
Complexity
Time: O(n)
Space: O(n)
*/

