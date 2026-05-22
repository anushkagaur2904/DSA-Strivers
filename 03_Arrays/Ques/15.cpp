//Find the Duplicate Number
//https://leetcode.com/problems/find-the-duplicate-number/

/*
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        do{
            slow = nums[slow];//move by one
            fast = nums[nums[fast]];//move by two
        }while(slow!=fast);

        fast = nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};
*/