//Aggressive Cows
//https://www.geeksforgeeks.org/problems/aggressive-cows/1

//++++++++BRUTE++++++++
/*
Linear Search

sort(arr,arr+n);
for(i=1;i<= max-min;i++){
    if(canWePlace(arr,i,cows)==true) continue;
    else return (i-1);
}

bool canWePlace(arr,dist,cows){
    cntCows = 1;
    last = arr[0];
    for(i=1;i<n;i++){
        if(arr[i]-last >=dist){
            cntCows++;
            last = arr[i];
        }
    }
    if(cntCows>=cows) return true;
    else return false;
}
*/

//+++++++OPTIMAL+++++++++
/*
BINARY SEARCH

class Solution {
  public:
    bool canWePlace(vector<int> &stalls, int dist, int cows){
        int cntCows=1;
        int last = stalls[0];
        for(int i=1;i<stalls.size();i++){
            if(stalls[i] - last >=dist){
                cntCows++;
                last = stalls[i];
            }
            if(cntCows>=cows)return true;
        }
        return false;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        sort(stalls.begin(),stalls.end());
        int n = stalls.size();
        int low = 1;
        int high = stalls[n-1] - stalls[0];
        
        while(low<=high){
            int mid = (low+high)/2;
            if(canWePlace(stalls,mid,k)==true){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return high;
    }
};
*/