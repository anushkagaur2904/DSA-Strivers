//Subset Sum I
//https://www.geeksforgeeks.org/problems/subset-sums2234/1

/*
class Solution {
  public:
    void func(int index,int sum,vector<int> &arr,int n, vector<int> &sumSubset){
        if(index==n){
            sumSubset.push_back(sum);
            return;
        }
        //pick the element
        func(index+1,sum+arr[index],arr,n,sumSubset);
        
        //do not pick the element
        func(index+1,sum,arr,n,sumSubset);
    }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> sumSubset;
        func(0,0,arr,n,sumSubset);
        return sumSubset;
    }
*/