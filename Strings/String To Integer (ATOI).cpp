// Leetcode -  String to Integer (atoi)
// Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer (similar to C/C++'s atoi function).

// The algorithm for myAtoi(string s) is as follows:

// Read in and ignore any leading whitespace.
// Check if the next character (if not already at the end of the string) is '-' or '+'. Read this character in if it is either. This determines if the final result is negative or positive respectively. Assume the result is positive if neither is present.
// Read in next the characters until the next non-digit character or the end of the input is reached. The rest of the string is ignored.
// Convert these digits into an integer (i.e. "123" -> 123, "0032" -> 32). If no digits were read, then the integer is 0. Change the sign as necessary (from step 2).
// If the integer is out of the 32-bit signed integer range [-231, 231 - 1], then clamp the integer so that it remains in the range. Specifically, integers less than -231 should be clamped to -231, and integers greater than 231 - 1 should be clamped to 231 - 1.
// Return the integer as the final result.

class Solution {
public:
    bool isNumber(char c){
        int character = c - '0';
        if(character >= 0 && character<= 9) return true;
        return false;
    }
    bool checkRange(long int numToCheck){
        if(numToCheck > INT_MAX) return false;
        return true;
    }
    int myAtoi(string s) {
        bool sign = false;
        long long int result = 0;
        int i = 0;
        int size = s.length();
        while(i<size){
            //1. ignore spaces in front
            while(i<size && s[i] == ' '){
                i++;
            }
            //2. look for - or + sign
            if(s[i] == '-'){
                sign = true;
                i++;
            }
            else if(s[i] == '+'){
                sign = false;
                i++;
            }
            //3. numbers or characters start
            if(i<size && !isNumber(s[i])) return 0;
            //cout<<1;
            while(i<size && isNumber(s[i])){
                result = result*10 + (s[i]-'0');
                i++;
                if(!checkRange(result)){
                   if(sign) return -2147483648;
                    else return 2147483647;
                }
            }
            break;
        }
        if(sign){
            return 0-result;
        }
        else return result;
        
    }
    
};