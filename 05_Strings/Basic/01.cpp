//Remove Outermost Parentheses
//https://leetcode.com/problems/remove-outermost-parentheses/description/

/*
class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==')')count--;
            //after closing check
            if(count!=0) ans.push_back(s[i]);
            //before opening check
            if(s[i]=='(')count++;
        }
        return ans;
    }
};
*/