//Longest subarray with sum K(positives & Negatives)
//subarray is contiguous part of an array
//Give length of the longest subarray with sum K
//https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1
//+++++++++BRUTE++++++++
/*
Generate all subarrays and check sum of each subarray and if sum is K then update max length
subarray-> i to j
entire array is also subarray

2 pointer approach
1. Initialize two pointers, start and end, to the beginning of the array.

for(i=0;i<n;i++){
    for(j=i;j<n;j++){
        sum =0;
        for(k=i;k<=j;k++){
            sum+=arr[k];
        }
        if(sum==k){
            maxlen = max(maxlen,j-i+1);
        }
    }
}
print(maxlen);

TC: O(n^3) because we are generating all subarrays and calculating sum for each subarray
*/


//+++++++++BETTER++++++++
/*
add the new element to the sum and check if sum is K then update max length

for(i=0;i<n;i++){
    sum =0;
    for(j=i;j<n;j++){
        sum+=arr[j];
        if(sum==k){
            maxlen = max(maxlen,j-i+1);
        }
    }
}
print(maxlen);
TC: O(n^2) because we are generating all subarrays but we are not calculating sum for each subarray
*/

//+++++++++BETTER++++++++
/*
CODE FOR POSITIVES ONLY
map<long long,int> preSumMap;
long long sum =0;
int maxLen=0;
for(int i=0;i<n;i++){
    sum += arr[i];
    if(sum==k){
        maxLen = max(maxLen,i+1);
    }
    long long rem = sum-k;
    if(preSumMap.find(rem) != preSumMap.end()){//Check if rem is present in the map
        maxLen = max(maxLen,i-preSumMap[rem]);
    }
    preSumMap[sum] = i;
}
return maxLen;
*/

//CODE FOR POSITIVES NEGATIVES AND ZEROES
//FOR NEGATIVES THIS IS OPTIMAL
/*
map<long long,int> preSumMap;
long long sum =0;
int maxLen=0;
for(int i=0;i<n;i++){
    sum += arr[i];
    if(sum==k){
        maxLen = max(maxLen,i+1);
    }
    long long rem = sum-k;
    if(preSumMap.find(rem) != preSumMap.end()){//Check if rem is present in the map
        maxLen = max(maxLen,i-preSumMap[rem]);
    }
    if(preSumMap.find(sum) == preSumMap.end())//If sum is not present in the map then add it to the map{
        preSumMap[sum] = i;
    }
    
}
return maxLen;

TC => O(N) if using unordered map and at worst case it is O(N^2) if using unordered map because of collision in the map

O(Nlogn) if using ordered map
SC => O(N)
*/


//+++++++++OPTIMAL FOR POSITIVES AND ZEROES ONLY++++++++
/*
2 POINTER PROBLEM

int left =0;
int right =0;
int sum = arr[0];
int maxLen = 0;
while(right<n){
    while(left <=right && sum>k){
        sum -= arr[left];
        left++;
    }
    if(sum==k){
        maxLen = max(maxLen,right-left+1);
    }
    right++;
    if(right<n){
        sum+=arr[right];
    }
    return maxLen;

}
TC => O(2N) at worst case both pointers will traverse the entire array
SC => O(1)
*/

