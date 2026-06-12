//Maximum of all subarrays of size k
//https://www.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1

/*
class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {

        int i = 0;
        int j = 0;

        deque<int> q;
        vector<int> ans;

        while(j < arr.size()) {

            // Calculation
            // Remove all smaller elements from back
            while(!q.empty() && q.back() < arr[j]) {
                q.pop_back();
            }

            // Insert current element
            q.push_back(arr[j]);

            // Window size < k
            if(j - i + 1 < k) {
                j++;
            }

            // Window size == k
            else if(j - i + 1 == k) {

                // Front contains maximum
                ans.push_back(q.front());

                // Slide the window
                if(q.front() == arr[i]) {
                    q.pop_front();
                }

                i++;
                j++;
            }
        }

        return ans;
    }
};
*/