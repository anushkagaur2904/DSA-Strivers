//Longest Palindromic Subsequence
//https://leetcode.com/problems/longest-palindromic-subsequence/description/

//LCS APPROACH
/*
class Solution {
public:
    int m;
    int t[1001][1001];

    int solve(string &s1,string &s2,int i,int j){
        if(i>=m || j>=m) return 0;

        if(t[i][j]!=-1){
            return t[i][j];
        }

        if(s1[i]==s2[j]){
            return t[i][j]= 1 + solve(s1,s2,i+1,j+1);
        }
        return t[i][j] = max(solve(s1,s2,i+1,j),solve(s1,s2,i,j+1));
    }

    int longestPalindromeSubseq(string s) {
        memset(t,-1,sizeof(t));
        m = s.length();
        string s2 = s;
        reverse(begin(s2),end(s2));
        return solve(s,s2,0,0);
    }
};
*/

//Bottom Up
/*
class Solution {
public:
    int longestCommonSubsequence(string s1, string s2) {
        int m = s1.length();
        int n = s2.length();

        vector<vector<int>> t(m+1,vector<int>(n+1));

        //first row and first col will be 0
        for(int row=0;row<=m;row++){
            t[row][0]=0;
        }
        for(int col=0;col<=n;col++){
            t[0][col]=0;
        }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(s1[i-1]==s2[j-1]){
                    t[i][j] = 1 + t[i-1][j-1];
                }
                else{
                    t[i][j] = max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        return t[m][n];
    }
    
    int longestPalindromeSubseq(string s) {
        string s2 = s;
        reverse(begin(s2),end(s2));
        return longestCommonSubsequence(s,s2);
    }
};
*/

//Approach 2
/*
class Solution {
public:
    int t[1001][1001];

    int solve(string& s,int i,int j){
        if(i>j){
            return 0;
        }
        if(i==j){
            return 1;//1 length hai bas string ki
        }

        if(t[i][j]!=-1){
            return t[i][j];
        }

        if(s[i]==s[j]){
            return t[i][j] = 2 + solve(s,i+1,j-1);
        }
        else{
            return t[i][j] = max(solve(s,i+1,j),solve(s,i,j-1));
        }
    }
    int longestPalindromeSubseq(string s) {
        memset(t,-1,sizeof(t));
        return solve(s,0,s.length()-1);
    }
};
*/

//Approach 3
/*
class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n = s.length();
        
        vector<vector<int>> t(n,vector<int>(n,0));
        //t[i][j] = LPS in s[i...j]

        for(int i=0;i<n;i++){
            t[i][i] = 1;
            //1 length is always palindrome
        }

        for(int L=2;L<=n;L++){
            for(int i=0;i<n-L+1;i++){
                int j = i+L-1;

                if(s[i]==s[j]){
                    t[i][j] = 2 + t[i+1][j-1];
                }
                else{
                    t[i][j] = max(t[i][j-1],t[i+1][j]);
                }
            }
        }
        return t[0][n-1];
    }
};
*/