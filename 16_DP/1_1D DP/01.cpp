//Climbing Stairs
//https://leetcode.com/problems/climbing-stairs/description/

//RECURSION
/*
class Solution {
public:
    int solve(int n){
        if(n<0) return 0;
        if(n==0) return 1;//we have got 1 way to cover all stairs

        int one_step = solve(n-1);
        int two_step = solve(n-2);

        return one_step + two_step;
    }
    int climbStairs(int n) {
        return solve(n);
    }
};
*/

//MEMOIZATION
/*
class Solution {
public:
    int t[46];
    int solve(int n){
        if(n<0) return 0;
        if(t[n]!=-1) return t[n];
        if(n==0) return 1;//we have got 1 way to cover all stairs

        int one_step = solve(n-1);
        int two_step = solve(n-2);

        return t[n]=one_step + two_step;
    }
    int climbStairs(int n) {
        memset(t,-1,sizeof(t));
        return solve(n);
    }
};
*/

//BOTTOM UP
/*
class Solution {
public:
    int climbStairs(int n) {
        if(n==0 || n==1 || n==2){
            return n;
        }
        vector<int> t(n+1);
        t[0]=0;
        t[1]=1;
        t[2]=2;

        for(int i=3;i<=n;i++){
            t[i] = t[i-1]+t[i-2];
        }
        return t[n];
    }
};
*/

//FIBONACCI SERIES TYPE
/*
class Solution {
public:
    int climbStairs(int n) {
        if(n==0 || n==1 || n==2){
            return n;
        }
        int a = 1;//i-2
        int b = 2;//i-1
        int c = 3;//i

        for(int i=3;i<=n;i++){
            c = b+a;
            int temp_b = b;
            b=c;
            a = temp_b;
        }
        return c;
    }
};
*/