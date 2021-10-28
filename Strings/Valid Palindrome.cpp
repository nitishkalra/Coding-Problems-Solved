// Leetcode - Valid Palindrome

// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.

class Solution {
public:
    bool isPalindrome(string s) {
        string new_str = "";
        for(int i = 0; i<s.length();i++){
            if(iswalnum(s[i])){
                if(s[i]>=65 && s[i] <=90){
                    new_str += (s[i]+32);    
                }
                else{
                    new_str += s[i];
                }
            }
        }
        if(new_str.length()==0) return true;
        int n = new_str.length();
        for(int i =0 ;i<n/2;i++){
            if(new_str[i] != new_str[n-i-1]) return false;
        }
        
        
        return true;
    }
};