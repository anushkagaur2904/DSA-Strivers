//Longest Substring without Repeating Characters
//https://leetcode.com/problems/longest-substring-without-repeating-characters/

//BRUTE
/*
for(i=0;i<n;i++){
    sub="";
    for(j=i;j<n;j++){
        sub=sub+s[j];
    }
}
*/

//BETTER
/*
int maxlen=0;
for(i=0;i<n;i++){
    hash[256]={0};
    for(j=i;j<n;j++){
        if(hash[s[j]==1]) break;
        len=j-i+1;
        maxlen = max(maxlen,len);
        hash[s[j]]=1;
    }
}
return maxlen;
*/

/*
class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n = s.size();

        if(n == 0)
            return 0;

        int l = 0, r = 0;
        int maxLen = 0;

        vector<int> hash(256, -1);

        while(r < n) {

            if(hash[s[r]] != -1 &&
               hash[s[r]] >= l) {

                l = hash[s[r]] + 1;
            }

            maxLen = max(maxLen, r - l + 1);

            hash[s[r]] = r;

            r++;
        }

        return maxLen;
    }
};
*/