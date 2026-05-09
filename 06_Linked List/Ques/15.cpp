//3 Sum
//https://leetcode.com/problems/3sum/description/
//+++++++BRUTE+++++++++
/*
vector<vector<int>> ans;
set<vector<int>> st;
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        for(k=j+1;k<n;k++){
            if(arr[i]+arr[j]+arr[k]==0){
                vector<int> temp = {num[i],num[j],num[k]};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
        }
    }
}
vector<vector<int>> ans(st.begin(),st.end());
return ans;

TC => O(n^3 + log(number of unique triplets));
SC => 2*O(number of triplets);
*/

//+++++++++++BETTER++++++++++++++
/*
vector<vector<int>> triplet(int n, vector<int> &num){
    set<vector<int>> st;
    for(int i=0;i<i<n;i++){
        set<int> hashset;
        for(int j=i+1;j<n;j++){
            int third = -(nums[i]+nums[j]);
            if(hashset.find(third)!=hashset.end()){
                vector<int> temp = {num[i],num[j],third};
                sort(temp.begin(),temp.end());
                st.insert(temp); 
            }
            hashset.insert(num[j]);
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}
*/


//++++++++++OPTIMAL+++++++++++++
/*
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            //dont go to same i
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k = n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum<0){
                    j++;
                }
                else if(sum>0){
                    k--;
                }
                else{
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(j< k && nums[k]==nums[k+1]) k--;
                    
                }
            }
        }
        return ans;
    }
};
*/