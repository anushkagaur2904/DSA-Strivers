//Longest Repeating Character Replacement 
//https://leetcode.com/problems/longest-repeating-character-replacement/description/

//BRUTE
/*
maxlen=0
for(i=0 to n){
    hash[26]={0}, maxf=0
    for(j=i to n){
        hash[s[j]-'A']++;
        maxf = max(maxf,hash[s[j]-'A']);
        changes = (j-i+1)-maxf;
        if(changes<=k){
            maxlen = max(maxlen,j-i+1);
        }
        else{
            break;
        }
    }
}
*/

//OPTIMAL
/*
class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0, r = 0, maxlen = 0, maxf = 0;
        int hash[26] = {0};

        while (r < s.size()) {
            hash[s[r] - 'A']++;

            maxf = max(maxf, hash[s[r] - 'A']);

            if ((r - l + 1) - maxf > k) {
                hash[s[l] - 'A']--;
                l++;
            }

            if ((r - l + 1) - maxf <= k) {
                maxlen = max(maxlen, r - l + 1);
            }

            r++;
        }

        return maxlen;
    }
};
*/