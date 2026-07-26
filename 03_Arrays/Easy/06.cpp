//Left Rotate Array by D places
//https://leetcode.com/problems/rotate-array/
//https://www.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1

//+++++++++++BRUTE++++++++++++++++
/*
for(i=0;i<d;i++){
temp.push_back(arr[i])
}

for(i=d;i<n;i++){
    arr[i-d]=arr[i];
}

int j=0;
for(i=n-d;i<n;i++){
arr[i]=temp[j];
j++;
}
another way to put back temp
for(i=n-d;i<n;i++){
arr[i]=temp[i-(n-d)]
}
TC => O(n+d)
SC => extra space O(d)
*/

//OPTIMAL
/*
class Solution {
public:
    void rotateArr(vector<int>& arr, int d) {

        int n = arr.size();
        d = d % n;

        reverse(arr.begin(), arr.begin() + d);
        reverse(arr.begin() + d, arr.end());
        reverse(arr.begin(), arr.end());
    }
};

SC=> O(1) no extra space used
TC => O(2n) more than brute one
*/

/*
RIGHT ROTATE BY ONE PLACE
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector<int> temp;
        for(int i=n-k;i<n;i++){
            temp.push_back(nums[i]);
        }
        for(int i=n-k-1;i>=0;i--){
            nums[k+i]=nums[i];
        }
        for(int i=0;i<k;i++){
            nums[i]=temp[i];
        }

    }
};
*/

//++++++++++++OPTIMAL+++++++++++++++++
/*

SC=> O(1) no extra space used
TC => O(2n) more than brute one
*/
/*
void reverse(int arr[],int start,int end){
while(start<=end){
int temp=arr[start];
arr[start]=arr[end];
arr[end]=temp
start++
end--
}
}
*/