//Remove duplicates in place from sorted array
//https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/


/*
arr[]=[1,1,2,2,2,3,3]
output => [1,2,3,----]
modify the given array and return number of unique elements
*/

//++++++BRUTE++++++++
/*
unique mtlb set
//first pass
set<int> st
for(int i=0;i<n;i++){
    st.insert(arr[i]);
}// TC => O(NlogN)
int index=0
for(auto it:st){
    arr[index]=it;
    index++
}//TC=>O(N)
return index
//TC => O(NlogN + N)
//SC => O(N) worst case agar sab hi unique elements hai
*/

//++++++OPTIMAL+++++++++
/*
use two pointer approach
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int n = nums.size();
        for(int j=1;j<n;j++){
            if(nums[i]!=nums[j]){
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;
    }
};
//TC => O(N)
//SC => O(1)
*/