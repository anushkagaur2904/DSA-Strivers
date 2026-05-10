//First and last occurrences of x in sorted array
//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
//GIVEN: SORTED ARRAY
/*
arr[] = [2,4,6,8,8,8,11,13]

x=8 {3,5}
x=10 {-1,-1}
x=11 {6,6}
*/
//+++++++++APPROACH 1 +++++++++++++++
/*
use linear search
first=-1;
last=-1;
for(i=0 to n-1){
    if(arr[i]==x){
        if(first==-1){
            first=i;
        }
        last=i;
    }
}
TC => O(N)
*/

//+++++++APPROACH 2 ++++++++++
/*
lower bound arr[ind]>=x
upper bound arr[ind]>x

first check whether number exists or not
if x=14 then it will point to hypothetical index

first occurence = lower bound
last = lower bound -1

if(lb==n || arr[lb]!=x ) return {-1,-1} // that means element not found

return (lb, upperbound(arr,n,x));
TC => 2*O(log n base 2) i.e lb*ub ki TC
SC => O(1)

int lowerBound(vector<int>& arr, int target) {
        // code here
        int n= arr.size();
        int low=0;
        int high=n-1;
        int ans=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]>=target){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
}

int upperBound(vector<int>& arr, int target) {
        // code here
        int n= arr.size();
        int low=0;
        int high=n-1;
        int ans=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]>target){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
}

int find(vector<int>& arr,int n,int x){
    int lb = lowerBound(arr,n,k);
    if(lb==n || arr[lb]!=x) return {-1,-1};
    return {lb,upperBound(arr,n,x)-1}
}
*/


//++++++APPROACH 3+++++++++
/*
use binary search to find both
firstOccur(arr,n,x){
    low=0;
    high=n-1;
    first=-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==x){
            first=mid;
            high=mid-1;
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1; //if arr[mid]>x
        }
    }
}

lastOccur(arr,n,x){
    low=0;
    high=n-1;
    last=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            last=mid;
            low=mid+1;
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
}
*/

