//Max Consecutive Ones III
//https://leetcode.com/problems/max-consecutive-ones-iii/description/

//BRUTE
/*
maxlen=0
for(i=0 to n){
    zeroes=0
    for(j=i to n){
        if(nums[j]==0) zeroes++
        if(zeroes<=k){
            len = j-i+1;
            maxlen = max(maxlen,len);
        }
        else{
            break;
        }
    }
}
*/

//BETTER
/*
maxlen=0
l=0
r=0
zeroes=0

while(r< nums.size()){
    if(nums[r]==0) zeroes++;
    while(zeroes>k){
        if(nums[l]==0)zeroes--;
        l++;
    }
    if(zeroes<=k){
        len = r-l+1;
        maxlen = max(maxlen,len);
    }
}
*/

//OPTIMAL
/*
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int left=0;
        int right=0;
        int zeroes=0;
        int maxlen=0;

        while(right<n){
            if(nums[right]==0) zeroes++;
            if(zeroes>k){
                if(nums[left]==0) zeroes--;
                left++;
            }
            if(zeroes<=k){
                int len = right-left+1;
                maxlen = max(maxlen,len); 
            }
            right++;
        }
        return maxlen;
    }
};
*/