//Count Subarrays with given XOR
//https://www.geeksforgeeks.org/problems/count-subarray-with-given-xor/1

/*
class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        map<int,int> freq;
        int cnt=0;
        int xorr=0;
        for(auto it : arr){
            xorr = xorr ^ it;
            if(xorr==k){
                cnt++;
            }
            if(freq.find(xorr ^ k) !=freq.end()){
                cnt += freq[xorr^k];
            }
            freq[xorr]+=1;
        }
        return cnt;
    }
};
*/