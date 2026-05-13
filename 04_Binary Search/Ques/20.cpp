//Allocate Min pages
//https://www.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1

/*
class Solution {
  public:
    bool isValid(vector<int> &arr,int n,int k,int max){
        int student = 1;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum = sum + arr[i];
            if(sum>max){
                student++;//s1 ke baad s2 ko book dege
                sum = arr[i];
            }
            if(student>k) return false;
        }
        return true;
    }
    int findPages(vector<int> &arr, int k) {
        // code here
        int start = *max_element(arr.begin(), arr.end());;
        int sum =0;
        int n = arr.size();
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        int end = sum;
        int res = -1;
        
        //if number of books less than number of students
        if(n<k){
            return -1;
        }
        
        while(start<=end){
            int mid = start + (end-start)/2;
            if(isValid(arr,n,k,mid)==true){
                res=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
    }
};*/