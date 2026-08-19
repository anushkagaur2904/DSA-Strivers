//Count Number of Nice Subarrays
//https://leetcode.com/problems/count-number-of-nice-subarrays/description/

/*
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        // map to remember the odd count if we have seen it in past

        int result = 0;
        int oddCount = 0;
        mp[oddCount] = 1;//we have seen oddCount = 0 once in past

        int n = nums.size();

        for(int i=0;i<n;i++){
            oddCount += (nums[i]%2);

            if(mp.count(oddCount-k)){
                result += mp[oddCount-k];
            }
            mp[oddCount]++;
        }
        return result;
    }
};
*/