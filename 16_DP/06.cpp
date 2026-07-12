//Edit Distance
//https://leetcode.com/problems/edit-distance/description/

//RECURSIVE 
/*
class Solution {
public:
    int m,n;

    int solve(string& s1,string& s2,int i,int j){
        if(i==m){
            return n-j;//insert in s1
        }
        else if(j==n){
            return m-i;//delete from s1
        }

        if(s1[i]==s2[j]){
            return solve(s1,s2,i+1,j+1);
        }
        else{
            int insertC = 1 + solve(s1,s2,i,j+1);
            int deleteC = 1 + solve(s1,s2,i+1,j);
            int replaceC = 1 + solve(s1,s2,i+1,j+1);

            return min({insertC,deleteC,replaceC});
        }
        return -1;
    }
    int minDistance(string s1, string s2) {
        m = s1.length();
        n = s2.length();

        return solve(s1,s2,0,0);
    }
};
*/

//MEMOIZATION
/*
class Solution {
public:
    int m,n;
    int t[501][501];

    int solve(string& s1,string& s2,int i,int j){
        if(i==m){
            return n-j;//insert in s1
        }
        else if(j==n){
            return m-i;//delete from s1
        }

        if(t[i][j]!=-1){
            return t[i][j];
        }

        if(s1[i]==s2[j]){
            return t[i][j] = solve(s1,s2,i+1,j+1);
        }
        else{
            int insertC = 1 + solve(s1,s2,i,j+1);
            int deleteC = 1 + solve(s1,s2,i+1,j);
            int replaceC = 1 + solve(s1,s2,i+1,j+1);

            return t[i][j] = min({insertC,deleteC,replaceC});
        }
        return -1;
    }
    int minDistance(string s1, string s2) {
        m = s1.length();
        n = s2.length();
        memset(t,-1,sizeof(t));
        return solve(s1,s2,0,0);
    }
};
*/

//APPROACH 2 -> RECURSIVE + MEMO
/*
class Solution {
public:
    int m,n;
    int t[501][501];
    
    int solve(string& s1,string& s2,int m,int n){
        if(m==0){
            return n;//insert in s1
        }
        else if(n==0){
            return m;//delete from s1
        }

        if(t[m][n]!=-1){
            return t[m][n];
        }

        if(s1[m-1]==s2[n-1]){
            return t[m][n] = solve(s1,s2,m-1,n-1);
        }
        else{
            int insertC = 1 + solve(s1,s2,m,n-1);
            int deleteC = 1 + solve(s1,s2,m-1,n);
            int replaceC = 1 + solve(s1,s2,m-1,n-1);

            return t[m][n] = min({insertC,deleteC,replaceC});
        }
        return -1;
    }
    int minDistance(string s1, string s2) {
        m = s1.length();
        n = s2.length();
        memset(t,-1,sizeof(t));
        return solve(s1,s2,m,n);
    }
};
*/

//BOTTOM UP
/*
class Solution {
public:
    int minDistance(string s1, string s2) {
        int m = s1.length();
        int n = s2.length();

        vector<vector<int>> t(m+1,vector<int>(n+1));

        //t[i][j] = state definition

        for(int i=0;i<=m;i++){//length of s1
            for(int j=0;j<=n;j++){//length of s2
                if(i==0 || j==0){
                    t[i][j] = i+j;
                }
                else if(s1[i-1]==s2[j-1]){
                    t[i][j] = t[i-1][j-1];
                }
                else{
                    t[i][j] = 1 + min({t[i][j-1], t[i-1][j], t[i-1][j-1]});
                }
            }
        }
        return t[m][n];
    }
};
*/