//Celebrity Problem
//https://www.geeksforgeeks.org/problems/the-celebrity-problem/1

/*
class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
        int top = 0;
        int n = mat.size();
        int down = n-1;
        while(top<down){
            if(mat[top][down]==1){
                top++;
            }
            else if(mat[down][top]==1){
                down--;
            }
            else{
                top++;
                down--;
            }
        }
        if(top>down) return -1;
        for(int i=0;i<mat.size();i++){
            //dont check for diagonal as value will be zero
            if(i==top) continue;
            if(mat[top][i]==0 && mat[i][top]==1){
                
            }
            else{
                return -1;
            }
        }
        return top;
    }
};
*/