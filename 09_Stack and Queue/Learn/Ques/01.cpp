//Next Largest Element (NGR)
//https://www.geeksforgeeks.org/problems/next-larger-element-1587115620/1

/*
class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        vector<int> v;
        stack<int> s;
        int n = arr.size();
        
        for(int i=n-1;i>=0;i--){
            if(s.size()==0){
                v.push_back(-1);
            }
            else if(s.size()>0 && s.top()>arr[i]){
                v.push_back(s.top());
            }
            else if(s.size()>0 && s.top()<=arr[i]){
                while(s.size()>0 && s.top()<=arr[i]){
                    s.pop();
                }
                if(s.size()==0){
                    v.push_back(-1);
                }
                else{
                    v.push_back(s.top());
                }
            }
            s.push(arr[i]);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
*/


//LEETCODE PROBLEM
//https://leetcode.com/problems/next-greater-element-i/description/

/*
class Solution {
public:

    vector<int> nextGreaterElement(vector<int>& nums1,
                                   vector<int>& nums2) {

        stack<int> s;

        unordered_map<int,int> mp;

        // Traverse nums2 from right to left
        for(int i = nums2.size() - 1;
            i >= 0;
            i--) {

            // Remove smaller/equal elements
            while(!s.empty() &&
                  s.top() <= nums2[i]) {

                s.pop();
            }

            // No greater element exists
            if(s.empty()) {

                mp[nums2[i]] = -1;
            }

            // Next greater element found
            else {

                mp[nums2[i]] = s.top();
            }

            // Push current element
            s.push(nums2[i]);
        }

        vector<int> ans;

        // Get answers for nums1
        for(int i = 0;
            i < nums1.size();
            i++) {

            ans.push_back(mp[nums1[i]]);
        }

        return ans;
    }
};
*/