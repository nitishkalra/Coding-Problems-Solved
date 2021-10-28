// Leetcode - Reverse Integer
// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

class Solution {
public:
    int reverse(int x) {
        bool sign = false;
        long int reversed = 0;
        long int number = x;
        if(number<0){
            sign = true;
            number = 0-number;
        }
        while(number!=0){
            reversed = reversed*10 + number%10;
            number/=10;
        }
        if(reversed >= INT_MAX) return 0;
        if(sign){
            reversed = 0-reversed;
        }
        return reversed;

    }
};