//First negative in every window of size k
//https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

/*
class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        
        int i = 0, j = 0;
        
        vector<int> ans;
        
        // Stores negative numbers in current window
        list<int> v;
        
        while (j < arr.size()) {
            
            // Calculation
            if (arr[j] < 0) {
                v.push_back(arr[j]);
            }
            
            // Window size < k
            if (j - i + 1 < k) {
                j++;
            }
            
            // Window size == k
            else if (j - i + 1 == k) {
                
                // Get answer for current window
                if (v.size() == 0) {
                    ans.push_back(0);
                }
                else {
                    ans.push_back(v.front());
                }
                
                // Remove outgoing negative element
                if (!v.empty() && arr[i] == v.front()) {
                    v.pop_front();
                }
                
                // Slide window
                i++;
                j++;
            }
        }
        
        return ans;
    }
};
*/