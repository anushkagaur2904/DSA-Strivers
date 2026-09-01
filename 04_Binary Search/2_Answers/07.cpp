//Kth missing positive number
//https://leetcode.com/problems/kth-missing-positive-number/description/

//Approach 1
/*
class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        int num = 1;
        int n = nums.size();
        int i = 0;

        while(i<n && k>0){
            if(nums[i]==num){
                i++;
                //not missing
            }
            else{
                k--;
            }
            num++;
        }
        //i ab out of bound hogya
        while(k--){
            num++;     
        }
        return num-1;//ek extra num jo bdh jayega usko kam krna

    }
};
*/

//Approach 2
/*
class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        int n = nums.size();
        int l =0,r=n-1;
        int mid = -1;

        while(l<=r){
            mid = l + (r-l)/2;

            int kitne_missing_till_end = nums[mid] - (mid+1);

            if(kitne_missing_till_end<k){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return l+k;
    }
};
*/