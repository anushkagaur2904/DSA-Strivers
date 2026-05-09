//Binary Search
//https://leetcode.com/problems/binary-search/
//for sorted arrays and unique arrays i.e no duplicates
//Real life example -> Dictionary

/*
[3, 4,  6,  7,  9,  12, 16, 17] n=8 target=5
low         mid             high
everything between low and high is search space
mid = (low+high)/2
*/

//+++++++ITERATIVE CODE+++++++++++
/*
f(arr,n,target){
    low=0,high=n-1
    while(low<=high){
        mid=(low+high)/2
        if(arr[mid]==target) return mid;
        else if(target>arr[mid]) low=mid+1
        else high =mid-1
    }
    return -1;
}
*/

//+++++RECURSIVE CODE++++++++
/*
f(arr,low,high,target){
    if(low>high){
        return -1;
    }
    mid=(low+high)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(target>arr[mid]){
        return f(arr,mid+1,high,target);
    }
    else{
        return f(arr,low,mid-1,target);
    }
}
*/

/*
TC => If initial size =32
then after step 1 size might be <=16
step 3 <=8
step 4 <=4
step 5 <=2
step 6 <=1
32 is 2 to the power of 5 
total of steps = 6
O(log n base 2)
*/

//+++++++++++OVERFLOW CLASE++++++++++++++++
/*
consider search space where low =0 and high = INT_MAX 
i.e it is not an array
if both low and high at INT_MAX
then mid = (INT_MAX + INT_MAX)/2
then it is overflow

solution : assign long long to low and high

or mid = low + (high-low)/2
    i.e low + (INT_MAX - INT_MAX)/2
and u can take both low and high as int
*/