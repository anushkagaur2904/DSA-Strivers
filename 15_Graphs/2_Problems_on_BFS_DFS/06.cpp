//Distance of nearest cell having one or 01 Matrix
//https://leetcode.com/problems/01-matrix/description/

/*
class Solution {
public:
    vector<vector<int>> directions {{-1,0},{0,1},{1,0},{0,-1}};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        queue<pair<int,int>> que;

        vector<vector<int>> result(m,vector<int>(n,-1));

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    result[i][j]=0;
                    que.push({i,j});
                }
            }
        }
        while(!que.empty()){
            pair<int,int> p = que.front();
            que.pop();
            int row = p.first;
            int col = p.second;

            for(auto& dir:directions){
                int nrow = row + dir[0];
                int ncol = col + dir[1];

                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && result[nrow][ncol]==-1){
                    result[nrow][ncol]= result[row][col]+1;
                    que.push({nrow,ncol});
                }
            }
        }
        return result;
    }
};
*/