//Count Occurrences Of Anagrams
//https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1

/*
class Solution {
public:
    int search(string &pat, string &txt) {

        int k = pat.size();

        unordered_map<char, int> mp;

        // Store frequency of pattern characters
        for(auto ch : pat) {
            mp[ch]++;
        }

        int count = mp.size(); // distinct characters
        int i = 0, j = 0;
        int ans = 0;

        while(j < txt.size()) {

            // Calculation
            if(mp.find(txt[j]) != mp.end()) {

                mp[txt[j]]--;

                if(mp[txt[j]] == 0) {
                    count--;
                }
            }

            // Window size < k
            if(j - i + 1 < k) {
                j++;
            }

            // Window size == k
            else if(j - i + 1 == k) {

                // Anagram found
                if(count == 0) {
                    ans++;
                }

                // Remove contribution of ith element
                if(mp.find(txt[i]) != mp.end()) {

                    mp[txt[i]]++;

                    // Character was perfectly matched
                    if(mp[txt[i]] == 1) {
                        count++;
                    }
                }

                // Slide window
                i++;
                j++;
            }
        }

        return ans;
    }
};


*/