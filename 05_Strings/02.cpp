//Longest Palindrome in a string
//https://leetcode.com/problems/longest-palindromic-substring/

/*
class Solution {
public:
    string longestPalindrome(string s) {

        // If string has 0 or 1 character,
        // it is already a palindrome.
        if (s.length() <= 1)
            return s;

        string LPS = ""; // Stores Longest Palindromic Substring

        // Consider each character as the center
        for (int i = 0; i < s.length(); i++) {

            // ==========================
            // Case 1: Odd Length Palindrome
            // Example: "racecar"
            // Center = 'e'
            // ==========================
            int low = i;
            int high = i;

            // Expand in both directions
            while (low >= 0 &&
                   high < s.length() &&
                   s[low] == s[high]) {

                low--;
                high++;
            }

            // Extract palindrome
            string palindrome =
                s.substr(low + 1, high - low - 1);

            // Update answer if longer palindrome found
            if (palindrome.length() > LPS.length()) {
                LPS = palindrome;
            }

            // ==========================
            // Case 2: Even Length Palindrome
            // Example: "abba"
            // Center = between 'b' and 'b'
            // ==========================
            low = i;
            high = i + 1;

            // Expand in both directions
            while (low >= 0 &&
                   high < s.length() &&
                   s[low] == s[high]) {

                low--;
                high++;
            }

            // Extract palindrome
            palindrome =
                s.substr(low + 1, high - low - 1);

            // Update answer if longer palindrome found
            if (palindrome.length() > LPS.length()) {
                LPS = palindrome;
            }
        }

        return LPS;
    }
};
*/