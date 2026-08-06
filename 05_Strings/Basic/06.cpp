//Rotate String
//https://leetcode.com/problems/rotate-string/description/

//BRUTE FORCE
/*
class Solution {
public:
    bool rotateString(string s, string goal) {
        int m = s.length();
        int n = goal.length();

        if(m!=n) return false;

        for(int count=1;count<=m;count++){
            rotate(begin(s),begin(s)+1,end(s));
            if(s==goal) return true;
        }
        return false;
    }
};
*/

//APPROACH 2
/*
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