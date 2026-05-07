//Next Permutation
//https://leetcode.com/problems/next-permutation/description/
//+++++++++BRUTE+++++++++++++
/*
step 1 generate all sorted arrangements
step 2 linear search and find given
step 3 next one is the answer
step 4 if not found then return first one

TC => O(N! * N)
*/

//+++++++++BETTER+++++++++++++
/*
use STL
next_permutation(arr.begin(),arr.end());
*/

//+++++++++OPTIMAL+++++++++++++
/*
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index=-1;
        int n = nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }
        }
        if(index==-1){
            reverse(nums.begin(),nums.end());
            return;
        }

        for(int i=n-1;i>index;i--){
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }
        reverse(nums.begin()+index+1,nums.end());
    }
};
TC => O(3n) at worst case 
SC => O(n) for modifying array otherwise O(1)
*/