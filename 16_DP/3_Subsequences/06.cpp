//Assign Cookies
//https://leetcode.com/problems/assign-cookies/

/*
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(begin(g),end(g));//greed
        sort(begin(s),end(s));//size of cookies

        int m = g.size();
        int n = s.size();

        int i = 0;
        int j = 0;

        while(i<m && j<n){
            if(s[j]>=g[i]){//agar size ki value greed se >= mtlb satisfied
                i++;
            }
            j++;//satisfied nhi hua toh aage vali cookie dekho
        }
        return i;
    }
};
*/