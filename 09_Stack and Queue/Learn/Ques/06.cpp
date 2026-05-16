//Largest Rectangle in Histogram
//https://leetcode.com/problems/largest-rectangle-in-histogram/

/*
class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
          int n = arr.size();

        vector<int> NSL;
        vector<int> NSR;

        stack<pair<int,int>> s;

        // ----------------------------
        // Nearest Smaller to Left
        // ----------------------------

        for(int i = 0; i < n; i++) {

            // No smaller element on left
            if(s.empty()) {

                NSL.push_back(-1);
            }

            // Smaller element found
            else if(s.top().first < arr[i]) {

                NSL.push_back(s.top().second);
            }

            // Remove greater/equal elements
            else {

                while(!s.empty() &&
                      s.top().first >= arr[i]) {

                    s.pop();
                }

                if(s.empty()) {

                    NSL.push_back(-1);
                }

                else {

                    NSL.push_back(s.top().second);
                }
            }

            // Push current element with index
            s.push({arr[i], i});
        }


        // Clear stack for NSR
        while(!s.empty()) {

            s.pop();
        }


        // ----------------------------
        // Nearest Smaller to Right
        // ----------------------------

        for(int i = n - 1; i >= 0; i--) {

            // No smaller element on right
            if(s.empty()) {

                NSR.push_back(n);
            }

            // Smaller element found
            else if(s.top().first < arr[i]) {

                NSR.push_back(s.top().second);
            }

            // Remove greater/equal elements
            else {

                while(!s.empty() &&
                      s.top().first >= arr[i]) {

                    s.pop();
                }

                if(s.empty()) {

                    NSR.push_back(n);
                }

                else {

                    NSR.push_back(s.top().second);
                }
            }

            // Push current element with index
            s.push({arr[i], i});
        }

        // Reverse NSR because
        // we traversed from right to left
        reverse(NSR.begin(), NSR.end());


        // ----------------------------
        // Calculate Maximum Area
        // ----------------------------

        int maxi = 0;

        for(int i = 0; i < n; i++) {

            // Width formula
            int width =
            NSR[i] - NSL[i] - 1;

            // Area = height * width
            int area =
            arr[i] * width;

            // Update maximum area
            maxi = max(maxi, area);
        }

        return maxi;
    }
};
*/