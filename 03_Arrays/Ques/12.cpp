//Pascal Triangle
//https://leetcode.com/problems/pascals-triangle/description/

//to find number in col C row R
/*
int NcR(int n,int r){
    long long res = 1;
    for(int i=0;i<r;i++){
        res = res * (n-i);
        res = res / (i+1);
    }
    return res;
}

TC => O(r)
SC => O(1)
*/

//PROBLEM 2
//Brute
/*
for(c=1;c<=n;c++){
    print(NcR(n-1,c-1));
}

TC => O(N*r)
*/


//PROBLEM 2
//OPTIMAL
/*
ans = 1;
print(ans);
for(i=1;i<n;i++){
    ans = ans * (n-i);
    ans = ans/i;
    print(ans);
}

TC => O(N)
SC => O(1)
*/

//PROBLEM 3
//BRUTE
/*
ans=[]
for(row =1 to n){
    tempList = [];
    for(col = 1 to row){
        tempList.add(nCr(row-1,col-1));
    }
    ans.add(tempList);
}
return ans;

TC => O(n*n*r) 
~ O(n^3)
*/

//OPTIMAL
/*
class Solution {
public:
    vector<int> generateRow(int row){
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(1);

        for(int col=1;col<row;col++){
            ans = ans * (row-col);
            ans = ans / col;
            ansRow.push_back(ans);
        }
        return ansRow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            vector<int> temp = generateRow(i);
            ans.push_back(temp);
        }
        return ans;
    }
};

TC => O(n^2)
*/
