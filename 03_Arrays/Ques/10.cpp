//2 Sum
//https://leetcode.com/problems/two-sum/description/
//++++++++BRUTE+++++++++++
/*
pick one element and sum with other to check

for(i= 0 to n){
    for(j= 0 to n){
        if(i==j) continue;
        if(arr[i]+arr[j]==target){
            return {i,j};
        }
    }
}

TC => O(n^2)
*/

//++++++++OPTIMISESD BRUTE++++++++++
/*
for(i= 0 to n){
    for(j= i+1 to n){
        if(arr[i]+arr[j]==target){
            return {i,j};
        }
    }
}
TC => slightly less than O(n^2)
*/

//+++++++++BETTER+++++++++++
/*
HASHMAP
map<int,int> mpp;
for(int i=0;i<n;i++){
    int a = arr[i];
    int more = target - a;
    if(mpp.find(more)!=mpp.end()){
        return "YES";// return {mpp[more],i};
    }
    mpp[a]=i;
}
return "NO";//return {-1,-1};

TC => O(n) or O(nlogn) depending on the implementation of the hashmap
SC => O(n)
*/

//+++++++++OPTIMAL+++++++++++
/*
2 POINTER GREEDY APPROACH
use for variety where yes and no is required
not where indexes are required as we have to sort the array first and then find the indexes of the elements

int left = 0, right = n-1;
sort(arr.begin(),arr.end());
while(left<right){
    int sum = arr[left]+arr[right];
    if(sum==target){
        return "YES";
    }
    else if(sum<target) left++;
    else right--;
}
return "NO";

TC => O(n)+O(nlogn) => O(nlogn)
SC => O(1) or O(n) cuz we are changing/distorting the original array
*/



