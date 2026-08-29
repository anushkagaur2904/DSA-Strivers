//Floor and ceil in sorted array
//floor => largest no. in array <=x
//ceil => smallest no. in array >=x
//https://www.geeksforgeeks.org/problems/ceil-in-a-sorted-array/1
//https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1
/*
if arr[] = [10,20,30,40,50] x=25
floor = 20 ceil = 30

if x= 20 floor=ceil=20
CEIL IS LOWER BOUND
if no number exists then ceil is -1

for floor its just the reversal of signs
floor(arr,x){
    ans=-1;
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]<=x){
            ans=arr[mid];
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
}
*/

