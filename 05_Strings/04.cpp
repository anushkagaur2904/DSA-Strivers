//Strings Rotations of Each Other
//https://leetcode.com/problems/rotate-string/submissions/1994072133/
/*
✅ Approach (say this in interview)

“If s2 is a rotation of s1, then it must be a substring of s1 + s1.”

👉 Why?

Rotations of "abcd" → "abcdabcd" contains:
"abcd"
"bcda"
"cdab"
"dabc"

Complexity
Time: O(n) (substring search)
Space: O(n)

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()){
            return false;
        }
        string temp = s+s;
        return temp.find(goal)!=string::npos;
    }
};
*/