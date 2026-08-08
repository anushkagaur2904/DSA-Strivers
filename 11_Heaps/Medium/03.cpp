//Sort a K Sorted Array | Sort Nearly Sorted Array
//https://www.geeksforgeeks.org/problems/nearly-sorted-1587115620/1

/*
class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {

        priority_queue<int,
                       vector<int>,
                       greater<int>> minh;

        vector<int> ans;

        for(int i = 0; i < arr.size(); i++) {

            minh.push(arr[i]);

            if(minh.size() > k) {

                ans.push_back(minh.top());
                minh.pop();
            }
        }

        while(!minh.empty()) {

            ans.push_back(minh.top());
            minh.pop();
        }

        arr = ans;
    }
};
*/