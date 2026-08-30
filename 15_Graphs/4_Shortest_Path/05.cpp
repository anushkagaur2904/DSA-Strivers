//Path with Minimum Effort
//https://leetcode.com/problems/path-with-minimum-effort/

/*
class Solution {
public:
    typedef pair<int,pair<int,int>> P;
    vector<vector<int>> directions{{0,1},{1,0},{-1,0},{0,-1}};

    int minimumEffortPath(vector<vector<int>>& heights) {
        int m = heights.size();
        int n = heights[0].size();

        vector<vector<int>> result(m,vector<int>(n,INT_MAX));

        priority_queue<P,vector<P>,greater<P>> pq;

        result[0][0]=0;
        pq.push({0,{0,0}});

        while(!pq.empty()){
            int diff = pq.top().first;
            auto coord = pq.top().second;
            pq.pop();

            int x = coord.first;
            int y = coord.second;

            for(auto &dir: directions){
                int x_ = x + dir[0];
                int y_ = y + dir[1];

                if(x_>=0 && x_<m && y_>=0 && y_<n){
                    int absDiff = abs(heights[x][y]-heights[x_][y_]);
                    int maxDiff = max(diff,absDiff);

                    if(result[x_][y_]>maxDiff){
                        result[x_][y_] = maxDiff;
                        pq.push({maxDiff,{x_,y_}});
                    }
                }

            }
        }
        return result[m-1][n-1];
    }
};
*/