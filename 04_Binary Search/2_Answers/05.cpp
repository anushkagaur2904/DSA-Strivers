//Find the Smallest Divisor Given a Threshold
//https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/

//Brute
/*
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int max_element = INT_MIN;
        int n = nums.size();

        for(int i=0; i<n; i++){ 
            if(nums[i]>max_element){
                max_element = nums[i];
            }      
        }

        for(int d=1;d<=max_element;d++){
            int sum = 0;
            for(int i=0;i<n;i++){
                sum += ceil((double)nums[i] / d);//check why if u forget
            }
            if(sum<=threshold){
                return d;
                break;
            }              
        }
        return -1;
    }
};
*/

//BS
/*
class Solution {
public:
    int sumByD(vector<int>& nums,int divisor){
        int sum = 0;
        int n = nums.size();

        for(int i=0;i<n;i++){
            sum = sum + ceil((double)nums[i]/divisor);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        int ans;

        while(low<=high){
            int mid = low + (high-low)/2;
            if(sumByD(nums,mid)<=threshold){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};
*/