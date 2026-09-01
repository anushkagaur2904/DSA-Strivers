//Making a Large Island
//https://leetcode.com/problems/making-a-large-island/description/

//Super Brute
/*
class Solution {
public:
    int n;
    vector<vector<int>> directions = {{-1,0},{0,-1},{0,1},{1,0}};

    int DFS(vector<vector<int>>& grid,int i,int j,vector<vector<bool>>& visited){
        if(i<0 || i>=n || j<0 || j>=n || grid[i][j]==0 || visited[i][j]){
            return 0;
        }

        visited[i][j]=true;
        int size = 1;

        for(vector<int> &dir : directions){
            int i_ = i + dir[0];
            int j_ = j + dir[1];

            size += DFS(grid,i_,j_,visited);
        }
        return size;
    }
    int largestIsland(vector<vector<int>>& grid) {
        n = grid.size();// row = col = n
        int maxArea = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    grid[i][j] = 1;//trying to convert this 0 to 1

                    int largestIslandSize = 0;
                    vector<vector<bool>> visited(n,vector<bool>(n,false));

                    for(int x=0;x<n;x++){
                        for(int y=0;y<n;y++){
                            if(grid[x][y]==1 && !visited[x][y]){
                                largestIslandSize = max(largestIslandSize, DFS(grid,x,y,visited));
                            }
                        }
                    }

                    maxArea = max(maxArea,largestIslandSize);
                    grid[i][j]=0;//undo
                }
            }
        }
        return maxArea == 0 ? (n*n) : maxArea;
        //agar sab 1 hai toh total number of 1s hi answer hai
    }
};
*/

//Better Brute
/*
class Solution {
public:
    int n;
    vector<vector<int>> directions = {{-1,0},{0,-1},{0,1},{1,0}};

    int DFS(vector<vector<int>>& grid,int i,int j,vector<vector<bool>>& visited){
        if(i<0 || i>=n || j<0 || j>=n || grid[i][j]==0 || visited[i][j]){
            return 0;
        }

        visited[i][j]=true;
        int size = 1;

        for(vector<int> &dir : directions){
            int i_ = i + dir[0];
            int j_ = j + dir[1];

            size += DFS(grid,i_,j_,visited);
        }
        return size;
    }
    int largestIsland(vector<vector<int>>& grid) {
        n = grid.size();// row = col = n
        int maxArea = 0;
        vector<vector<bool>> visited(n,vector<bool>(n,false));

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && !visited[i][j]){
                    maxArea = max(maxArea,DFS(grid,i,j,visited));
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    grid[i][j] = 1;//trying to convert this 0 to 1

                    visited = vector<vector<bool>>(n,vector<bool>(n,false));
                    //vapas visited ko use krlo
                    int size = DFS(grid,i,j,visited);
                    maxArea = max(maxArea,size);
                    grid[i][j]=0;//undo
                }
            }
        }
        
        return maxArea == 0 ? (n*n) : maxArea;
        //agar sab 1 hai toh total number of 1s hi answer hai
    }
};
*/

//Optimal
/*
class Solution {
public:
    int n;
    vector<vector<int>> directions = {{-1,0},{0,-1},{0,1},{1,0}};

    int DFS(vector<vector<int>>& grid,int i,int j, int id){
        if(i<0 || i>=n || j<0 || j>=n || grid[i][j]!=1){
            return 0;
        }
        grid[i][j]=id;
        //id hi ab visited ka kaam kregi
        int size = 1;

        for(vector<int> &dir : directions){
            int i_ = i + dir[0];
            int j_ = j + dir[1];

            size += DFS(grid,i_,j_,id);
        }
        return size;
    }
    int largestIsland(vector<vector<int>>& grid) {
        n = grid.size();// row = col = n
        int maxArea = 0;
        int id = 2;
        unordered_map<int,int> mp;//id->size


        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    int size = DFS(grid,i,j,id);
                    maxArea = max(maxArea,size);
                    mp[id]=size;
                    id++;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    unordered_set<int> uniqueIds;
                    for(auto &dir : directions){
                        int i_ = i + dir[0];
                        int j_ = j + dir[1];
                        if(i_>=0 && i_<n && j_>=0 && j_<n && grid[i_][j_]!=0){
                            uniqueIds.insert(grid[i_][j_]);
                            //unique id store krliye neighbor ke
                        }
                    }
                    int overallSize = 1;
                    //[i][j] kp 1 mein convert kiya
                    for(auto &it: uniqueIds){
                        overallSize += mp[it];
                    }
                    maxArea = max(maxArea,overallSize);
                }
            }
        }
        
        return maxArea;
        //agar sab 1 hai toh total number of 1s hi answer hai
    }
};
*/