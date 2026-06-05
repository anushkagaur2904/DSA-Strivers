//K largest elements
//https://www.geeksforgeeks.org/problems/k-largest-elements4206/1

/*
class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {

        priority_queue<int, vector<int>, greater<int>> minH;

        for (int i = 0; i < arr.size(); i++) {

            minH.push(arr[i]);

            if (minH.size() > k) {
                minH.pop();
            }
        }

        vector<int> ans;

        while (!minH.empty()) {
            ans.push_back(minH.top());
            minH.pop();
        }

        // GFG expects descending order
        reverse(ans.begin(), ans.end());

        return ans;
    }
};
*/