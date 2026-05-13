//Rotate Matrix or Image by 90 Degress
//https://leetcode.com/problems/rotate-image/
//+++++++++++++BRUTE++++++++++++++
/*
ans[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        ans[j][n-1-i]=matrix[i][j];
    }
}
TC => O(n^2);
SC => O(n^2) external 2d matrix used
*/

//+++++++++++++OPTIMAL++++++++++++++
/*
//transpose TC => O(N/2 * N/2)
int n = matrix.size();
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        swap(matrix[i][j],matrix[j][i]);
    }
}
//reverse TC => O(N/2 * N)
for(int i=0;i<n;i++){
    reverse(matrix[i].begin(),matrix[i].end());
}
//SC => O(1) in place rotation

*/
