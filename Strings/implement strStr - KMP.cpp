//Leetcode - Implment strStr

// Implement strStr().

// Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

// Clarification:

// What should we return when needle is an empty string? This is a great question to ask during an interview.

// For the purpose of this problem, we will return 0 when needle is an empty string. This is consistent to C's strstr() and Java's indexOf().

// Solution - Using KMP Algorithm

class Solution {
public:
    int strStr(string haystack, string needle) {
        //edge cases
        if(needle.length() == 0 ) return 0;
        
        // Build Prefix-Suffix Table
        int kmp[needle.length()];
        kmp[0] = 0;
        int i = 0, j = 1;
        while(i<haystack.length() && j<needle.length()){
            if(needle[i] == needle[j]){
                kmp[j] = i+1;
                i++;
                j++;
            }
            else{
                if(i!=0){
                    i = kmp[i-1];
                }
                else{
                    kmp[j] = 0;
                    j++;
                }
                
            }
        }
        int ans = -1;
        i = 0;
        j=0;
        while(i<haystack.length()&&j<needle.length()){
            if(haystack[i] == needle[j]){
                i++;
                j++;   
                if(j == needle.length()){
                    return i-j;
                }
            }
            else{
                if(j!=0) j = kmp[j-1];
                else i++;
            }
        }
        return ans;
    }
};