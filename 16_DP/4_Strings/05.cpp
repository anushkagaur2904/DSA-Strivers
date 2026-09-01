//Minimum Insertion Steps to Make a String Palindrome
//https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/description/

//Recursive
/*
class Solution {
public:
    int n;

    int solve(string &s,int i,int j){
        if(i>=j) return 0;

        if(s[i]==s[j]){
            return solve(s,i+1,j-1);
        }
        return 1 + min(solve(s,i+1,j),solve(s,i,j-1));
    }
    int minInsertions(string s) {
        n = s.length();
        return solve(s,0,n-1);
    }
};
*/

//Memoization
/*
class Solution {
public:
    int n;
    int t[501][501];

    int solve(string &s,int i,int j){
        if(i>=j) return 0;

        if(t[i][j]!=-1){
            return t[i][j];
        }

        if(s[i]==s[j]){
            return t[i][j]= solve(s,i+1,j-1);
        }
        return t[i][j]= 1 + min(solve(s,i+1,j),solve(s,i,j-1));
    }
    int minInsertions(string s) {
        n = s.length();
        memset(t,-1,sizeof(t))
        return solve(s,0,n-1);
    }
};
*/

//Bottom Up
/*
class Solution {
public:
    int minInsertions(string s) {
        int n = s.length();
        
        vector<vector<int>> t(n,vector<int>(n,0));
        //t[i][j] = min insertion to make s[i...j] a palindrome
        //t[0][0],t[1][1],....t[n-1][n-1] = 0

        for(int L=2;L<=n;L++){
            for(int i=0;i<n-L+1;i++){
                int j = i+L-1;

                if(s[i]==s[j]){// no need to insert any character
                    t[i][j] = t[i+1][j-1];
                }
                else{
                    t[i][j] = 1 + min(t[i][j-1],t[i+1][j]);
                }
            }
        }
        return t[0][n-1];// s[0...n-1]
    }
};
*/