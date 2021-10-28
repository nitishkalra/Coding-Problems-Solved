// Leetcode - Reverse String
// Write a function that reverses a string. The input string is given as an array of characters s.

class Solution {
public:
    void reverseString(vector<char>& s) {
        int size = s.size();
        char temp;
        for(int i=0;i<size/2;i++){
            temp = s[i];
            s[i] = s[size-i-1];
            s[size-i-1] = temp;
        }
    }
};