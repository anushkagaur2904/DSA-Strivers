//Longest Consecutive Sequence
//https://leetcode.com/problems/longest-consecutive-sequence/description/
//++++++++++BRUTE++++++++++++
/*
longest = 1;
for(i = to n){
    x=arr[i];
    cnt=1;
    while(ls(arr,x+1)==true){//linear search
        x=x+1;
        cnt++;
    }
}
TC => O(n^2)
SC => O(1)
*/

//+++++++++++BETTER++++++++++++
/*
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        sort(nums.begin(),nums.end());
        int lastSmaller = INT_MIN;
        int cnt=0;
        int longest=1;
        for(int i=0;i<n;i++){
            if(nums[i]-1==lastSmaller){
                cnt++;
                lastSmaller=nums[i];
            }
    
            else if(lastSmaller!=nums[i]){
                cnt=1;
                lastSmaller=nums[i];
            }
            longest=max(longest,cnt);
        }
        return longest;

    }
};
TC => O(nlogn) + O(n)
*/

//++++++++++OPTIMAL++++++++++++
/*
int n = a.size();
if(n==0) return 0;
int longest=1;
unorderes_set<int> s;
for(int i=0;i<n;i++){
    st.insert(ar[i]);
}
for(auto it:st){
    if(st.find(it-1)==st.end()){
        int cnt=1;
        int x=it;
        while(st.find(x+1)!=st.end()){
            x=x+1;
            cnt++;
        }
        longest=max(longest,cnt);
    }
}
return longest;
O(1) and O(N) for worst case in unordered set
TC => O(2n) + O(n) => O(3n)
SC => O(n) for set
*/


/*
if(st.find(it-1)==st.end())
This is the most important line. To avoid redundant work, we only start counting a sequence if the current number (it) is the actual beginning of a sequence.

We check if it - 1 exists in the set.

If it - 1 is found, it means it is just part of a larger sequence starting earlier, so we skip it.

If it - 1 is not found, we know it is a "starting point."

Once we've identified a starting point, we use a while loop to peek forward. We keep looking for x + 1, x + 2, and so on, incrementing our counter (cnt) as long as the next consecutive number exists in the set.
*/

/*
1. The "Not Found" Check
C++

if (st.find(it - 1) == st.end())
What it means: "Is it - 1 missing from the set?"

The Logic: If you look for something and the search reaches the very end() of the container without finding it, it means the item is not there.

Why we do it: If it - 1 isn't there, then it must be the start of a sequence.

2. The "Found" Check
C++

while (st.find(x + 1) != st.end())
What it means: "Is x + 1 present in the set?"

The Logic: If the search result is not the end(), it means the computer stopped somewhere in the middle because it actually found the value.

Why we do it: We want to keep the loop running as long as the "next" number exists.
*/