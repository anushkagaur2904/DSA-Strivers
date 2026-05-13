//Set Matrix Zeroes
//https://leetcode.com/problems/set-matrix-zeroes/
//+++++++++++BRUTE+++++++++++++
/*
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(arr[i][j]==0){
            markRow(i);
            markCol(j);
        }
    }
}

markRow(int row){
    for(j=0;j<m;j++){//m is number of columns
        if(arr[row][j]!=0){
            arr[row][j]=-1;
        }
    }       
}
markCol(int col){
    for(i=0;i<n;i++){
        if(arr[i][col]!=0){
            arr[i][col]=-1;
        }
    }       
}

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(arr[i][j]==-1){
            arr[i][j]=0;
        }
    }
}

TC => O((n*m) *(n+m) +(n*m)) = O(n^3)
*/

//+++++++++++BETTER+++++++++++++
/*
int col[m]={0};
int row[n]={0};
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(arr[i][j]==0){
            row[i]=1;
            col[j]=1;
        }
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(row[i]==1 || col[j]==1){
            arr[i][j]=0;
        }
    }
}
TC => O(2*n*m)
SC => O(n)+O(m)
*/

//+++++++++++OPTIMAL++++++++++++++
/*
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        if (matrix.empty()) return;
        int n = matrix.size();//row size
        int m = matrix[0].size();//col size
        int col0=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    //mark the i-th row
                    matrix[i][0]=0;
                    //mark the j-th col
                    if(j!=0){
                        matrix[0][j]=0;
                    }
                    else{
                        col0=0;
                    }
                }
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][j]!=0){
                    //check for col and row
                    if(matrix[0][j]==0|| matrix[i][0]==0){
                        matrix[i][j]=0;
                    }
                }
            }
        }
        if(matrix[0][0]==0){
            for(int j=0;j<m;j++){
                matrix[0][j]=0;
            }
        }
        if(col0==0){
            for(int i=0;i<n;i++){
                matrix[i][0]=0;
            }
        }

    }
};
TC => O(2*n*m)
SC => O(1) only for col0
*/