//Rotten Oranges
//https://leetcode.com/problems/rotting-oranges/description/

/*
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        //{{row,col},time}
        queue<pair<pair<int,int>,int>>q;
        int vis[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }
                else{
                    vis[i][j]=0;
                }
            }
        }
        int time=0;
        int deltaRow[] = {-1,0,+1,0};
        int deltaCol[] = {0,1,0,-1};
        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int t = q.front().second;
            time = max(time,t);
            q.pop();

            //check for 4 neighbors
            for(int i=0;i<4;i++){
                int nrow = row + deltaRow[i];
                int ncol = col + deltaCol[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]!=2 && grid[nrow][ncol]==1){
                    q.push({{nrow,ncol},time+1});
                    vis[nrow][ncol]=2;
                }
            }
        }
        //check if fresh orange left
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]!=2 && grid[i][j]==1){
                    return -1;
                }
            }
        }
        return time;
    }
};
*/