//Pow(x,n)
//https://leetcode.com/problems/powx-n/description/

/*
class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;  // convert to long long

        if (N < 0) {
            N = -1 * N;
        }

        double ans = 1.0;

        while (N > 0) {
            if (N % 2 == 1) {
                ans *= x;
                N=N-1;
            }
            else{
                x *= x;
                N /= 2;
            }
            
        }
        if(n<0){
            ans = (double)(1.0)/(double)(ans);
        }
        return ans;
    }
};
*/