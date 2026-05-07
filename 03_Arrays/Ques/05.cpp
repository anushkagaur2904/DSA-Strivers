//Kadane's Algo and Max Subarray Sum
//https://leetcode.com/problems/maximum-subarray/
//+++++++++BRUTE++++++++++
/*
maxi=INT_MIN;
for(i=0 to n){
    for(j=i to n){
        sum=0;
        for(k=i to j){
            sum+=arr[k];
            maxi = max(sum,maxi);
        }
    }
}
TC=> near about O(n^3)
SC => O(1)
*/

//+++++++++BETTER++++++++++
/*
maxi=INT_MIN;
for(i=0 to n){
    for(j=i to n){
        sum=0;
        sum+=arr[j];
        maxi = max(sum,maxi);
    }
}
TC=> near about O(n^2)  
SC => O(1)
*/

//+++++++++OPTIMAL++++++++++
/*
KADANE'S ALGO
long long sum = 0;
maxi = LONG_MIN;
for(int i=0;i<n;i++){
    sum+=arr[i];
    if(sum>maxi){
        maxi=sum;
    }
    if(sum<0){
        sum=0;
    }
}
return maxi;
TC => O(n)
SC => O(1)
*/

/*
agar question mein ho ki positive sum hi chahiye i.e including empty subarray
long long sum = 0;
maxi = LONG_MIN;
for(int i=0;i<n;i++){
    sum+=arr[i];
    if(sum>maxi){
        maxi=sum;
    }
    if(sum<0){
        sum=0;
    }
}
if(maxi<0){
    return 0;
}
return maxi;
*/




