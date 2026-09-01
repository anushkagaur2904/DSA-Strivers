//LOWER BOUND
//https://www.geeksforgeeks.org/problems/implement-lower-bound/1
//it is the smallest index such that arr[index]>=x where x is a given number

//ARRAY HAS TO BE SORTED
/*
arr[] = [3,5,8,15,19] n=5
if x=8 then lower bound number is 8 and index is 2
if x=15 index is 3
if x=20 index is 5(hypothetical index)

if arr[] = [3,5,8,15,19,19,19] n=7
if x=19 index is 4

if arr[] = [1,2,3,3,7,8,9,9,9,11]
can be implemented using linear search
TC => O(N)

HINT : SINCE ARRAY IS SORTED USE BINARY SEARCH
let ans=10 (hypothetical index)
mid = 0+9/2 = 4  now 7>=1
now ans =4
mid = 0+3/2 = 1 now 2>=1
ans = 1
mid = 0+1/2 = 0 now 1>=1
ans=0
*/

/*
f(arr,target,n){
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]>=x){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}

*/

/*
lb = lower_bound(arr.begin(),arr.end(),x) - arr.begin()
ub = upper_bound(arr.begin(),arr.end(),x) - arr.begin()
*/
