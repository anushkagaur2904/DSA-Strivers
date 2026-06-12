//String to Integer(ATOI)
//https://leetcode.com/problems/string-to-integer-atoi/description/

/*
class Solution {
public:
    int myAtoi(string s) {
        //cout<< "INT_MIN" <<INT_MIN <<endl;
        //cout<< "INT_MAX" <<INT_MAX <<endl;
        //possible cases
        //"2345hello" -> returns 2345

        int i=0;
        int l = s.length();

        //ignore leading whitespace
        while(i<l && isspace(s[i])){
            i++;
        }
        //if no more characters i.e string is "       "
        if(i==l){
            return 0;
        }

        //check for valid sign i.e + or -
        bool negative = false;
        //"  -23"
        if(s[i]=='-'){
            negative = true;
            //move on to next character
            i++;
        }
        //"   +23"
        else if(s[i]=='+'){
            //move on to next character
            i++;
        }
        //"     e23" digit nhi aayi 
        else if(!isdigit(s[i])){
            return 0;
        }
        // if no more characters
        if(i==l){
            return 0;
        }

        //skip the leading zeroes
        while(i<l && s[i]=='0'){
            i++;
        }
        //"            0000"
        //if no more characters
        if(i==l){
            return 0;
        }

        //extract numbers and return int value
        int value = 0;
        //INT_MAX is 2147483647 isliye 7 se badhi digit nhi aa payegi
        //INT_MIN is -2147483648 isliye 8 se bdhi digit nhi aa payegi
        int max = INT_MAX/10;
        int min = INT_MIN/10;
        while(i<l && isdigit(s[i])){
            int digit = s[i] - '0'; //get corresponding digit for this char

            //check if value is within limits
            //handle overflow
            if(value>max){
                return INT_MAX;
            }
            else if(value==max && digit>7){
                return INT_MAX;
            }
            //handle underflow
            if(value<min){
                return INT_MIN;
            }
            if(value==min && digit>8){
                return INT_MIN;
            }
            if(negative){
                value = value*10 + (-digit);
            }
            else{
                value = value*10 + (digit);
            }
            i++;
        }
        //return value
        return value;
    }
};
*/