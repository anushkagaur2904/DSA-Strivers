//Minimum number of platforms required in a railway station

//https://www.geeksforgeeks.org/problems/minimum-platforms-1587115620/1

//++++++APPROACH 1+++++++++
/*
func(arr,dep){
    maxCount = 0;
    for(i=0 to n-1){
        cnt = 1;
        for(j=i+1 to n-1){
            if(check with 4 conditions of intersection){
                cnt++;
            }
            maxCount = max(maxCount , cnt);
        }
    }
    return maxCount;
}
*/

//++++++++OPTIMAL+++++++++
/*
class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
        int n = arr.size();
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        int i=0;
        int j=0;
        int cnt=0;
        int maxCount=0;
        while(i<n){
            if(arr[i]<=dep[j]){
                cnt=cnt+1;
                i++;
            }
            else{
                cnt=cnt-1;
                j++;
            }
            maxCount = max(maxCount,cnt);
        }
        return maxCount;
    }
};

*/