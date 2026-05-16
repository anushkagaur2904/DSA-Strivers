//Maximum area of rectangle in a binary matrix
//https://leetcode.com/problems/maximal-rectangle/description/

/*
class Solution {
public:
    //function to calculate MAH
    int MAH(vector<int> &arr){
        int n = arr.size();

        vector<int> NSL;
        vector<int> NSR;

        stack<pair<int,int>> s;

        //NSL
        for(int i=0;i<n;i++){
            //No smaller element
            if(s.empty()){
                NSL.push_back(-1);
            }
            //smaller found
            else if(s.top().first <arr[i]){
                NSL.push_back(s.top().second);
            }
            //remove greater/equal elements
            else{
                while(!s.empty() && s.top().first >=arr[i]){
                    s.pop();
                }
                if(s.empty()){
                    NSL.push_back(-1);
                }
                else{
                    NSL.push_back(s.top().second);
                }
            }
            //push current element with index
            s.push({arr[i],i});
        }
        //clear stack
        while(!s.empty()){
            s.pop();
        }

        //NSR
        for(int i = n - 1; i >= 0; i--) {

            // No smaller element
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

            // Push current element
            s.push({arr[i], i});
        }

        // Reverse NSR
        reverse(NSR.begin(), NSR.end());


        // ----------------------------
        // Calculate Maximum Area
        // ----------------------------

        int maxi = 0;

        for(int i = 0; i < n; i++) {

            // Width formula
            int width =
            NSR[i] - NSL[i] - 1;

            // Area formula
            int area =
            arr[i] * width;

            maxi = max(maxi, area);
        }

        return maxi;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        if(n==0) return 0;

        int m = matrix[0].size();
        
        //histogram array
        vector<int> v(m);

        //store first row
        for(int j=0;j<m;j++){
            v[j]= matrix[0][j] - '0';
        }
        //Apply MAH on first row
        int maxi = MAH(v);

        //traverse remaining rows
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                //reset height if current cell is 0
                if(matrix[i][j]=='0'){
                    v[j]=0;
                }
                //increase height if current cell is 1
                else{
                    v[j]=v[j]+1;
                }
            }
            maxi = max(maxi,MAH(v));
        }
        return maxi;
    }
};
*/