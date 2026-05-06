//Maximum Consecutive Ones
//https://leetcode.com/problems/max-consecutive-ones/
//+++++++++++OPTIMAL++++++++++
/*
ek count rkho aur maximum count ko update krte jao jab bhi 1 mile aur jab 0 mile to count ko reset krdo

int maxi=0;
int count=0;
for(int i=0;i<n;i++){
    if(arr[i]==1){
        count++;
        maxi=max(maxi,count);
    }
    else{
        count=0;
    }
    }
}
return maxi;

TC: O(n)
SC: O(1)
*/


