//4Sum
//https://leetcode.com/problems/4sum/description/

/*
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        if(nums.empty()){
            return res;
        }
        int n = nums.size();
        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long target_2 =(long long)target - nums[i] - nums[j];

                int left = j+1;
                int right = n-1;

                while(left<right){
                    long long two_sum = (long long)nums[left] + nums[right];
                    if(two_sum<target_2) left++;
                    else if(two_sum>target_2) right--;
                    else{
                        vector<int> quadruplet(4,0);
                        quadruplet[0]=nums[i];
                        quadruplet[1]=nums[j];
                        quadruplet[2]=nums[left];
                        quadruplet[3]=nums[right];
                        res.push_back(quadruplet);

                        //processing duplicates of number 3
                        while(left<right && nums[left]==quadruplet[2]) ++left;

                        //processing duplicates of number 3
                        while(left<right && nums[right]==quadruplet[3]) --right;

                    }
                }
                //processing duplicates of number 2
                while(j+1<n && nums[j+1]==nums[j]) ++j;
            }
            //processing duplicates of number 1
            while(i+1<n && nums[i+1]==nums[i]) ++i;
        }
        return res;
    }
};
*/