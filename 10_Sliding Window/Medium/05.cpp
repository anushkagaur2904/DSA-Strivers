//Binary Subarrays With Sum
//https://leetcode.com/problems/binary-subarrays-with-sum/description/

//APPROACH 1
/*
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        unordered_map<int,int> mp;

        int result=0;
        int currSum=0;

        mp[0]=1;//0 sum already hai

        for(int &num : nums){
            currSum+=num;
            int remaining_sum = currSum-goal;
            if(mp.find(remaining_sum)!=mp.end()){
                result+=mp[remaining_sum];
            }
            mp[currSum]++;
        }
        return result;
    }
};
*/

//APPROACH 2 : SLIDING WINDOW
/*
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int prefixZeros = 0;
        int windowSum = 0;
        int count = 0;
        
        int i = 0, j = 0;
        
        while (j < nums.size()) {
            windowSum += nums[j];
            
            while (i < j && (nums[i] == 0 || windowSum > goal)) {
                if (nums[i] == 1) {
                    prefixZeros = 0;
                } else {
                    prefixZeros += 1;
                }
                
                windowSum -= nums[i];
                i++;
            }
            
            if (windowSum == goal) {
                count += 1 + prefixZeros;
            }
            j++;
        }
        
        return count;
    }
};
*/